// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCNOTIFICATIONMANAGER_H
#define HDMCNOTIFICATIONMANAGER_H

@class HDPrimaryProfile, HKMCSettingsManager, HDKeyValueDomain, HKMCAnalysis, NSDate, NSString, HDRestorableAlarm;
@protocol HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDMCAnalysisManager.h"

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver>

 {
    HDPrimaryProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    HDKeyValueDomain *_keyValueDomain;
    HKMCAnalysis *_lastAnalysis;
    NSDate *_currentDateOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDRestorableAlarm *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)_currentDate;
-(id)initWithProfile:(id)arg0 analysisManager:(id)arg1 settingsManager:(id)arg2 ;
-(id)scheduledNotificationsWithError:(*id)arg0 ;
-(void)_queue_alarm:(id)arg0 didReceiveDueEvents:(id)arg1 ;
-(void)_queue_removeAllScheduledNotificationsIfNotEnabled;
-(void)_queue_rescheduleNotificationsForAnalysis:(id)arg0 ;
-(void)_setCurrentDate:(id)arg0 ;
-(void)analysisManager:(id)arg0 didUpdateAnalysis:(id)arg1 ;
-(void)invalidate;
-(void)settingsManagerDidUpdateNotificationSettings:(id)arg0 ;
-(void)start;


@end


#endif