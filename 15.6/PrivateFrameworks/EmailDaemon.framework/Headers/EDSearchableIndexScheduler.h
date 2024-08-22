// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSEARCHABLEINDEXSCHEDULER_H
#define EDSEARCHABLEINDEXSCHEDULER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol EFLoggable, EDSearchableIndexSchedulableDelegate, OS_dispatch_queue, EDSearchableIndexSchedulable;

#import <Foundation/Foundation.h>

#import "EDSearchableIndexBudgetConfiguration.h"

@interface EDSearchableIndexScheduler : NSObject <EFLoggable, EDSearchableIndexSchedulableDelegate>



@property (retain, nonatomic) NSMutableDictionary *activities; // ivar: _activities
@property (readonly, nonatomic) EDSearchableIndexBudgetConfiguration *budgetConfiguration; // ivar: _budgetConfiguration
@property (copy, nonatomic) NSString *budgetTimeUserDefaultsKey; // ivar: _budgetTimeUserDefaultsKey
@property NSInteger budgetedItemCountRemaining; // ivar: _budgetedItemCountRemaining
@property CGFloat budgetedTimeRemaining; // ivar: _budgetedTimeRemaining
@property (getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted; // ivar: _dataSourceIndexingPermitted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *indexingEnabledForActivityTypes; // ivar: _indexingEnabledForActivityTypes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingStateQueue; // ivar: _indexingStateQueue
@property CGFloat maintenanceIndexingTime; // ivar: _maintenanceIndexingTime
@property CGFloat noActivityIndexingTime; // ivar: _noActivityIndexingTime
@property (readonly, weak, nonatomic) NSObject<EDSearchableIndexSchedulable> *schedulable; // ivar: _schedulable
@property (nonatomic) BOOL scheduledDeferralCheck; // ivar: _scheduledDeferralCheck
@property (nonatomic, getter=isScheduling) BOOL scheduling; // ivar: _scheduling
@property (readonly) Class superclass;


+(BOOL)isDeferrableActivityType:(id)arg0 ;
+(id)activityTypes;
+(id)budgetTimeUserDefaultsKeyForIndexName:(id)arg0 ;
+(id)deferrableActivityTypes;
+(id)log;
-(BOOL)_isIndexingEnabledByActivities;
-(BOOL)_isIndexingEnabledForActivityType:(id)arg0 ;
-(BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg0 ;
-(BOOL)isIndexingEnabledForActivityType:(id)arg0 ;
-(CGFloat)_budgetTimeFromUserDefaults;
-(CGFloat)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg0 ;
-(NSInteger)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg0 ;
-(id)_xpcActivityIdentifierForActivityType:(id)arg0 ;
-(id)_xpcCriteriaBuilderBlockForActivityType:(SEL)arg0 ;
-(id)initWithSchedulable:(id)arg0 budgetConfiguration:(id)arg1 ;
-(void)_beginIndexingForActivityType:(id)arg0 activity:(id)arg1 ;
-(void)_deferActivitiesIfNecessary;
-(void)_disableIndexingForActivityType:(id)arg0 defer:(BOOL)arg1 ;
-(void)_enableIndexingForActivityType:(id)arg0 ;
-(void)_logIndexingPowerEventWithIdentifier:(id)arg0 additionalEventData:(id)arg1 usePersistentLog:(BOOL)arg2 ;
-(void)_periodicallyCheckForDeferralIfNecessary;
// -(void)_registerActivityForType:(id)arg0 builder:(id)arg1 runner:(unk)arg2  ;
-(void)_startScheduling;
-(void)_stopAllIndexing;
-(void)_stopIndexingForActivityType:(id)arg0 shouldDeferIfPossible:(BOOL)arg1 ;
-(void)_stopScheduling;
-(void)beginIndexingForActivityType:(id)arg0 activity:(id)arg1 ;
-(void)dealloc;
-(void)deferIndexingForActivityType:(id)arg0 ;
-(void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg0 ;
-(void)indexingDidResumeForSearchableIndexSchedulable:(id)arg0 ;
-(void)indexingDidSuspendForSearchableIndexSchedulable:(id)arg0 ;
-(void)searchableIndexSchedulable:(id)arg0 didGenerateImportantPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(void)searchableIndexSchedulable:(id)arg0 didGeneratePowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(void)searchableIndexSchedulable:(id)arg0 didIndexForTime:(CGFloat)arg1 ;
-(void)searchableIndexSchedulable:(id)arg0 didIndexItemCount:(NSInteger)arg1 ;


@end


#endif