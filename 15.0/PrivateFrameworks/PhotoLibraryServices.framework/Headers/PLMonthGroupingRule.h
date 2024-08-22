// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMONTHGROUPINGRULE_H
#define PLMONTHGROUPINGRULE_H

@class NSCalendar, NSString;
@protocol PLHighlightItemClustererRule, PLHighlightItemPromoterRule;

#import <Foundation/Foundation.h>


@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule>



@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)highlightItem:(id)arg0 belongsToHighlightItemList:(id)arg1 ;
-(BOOL)highlightItemHasMinimumRequirementToBePromoted:(id)arg0 ;
-(BOOL)highlightItemList:(id)arg0 canBeMergedWithOtherHighlightItemList:(id)arg1 ;
-(NSUInteger)maximumNumberOfHighlightItemsToPromote;
-(id)dominantMonthDateComponentForStartDateComponents:(id)arg0 endDateComponents:(id)arg1 numberOfDaysInMonthOfStartDate:(NSInteger)arg2 ;
-(id)fallbackHighlightItemFromAllHighlightItems:(id)arg0 ;
-(id)highlightItemsSortedByImportance:(id)arg0 ;
-(id)init;
-(void)titlesForHighlightItemList:(id)arg0 dateRangeTitleGenerator:(id)arg1 forceUpdateLocale:(BOOL)arg2 resultBlock:(id)arg3 ;
-(void)titlesForHighlightItemList:(id)arg0 dateRangeTitleGenerator:(id)arg1 resultBlock:(id)arg2 ;


@end


#endif