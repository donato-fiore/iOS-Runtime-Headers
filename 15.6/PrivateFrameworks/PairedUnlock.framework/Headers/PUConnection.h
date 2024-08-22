// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCONNECTION_H
#define PUCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, PUConnectionDelegate;

#import <Foundation/Foundation.h>

#import "PUConnectionUnlockClient.h"

@interface PUConnection : NSObject {
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    PUConnectionUnlockClient *_unlockClient;
}


@property (weak) NSObject<PUConnectionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *remoteDeviceRemoveLockoutHandler; // ivar: _remoteDeviceRemoveLockoutHandler


+(id)clientInterface;
+(id)serverInterface;
+(void)syncPasscodeState;
-(char *)queueNameWithSuffix:(id)arg0 ;
-(id)delegateIfRespondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)serverConnection;
-(void)dealloc;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didGetRemoteDeviceState:(id)arg0 error:(id)arg1 ;
-(void)didPairForUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didUnpairForUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)disableOnlyRemoteUnlock;
-(void)enableOnlyRemoteUnlockWithPasscode:(id)arg0 ;
-(void)getRemoteDeviceState:(id)arg0 ;
-(void)pairForUnlockWithPasscode:(id)arg0 ;
-(void)queryRemoteDeviceState:(id)arg0 ;
-(void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg0 remoteDeviceState:(id)arg1 error:(id)arg2 ;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg0 error:(id)arg1 ;
-(void)remoteDeviceDidUnlock;
-(void)requestDeviceSetWristDetectionDisabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)requestRemoteDeviceRemoteAction:(NSInteger)arg0 type:(NSInteger)arg1 ;
-(void)requestRemoteDeviceRemoveLockout:(id)arg0 ;
-(void)requestRemoteDeviceUnlockNotification;
-(void)setServerConnection:(id)arg0 ;
-(void)unpairForUnlock;


@end


#endif