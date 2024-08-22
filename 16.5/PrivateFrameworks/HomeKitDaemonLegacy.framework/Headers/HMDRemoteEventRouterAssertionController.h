// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H
#define HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H

@class NSNotificationCenter, NSHashTable, NSString;
@protocol HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMDRemoteEventRouterClientActiveStateDelegate, OS_dispatch_queue, HMETimerProvider;

#import <Foundation/Foundation.h>

#import "HMDRemoteEventRouterProcessStateChangeAssertion.h"

@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMDRemoteEventRouterClientActiveStateDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _isPluggedIn;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_clients;
    id<HMETimerProvider> *_timerProvider;
    HMDRemoteEventRouterProcessStateChangeAssertion *_appStateChangeAssertion;
    NSHashTable *_daemonAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)createEventRouterAssertion;
-(id)initWithQueue:(id)arg0 notificationCenter:(id)arg1 ;
-(id)takeEventRouterAssertion;
-(void)assertionDidBecomeInactive:(id)arg0 ;
-(void)configure;
-(void)handleConnectionActiveStateChange:(id)arg0 ;
-(void)handleProcessStateChange:(id)arg0 ;
-(void)registerClient:(id)arg0 ;


@end


#endif