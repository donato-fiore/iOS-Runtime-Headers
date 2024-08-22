// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEADPHONEDOSEMETADATASTORE_H
#define HDHEADPHONEDOSEMETADATASTORE_H

@class HDProfile, HDKeyValueDomain, HDProfileIdentifier;

#import <Foundation/Foundation.h>


@interface HDHeadphoneDoseMetadataStore : NSObject {
    HDProfile *_profile;
    HDKeyValueDomain *_domain;
    os_unfair_lock_s _lock;
    CGFloat _doseLimit;
    BOOL _shouldLoadDoseLimitOverride;
}


@property (readonly, nonatomic) HDProfileIdentifier *_profileIdentifier;


+(id)_earliestFireDateAllowedWithNow:(id)arg0 ;
-(BOOL)_clearPreviousSevenDayNotificationFireDateWithError:(*id)arg0 ;
-(BOOL)_didNotifyWithFireDate:(id)arg0 changed:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_overrideDoseLimit:(id)arg0 error:(*id)arg1 ;
-(BOOL)_rebuildPreviousSevenDayNotificationFireDateWithNow:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setPreviousSevenDayNotificationFireDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setShouldRebuildPreviousSevenDayNotification:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_setShouldRebuildSevenDayStatistics:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_shouldRebuildPreviousSevenDayNotificationWithError:(*id)arg0 ;
-(BOOL)_shouldRebuildSevenDayStatisticsWithError:(*id)arg0 ;
-(BOOL)didNotifyWithFireDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)rebuildPreviousSevenDayNotificationFireDateIfNeededWithError:(*id)arg0 ;
-(BOOL)rebuildPreviousSevenDayNotificationFireDateWithError:(*id)arg0 ;
-(BOOL)shouldNotifyUserForAccumulatedDose:(CGFloat)arg0 ;
-(NSInteger)_updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)arg0 now:(id)arg1 error:(*id)arg2 ;
-(NSInteger)updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)arg0 error:(*id)arg1 ;
-(id)_fetchDoseLimitInfoWithError:(*id)arg0 ;
-(id)_fetchPreviousSevenDayNotificationFireDateWithError:(*id)arg0 ;
-(id)_fetchPreviousSevenDayNotificationFireDateWithNow:(id)arg0 error:(*id)arg1 ;
-(id)_info;
-(id)_infoForAccumulatedDoseAtFireDate:(id)arg0 ;
-(id)_infoForSevenDayDoseAtFireDate:(id)arg0 ;
-(id)_lock_fetchDoseLimitInfoWithError:(*id)arg0 ;
-(id)_mostRecentSevenDayNotificationFowNow:(id)arg0 error:(*id)arg1 ;
-(id)collectionIntervalForDoseAccumulated:(CGFloat)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_lock_loadDoseLimitOverride;
-(void)_lock_loadDoseLimitOverrideIfNeeded;


@end


#endif