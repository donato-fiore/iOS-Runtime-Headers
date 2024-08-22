// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPNOTIFICATIONLISTENER_H
#define HDSPNOTIFICATIONLISTENER_H

@class NSString, NSMutableDictionary, HKSPObserverSet;
@protocol HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPNotificationListener : NSObject <HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s launchNotificationRegistrationLock; // ivar: _launchNotificationRegistrationLock
@property (readonly, nonatomic) NSMutableDictionary *launchNotificationRegistrations; // ivar: _launchNotificationRegistrations
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(void)_handleNotificationWithName:(id)arg0 completion:(id)arg1 ;
-(void)_registerForStream:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)registerForLaunchNotificationWithName:(char *)arg0 key:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)startListening;
-(void)unregisterForLaunchNotificationWithName:(char *)arg0 key:(id)arg1 ;


@end


#endif