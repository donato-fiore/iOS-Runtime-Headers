// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMELINERELEVANCE_H
#define ATXTIMELINERELEVANCE_H

@class CHSWidget, NSString;
@protocol ATXTimelineRelevanceDelegate;

#import <Foundation/Foundation.h>

#import "ATXInfoSuggestionCriterionRegistry.h"
#import "ATXTimelineAbuseControlConfig.h"

@interface ATXTimelineRelevance : NSObject {
    CHSWidget *_widget;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}


@property (weak, nonatomic) NSObject<ATXTimelineRelevanceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *sourceId; // ivar: _sourceId


+(NSUInteger)suggestionLayoutOptionsForAvocadoSizeClass:(NSInteger)arg0 ;
-(BOOL)isWidgetFamilyEligibleForSuggestion;
-(BOOL)overlapExistsBetween:(id)arg0 andTimelineEntry:(id)arg1 ;
-(BOOL)startDatesAreCloseEnoughToMerge:(id)arg0 withTimelineEntry:(id)arg1 ;
-(id)generateSuggestionsWithTimelineEntries:(id)arg0 latestInfoSuggestionRelevantNow:(id)arg1 ;
-(id)infoSuggestionWithTimelineEntry:(id)arg0 ;
-(id)infoSuggestionsFromTimelineEntries:(id)arg0 latestInfoSuggestionRelevantNow:(id)arg1 ;
-(id)initWithWidget:(id)arg0 criterionRegistry:(id)arg1 abuseControlConfig:(id)arg2 ;
-(id)processTimelineEntryWithPositiveScore:(id)arg0 withPreviousInfoSuggestion:(id)arg1 updatingTimelineEntryToSuggestionMapping:(id)arg2 ;
-(void)processTimelineEntryWithNonPositiveScore:(id)arg0 withPreviousInfoSuggestion:(id)arg1 updatingTimelineEntryToSuggestionMapping:(id)arg2 ;
-(void)standardizeWidgetSizes;


@end


#endif