// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPTRACKINGMANAGER_H
#define HDSPSLEEPTRACKINGMANAGER_H

@class NSString, HKSPObserverSet;
@protocol HDSPSleepSessionManagerDelegate, HDSPEnvironmentAware, HDSPSleepTracker;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSleepSessionManager.h"

@interface HDSPSleepTrackingManager : NSObject <HDSPSleepSessionManagerDelegate, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDSPSleepSessionManager *sleepSessionManager; // ivar: _sleepSessionManager
@property (readonly, nonatomic) HKSPObserverSet *sleepSessionObservers; // ivar: _sleepSessionObservers
@property (readonly, nonatomic) NSObject<HDSPSleepTracker> *sleepTracker; // ivar: _sleepTracker
@property (readonly) Class superclass;


+(id)platformSpecificTrackerWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 sleepSessionManager:(id)arg1 sleepTracker:(id)arg2 ;
-(id)sleepSessionManager:(id)arg0 requestsProcessedSessionForSession:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sleepSessionManager:(id)arg0 didSaveArchivedSessions:(id)arg1 ;
-(void)sleepSessionManager:(id)arg0 didSaveSession:(id)arg1 ;
-(void)sleepSessionManagerDidFinishSession:(id)arg0 ;


@end


#endif