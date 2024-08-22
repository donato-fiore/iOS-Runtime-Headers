// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACDSPCONTROLLER_H
#define SACDSPCONTROLLER_H

@class NSXPCConnection, NSString;
@protocol SACServiceDSPDelegate, SACServiceDelegate, SACDSPDelegate;

#import <Foundation/Foundation.h>


@interface SACDSPController : NSObject <SACServiceDSPDelegate>

 {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> *mProxyInterface;
    id<SACServiceDSPDelegate> *mSACDSPDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SACDSPDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)getDSPInfoByKey:(id)arg0 withReply:(id)arg1 ;
-(void)handleServiceCrash;
-(void)setDSPConfig:(id)arg0 ;
-(void)startServiceConnection;


@end


#endif