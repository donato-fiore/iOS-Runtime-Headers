// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STBLUEPRINT_H
#define STBLUEPRINT_H

@class NSSet, NSDate, NSString, NSData;
@protocol STSerializableMappedObject, STUniquelySerializableManagedObject, STVersionVectorable;


#import "STUniquedManagedObject.h"
#import "STDowntimeConfiguration.h"
#import "STCoreOrganization.h"
#import "STCoreDowntimeOverride.h"
#import "STBlueprintSchedule.h"
#import "STBlueprintUsageLimit.h"

@interface STBlueprint : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject, STVersionVectorable>



@property (retain, nonatomic) NSSet *configurations;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) STDowntimeConfiguration *downtimeConfiguration;
@property (getter=isDowntimeEnabled) BOOL downtimeEnabled;
@property (readonly, copy) NSString *downtimeScheduleText;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSDate *expiration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL invertUsageLimit;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL isTombstoned;
@property (readonly, copy) NSString *limitDisplayName;
@property (nonatomic) BOOL limitEnabled;
@property (readonly, copy) NSString *limitScheduleText;
@property (copy, nonatomic) NSDate *minimumInstallationDate;
@property (retain, nonatomic) STCoreOrganization *organization;
@property (retain) STCoreDowntimeOverride *override;
@property (retain, nonatomic) STBlueprintSchedule *schedule;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) STBlueprintUsageLimit *usageLimit;
@property (getter=isUsageLimitEnabled) BOOL usageLimitEnabled;
@property (retain, nonatomic) NSSet *users;
@property (copy, nonatomic) NSData *versionVector;


+(BOOL)_isStateChangeValid:(NSInteger)arg0 forState:(NSInteger)arg1 ;
+(BOOL)_updateConfiguration:(id)arg0 withDeclaration:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(BOOL)deleteManagedUserBlueprintForUser:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteUsageLimitWithIdentifier:(id)arg0 user:(id)arg1 managedObjectContext:(id)arg2 error:(*id)arg3 ;
+(BOOL)removeFixedDurationOnDemandDowntimeForUserID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveAlwaysAllowListForUser:(id)arg0 withBundleIDs:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveDowntimeForUser:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 scheduleByWeekdayIndex:(id)arg3 enabled:(BOOL)arg4 behaviorType:(NSUInteger)arg5 error:(*id)arg6 ;
+(BOOL)saveManagedUserBlueprintForUser:(id)arg0 error:(*id)arg1 ;
+(BOOL)saveUsageLimitWithIdentifier:(id)arg0 user:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3 categoryIdentifiers:(id)arg4 dailyBudgetLimit:(CGFloat)arg5 budgetLimitByWeekday:(id)arg6 enabled:(BOOL)arg7 behaviorType:(NSUInteger)arg8 error:(*id)arg9 ;
+(BOOL)shouldUseGracePeriodForDowntimeOverride:(id)arg0 configuration:(id)arg1 ;
+(id)_buildConfigurationsByDeclarationIdentifierFromBlueprint:(id)arg0 error:(*id)arg1 ;
+(id)_buildDeclarationsFromConfigurationsByDeclarationIdentifier:(id)arg0 predicate:(id)arg1 identifier:(id)arg2 ;
+(id)_buildPredicateForDisablingBlueprint:(id)arg0 ;
+(id)_buildPredicateForUnspecializedBlueprint:(id)arg0 usingDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_cemPredicateWithDowntimeOverride:(id)arg0 shouldUseGracePeriod:(BOOL)arg1 dateFormater:(id)arg2 calendar:(id)arg3 ;
+(id)_configurationForDowntime:(id)arg0 context:(id)arg1 ;
+(id)_createDowntimeForUser:(id)arg0 organization:(id)arg1 context:(id)arg2 ;
+(id)_declarationForDowntime:(id)arg0 user:(id)arg1 configuration:(id)arg2 behaviorType:(NSUInteger)arg3 context:(id)arg4 error:(*id)arg5 ;
+(id)_declarationModeForBehaviorType:(NSUInteger)arg0 ;
+(id)_downtimeForUser:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)_fetchOrCreateDowntimeForUserID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)_fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 ;
+(id)_getDisplayNameAndAddCategories:(id)arg0 toItemNames:(id)arg1 remainingItems:(*NSUInteger)arg2 ;
+(id)_organizationIdentifierForUser:(id)arg0 context:(id)arg1 ;
+(id)_predicateForAlwaysAllowedAppsBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_predicateForDowntimeBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_predicateForManagedUserBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_predicateForRestrictionsBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_predicateForUsageLimitBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_predicateForUsageLimitOverrideBlueprint:(id)arg0 withDateFormatter:(id)arg1 calendar:(id)arg2 ;
+(id)_updatedDowntimeForUser:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 scheduleByWeekdayIndex:(id)arg3 enabled:(BOOL)arg4 behaviorType:(NSUInteger)arg5 error:(*id)arg6 ;
+(id)_updatedScheduleFromSchedule:(id)arg0 withStartTime:(id)arg1 endTime:(id)arg2 scheduleByWeekdayIndex:(id)arg3 context:(id)arg4 ;
+(id)_userDSIDStringForUser:(id)arg0 context:(id)arg1 ;
+(id)_userForUserID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)applyAutomaticOnDemandDowntimeStateChange:(NSInteger)arg0 forUserID:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)applyOnDemandDowntimeStateChange:(NSInteger)arg0 withFixedDuration:(CGFloat)arg1 forUserID:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)applyScheduleStateChange:(NSInteger)arg0 forUserID:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)blueprintIdentifierForUser:(id)arg0 ;
+(id)createBlueprintWithType:(id)arg0 user:(id)arg1 ;
+(id)customScheduleTimeRangeWithLocale:(id)arg0 startTimeComponents:(id)arg1 endTimeComponents:(id)arg2 ;
+(id)defaultAlwaysAllowBundleIDs;
+(id)defaultEndTime;
+(id)defaultStartTime;
+(id)displayNameForUsageLimitWithCategoryIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 webDomains:(id)arg2 ;
+(id)downtimeConfigurationForUserID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 fromOrganization:(id)arg1 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 ofType:(id)arg1 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 ofType:(id)arg1 fromOrganization:(id)arg2 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg0 ofType:(id)arg1 withIdentifier:(id)arg2 fromOrganization:(id)arg3 ;
+(id)fetchRequestMatchingExpiredBlueprints;
+(id)fetchRequestMatchingOrphanedBlueprints;
+(id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+(id)fetchResultsRequestsForChangesToBlueprints;
+(id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg0 ;
+(id)keyPathsForValuesAffectingDowntimeScheduleText;
+(id)keyPathsForValuesAffectingLimitDisplayName;
+(id)keyPathsForValuesAffectingLimitScheduleText;
// +(id)scheduleTextWithLocale:(id)arg0 weekdayScheduleComparator:(id)arg1 scheduleTimeGetter:(unk)arg2  ;
+(id)serializableClassName;
+(id)simpleScheduleTimeRangeWithStartTimeComponents:(id)arg0 endTimeComponents:(id)arg1 ;
+(void)_addCommonPredicatesForBlueprint:(id)arg0 toAllPredicates:(id)arg1 usingDateFormatter:(id)arg2 calendar:(id)arg3 ;
+(void)_addExpirationPredicateForBlueprint:(id)arg0 toAllPredicates:(id)arg1 usingDateFormatter:(id)arg2 ;
+(void)_addMinimumInstallationDatePredicateForBlueprint:(id)arg0 toAllPredicates:(id)arg1 usingDateFormatter:(id)arg2 ;
+(void)_addSchedulePredicatesForBlueprintScheudle:(id)arg0 toAllPredicates:(id)arg1 usingDateFormatter:(id)arg2 calendar:(id)arg3 ;
+(void)_addUserPredicateForBlueprint:(id)arg0 toAllPredicates:(id)arg1 ;
+(void)_addWebDomains:(id)arg0 toItemNames:(id)arg1 remainingItems:(NSUInteger)arg2 totalCount:(NSUInteger)arg3 completionHandler:(id)arg4 ;
+(void)_createDisplayNameWithItemNames:(id)arg0 itemCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;
+(void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 webDomains:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)permitWebFilterURL:(id)arg0 pageTitle:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeFixedDurationOnDemandDowntimeWithError:(*id)arg0 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)_applyAutomaticOnDemandDowntimeStateChange:(NSInteger)arg0 atDate:(id)arg1 inCalendar:(id)arg2 error:(*id)arg3 ;
-(id)_applyOnDemandDowntimeStateChange:(NSInteger)arg0 withFixedDuration:(CGFloat)arg1 atDate:(id)arg2 inCalendar:(id)arg3 error:(*id)arg4 ;
-(id)_applyScheduleStateChange:(NSInteger)arg0 atDate:(id)arg1 inCalendar:(id)arg2 error:(*id)arg3 ;
-(id)_downtimeConfigurationAtDate:(id)arg0 inCalendar:(id)arg1 ;
-(id)_webFilterBlacklistStringsForURL:(id)arg0 ;
-(id)activeOverride;
-(id)applyAutomaticOnDemandDowntimeStateChange:(NSInteger)arg0 error:(*id)arg1 ;
-(id)applyOnDemandDowntimeStateChange:(NSInteger)arg0 withFixedDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(id)applyScheduleStateChange:(NSInteger)arg0 error:(*id)arg1 ;
-(id)computeUniqueIdentifier;
-(id)declarationsWithError:(*id)arg0 ;
-(id)dictionaryRepresentation;
-(void)_reportCoreAnalyticsEventForDowntimeOverride:(id)arg0 currentDate:(id)arg1 ;
-(void)_updateActiveOverrideAfterScheduleChange;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)disableDowntimeForDay:(NSUInteger)arg0 ;
-(void)migrateToVersion2CategoriesIfNeeded;
-(void)setStartTime:(id)arg0 endTime:(id)arg1 ;
-(void)setStartTime:(id)arg0 endTime:(id)arg1 forDay:(NSUInteger)arg2 ;
-(void)tombstone;


@end


#endif