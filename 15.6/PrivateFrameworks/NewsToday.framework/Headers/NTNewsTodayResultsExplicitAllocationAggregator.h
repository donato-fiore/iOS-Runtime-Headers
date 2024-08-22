// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTNEWSTODAYRESULTSEXPLICITALLOCATIONAGGREGATOR_H
#define NTNEWSTODAYRESULTSEXPLICITALLOCATIONAGGREGATOR_H

@class NSString, NSDate;
@protocol NTTodayResultsAggregator, FCCoreConfigurationManager, FCFeedPersonalizing><FCPersonalizationFunctionProviding, FCTodayPrivateData;

#import <Foundation/Foundation.h>


@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator>



@property (retain, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCFeedPersonalizing><FCPersonalizationFunctionProviding> *feedPersonalizer; // ivar: _feedPersonalizer
@property (copy, nonatomic) NSDate *filterDate; // ivar: _filterDate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<FCTodayPrivateData> *todayData; // ivar: _todayData


-(id)_itemsForSection:(id)arg0 items:(id)arg1 withBudgetInfo:(id)arg2 previouslyChosenItems:(id)arg3 priorClusterIDsInOtherSections:(id)arg4 sectionItemsLimit:(NSUInteger)arg5 otherArticleIDs:(id)arg6 embedsLimit:(NSUInteger)arg7 remainingSlots:(CGFloat)arg8 slotsUsed:(*CGFloat)arg9 noMoreItemsToGive:(*BOOL)arg10 noRoomForMoreItems:(*BOOL)arg11 slotAllocationByDynamicSlotItemID:(id)arg12 ;
-(id)_sectionFilterTransformationWithDescriptor:(id)arg0 priorClusterIDsInOtherSections:(id)arg1 priorClusterIDsInSection:(id)arg2 otherArticleIDs:(id)arg3 embedsLimit:(NSUInteger)arg4 ;
-(id)aggregateSections:(id)arg0 itemsBySectionDescriptor:(id)arg1 budgetInfo:(id)arg2 ;
-(id)init;
-(id)initWithConfigurationManager:(id)arg0 feedPersonalizer:(id)arg1 filterDate:(id)arg2 todayData:(id)arg3 ;


@end


#endif