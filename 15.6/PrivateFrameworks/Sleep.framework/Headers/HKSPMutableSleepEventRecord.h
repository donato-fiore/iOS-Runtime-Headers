// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPMUTABLESLEEPEVENTRECORD_H
#define HKSPMUTABLESLEEPEVENTRECORD_H

@class NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPSleepEventRecord.h"
#import "HKSPChangeSet.h"

@interface HKSPMutableSleepEventRecord : HKSPSleepEventRecord <HKSPMutableObject>



@property (readonly, nonatomic) HKSPChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (nonatomic) NSInteger sleepCoachingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic) NSInteger sleepTrackingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic) NSInteger sleepWindDownShortcutsOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;
@property (copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (copy, nonatomic) NSDate *wakeUpOverriddenDate;
@property (copy, nonatomic) NSDate *wakeUpWithNoAlarmDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;
-(void)updateSleepCoachingOnboardingCompletedVersion:(NSInteger)arg0 completedDate:(id)arg1 ;
-(void)updateSleepTrackingOnboardingCompletedVersion:(NSInteger)arg0 completedDate:(id)arg1 ;
-(void)updateSleepWindDownShortcutsOnboardingCompletedVersion:(NSInteger)arg0 completedDate:(id)arg1 ;


@end


#endif