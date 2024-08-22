// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPLOCKSCREENASSERTIONMANAGER_H
#define HDSPSLEEPLOCKSCREENASSERTIONMANAGER_H

@class NSXPCListener, NSXPCConnection, NSString, SBSLockScreenRemoteContentAssertion;
@protocol HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware, HDSPSleepLockScreenAssertionManager, HDSPSleepLockScreenAssertionManagerDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepLockScreenAssertionManager : NSObject <HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware, HDSPSleepLockScreenAssertionManager>

 {
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    os_unfair_lock_s _connectionLock;
}


@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSleepLockScreenAssertionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL hasLockScreenConnection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSLockScreenRemoteContentAssertion *lockScreenAssertion; // ivar: _lockScreenAssertion
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)connect;
-(void)didDismissWithReason:(NSInteger)arg0 ;
-(void)invalidateAssertion;
-(void)sendLockScreenState:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)takeAssertionIfNeeded;


@end


#endif