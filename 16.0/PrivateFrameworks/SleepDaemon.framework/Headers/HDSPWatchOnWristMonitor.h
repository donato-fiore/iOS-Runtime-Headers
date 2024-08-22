// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPWATCHONWRISTMONITOR_H
#define HDSPWATCHONWRISTMONITOR_H

@class NSDate, HKSPObserverSet, HKWristDetectionSettingManager;
@protocol HKWristDetectionSettingManagerObserver, HKSPUserDefaults;

#import <Foundation/Foundation.h>


@interface HDSPWatchOnWristMonitor : NSObject <HKWristDetectionSettingManagerObserver>



@property (readonly, nonatomic) BOOL isOnWrist;
@property (readonly, nonatomic) BOOL isWristDetectEnabled;
@property (readonly, nonatomic) NSDate *lastOnWristDate;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<HKSPUserDefaults> *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingsManager; // ivar: _wristDetectionSettingsManager


-(id)initWithUserDefaults:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 callbackScheduler:(id)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg0 ;


@end


#endif