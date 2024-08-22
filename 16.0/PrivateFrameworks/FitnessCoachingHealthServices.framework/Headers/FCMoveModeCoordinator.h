// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMOVEMODECOORDINATOR_H
#define FCMOVEMODECOORDINATOR_H

@class HDProfile, NSDateComponents, HKCategorySample, HDKeyValueDomain, FCCDateProvider, NSString;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, OS_dispatch_queue, FCMoveModeCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface FCMoveModeCoordinator : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSDateComponents *_birthDateComponents;
    HKCategorySample *_mostRecentActivityMoveModeChangeSample;
    BOOL _isWheelchairUser;
    HDKeyValueDomain *_keyValueDomain;
    FCCDateProvider *_dateProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCMoveModeCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_loadBirthDateComponents;
-(BOOL)_queue_loadMoveModeChangeSample;
-(BOOL)_queue_loadWheelchairUse;
-(CGFloat)_delay;
-(NSInteger)_nextActivityMoveModeForNotificationType:(NSInteger)arg0 ;
-(NSInteger)_queue_determineActivityMoveModeNotificationType;
-(id)_birthdayForAge:(NSInteger)arg0 ;
-(id)_dateByAddingNumberOfWeeks:(NSInteger)arg0 toDate:(id)arg1 ;
-(id)_dateForKey:(id)arg0 ;
-(id)_lastGraduationNotificationDate;
-(id)_lastModeChangeNotificationDate;
-(id)_lastWheelchairModeChangeNotificationDate;
-(id)_nextActivityMoveModeStartDateForNotificationType:(NSInteger)arg0 ;
-(id)_tuesdayAfterDate:(id)arg0 ;
-(id)_tuesdayBeforeDate:(id)arg0 ;
-(id)_upgradeToMoveTimeNotificationDate;
-(id)initWithDateProvider:(id)arg0 profile:(id)arg1 serviceQueue:(id)arg2 ;
-(id)keyValueDomain;
-(void)_queue_scheduleNotificationIfNeeded;
-(void)_saveMoveModeChangeSampleForActivityMoveMode:(NSInteger)arg0 date:(id)arg1 ;
-(void)_setBirthDateComponents:(id)arg0 ;
-(void)_setDate:(id)arg0 forKey:(id)arg1 ;
-(void)_setLastGraduationNotificationDate:(id)arg0 ;
-(void)_setLastModeChangeNotificationDate:(id)arg0 ;
-(void)_setLastWheelchairModeChangeNotificationDate:(id)arg0 ;
-(void)_setMostRecentActivityMoveModeChangeSample:(id)arg0 ;
-(void)_setUpgradeToMoveTimeNotificationDate:(id)arg0 ;
-(void)_setisWheelchairUser:(BOOL)arg0 ;
-(void)_significantTimeChangeOccurred;
-(void)_userCharacteristicsDidChange;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)notificationPosted:(id)arg0 error:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif