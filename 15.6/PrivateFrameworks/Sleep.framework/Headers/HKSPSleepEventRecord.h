// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPSLEEPEVENTRECORD_H
#define HKSPSLEEPEVENTRECORD_H

@class NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPOnboardingModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying, HKSPSyncAnchor;

#import <Foundation/Foundation.h>


@interface HKSPSleepEventRecord : NSObject <HKSPOnboardingModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>



@property (readonly, nonatomic, getter=isAnySleepCoachingOnboardingCompleted) BOOL anySleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepTrackingOnboardingCompleted) BOOL anySleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepWindDownShortcutsOnboardingCompleted) BOOL anySleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepCoachingOnboardingCompleted) BOOL currentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepTrackingOnboardingCompleted) BOOL currentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepWindDownShortcutsOnboardingCompleted) BOOL currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *goodMorningDismissedDate; // ivar: _goodMorningDismissedDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSInteger sleepCoachingOnboardingCompletedVersion;
@property (readonly, nonatomic) NSInteger sleepCoachingOnboardingCompletedVersion; // ivar: _sleepCoachingOnboardingCompletedVersion
@property (readonly, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate; // ivar: _sleepCoachingOnboardingFirstCompletedDate
@property (readonly, nonatomic) NSInteger sleepTrackingOnboardingCompletedVersion;
@property (readonly, nonatomic) NSInteger sleepTrackingOnboardingCompletedVersion; // ivar: _sleepTrackingOnboardingCompletedVersion
@property (readonly, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate; // ivar: _sleepTrackingOnboardingFirstCompletedDate
@property (readonly, nonatomic) NSInteger sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, nonatomic) NSInteger sleepWindDownShortcutsOnboardingCompletedVersion; // ivar: _sleepWindDownShortcutsOnboardingCompletedVersion
@property (readonly, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate; // ivar: _sleepWindDownShortcutsOnboardingFirstCompletedDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmDismissedDate; // ivar: _wakeUpAlarmDismissedDate
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate; // ivar: _wakeUpAlarmSnoozedUntilDate
@property (readonly, copy, nonatomic) NSDate *wakeUpConfirmedUntilDate; // ivar: _wakeUpConfirmedUntilDate
@property (readonly, copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate; // ivar: _wakeUpEarlyNotificationConfirmedDate
@property (readonly, copy, nonatomic) NSDate *wakeUpOverriddenDate; // ivar: _wakeUpOverriddenDate
@property (readonly, copy, nonatomic) NSDate *wakeUpWithNoAlarmDate; // ivar: _wakeUpWithNoAlarmDate


+(BOOL)supportsSecureCoding;
+(void)_appendDateDescriptionIfRelevant:(id)arg0 withName:(id)arg1 toBuilder:(id)arg2 ;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)_needsMigrationForCoder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModel:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectWithSyncAnchor:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_buildForEquivalenceTo:(id)arg0 builder:(id)arg1 ;
-(void)_migrateForCoder:(id)arg0 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif