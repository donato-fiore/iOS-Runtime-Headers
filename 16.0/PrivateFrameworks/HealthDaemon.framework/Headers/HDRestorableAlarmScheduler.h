// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRESTORABLEALARMSCHEDULER_H
#define HDRESTORABLEALARMSCHEDULER_H

@class NSMapTable, NSDate, NSString, HDXPCAlarm;
@protocol HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDProfileReadyObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    NSMapTable *_clients;
    BOOL _hasInitializedSystemScheduler;
    BOOL _maintenanceOperationQueued;
    BOOL _needsMaintenanceNotifyAndSchedule;
    BOOL _needsLockStateUpdates;
    BOOL _isDeviceOnWrist;
}


@property (copy, nonatomic) NSDate *_unitTest_currentDate; // ivar: __unitTest_currentDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRegisteredForLockStateUpdates; // ivar: _isRegisteredForLockStateUpdates
@property (readonly, nonatomic) BOOL isRegisteredForOnWristUpdates; // ivar: _isRegisteredForOnWristUpdates
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler; // ivar: _systemScheduler


-(BOOL)removeAllEventsWithClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceAllScheduledEventsWithClientIdentifier:(id)arg0 newEvents:(id)arg1 error:(*id)arg2 ;
-(BOOL)scheduleEvents:(id)arg0 error:(*id)arg1 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)scheduledEventsForClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)addAlarm:(id)arg0 ;
-(void)checkForDueEventsImmediatelyWithCompletion:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeAlarm:(id)arg0 ;


@end


#endif