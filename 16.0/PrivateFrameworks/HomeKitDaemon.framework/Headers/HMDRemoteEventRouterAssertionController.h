// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H
#define HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H

@class NSNotificationCenter, NSHashTable, NSString;
@protocol HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDelegate, OS_dispatch_queue, HMETimerProvider;

#import <Foundation/Foundation.h>

#import "HMDRemoteEventRouterProcessStateChangeAssertion.h"

@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDelegate>

 {
    BOOL _isPluggedIn;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_clients;
    id<HMETimerProvider> *_timerProvider;
    HMDRemoteEventRouterProcessStateChangeAssertion *_homeAppStateChangeAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 notificationCenter:(id)arg1 ;
-(void)_handleProcessStateChange:(id)arg0 ;
-(void)configure;
-(void)didChangeForegroundState:(BOOL)arg0 ;
-(void)didExpireHysteresis:(BOOL)arg0 ;
-(void)registerClient:(id)arg0 ;


@end


#endif