// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPTTSUCHANNEL_H
#define CDPTTSUCHANNEL_H

@class NSString, CUMessageSession;
@protocol CDPSecureChannelProxy, CDPSecureChannelApprovingProxy;

#import <Foundation/Foundation.h>


@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy>

 {
    BOOL _approverBackupRecordsExist;
    NSUInteger _approveriCloudKeychainState;
    BOOL _sentInitialResponse;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CUMessageSession *sharingSession; // ivar: _sharingSession
@property (readonly) Class superclass;


-(BOOL)approverBackupRecordsExist;
-(NSUInteger)approveriCloudKeychainState;
-(id)initWithContext:(id)arg0 ;
-(void)listenForPayloadsWithHandler:(id)arg0 ;
-(void)sendPayload:(id)arg0 completion:(id)arg1 ;
-(void)setApproverBackupRecordsExist:(BOOL)arg0 ;
-(void)setApproveriCloudKeychainState:(NSUInteger)arg0 ;


@end


#endif