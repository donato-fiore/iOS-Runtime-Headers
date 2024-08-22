// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPPIGGYBACKINGCHANNEL_H
#define CDPPIGGYBACKINGCHANNEL_H

@class CDPContext, NSString;
@protocol CDPSecureChannelProxy;

#import <Foundation/Foundation.h>


@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy>

 {
    CDPContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)approverBackupRecordsExist;
-(NSUInteger)approveriCloudKeychainState;
-(id)_replyContextWithPakeData:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)sendPayload:(id)arg0 completion:(id)arg1 ;


@end


#endif