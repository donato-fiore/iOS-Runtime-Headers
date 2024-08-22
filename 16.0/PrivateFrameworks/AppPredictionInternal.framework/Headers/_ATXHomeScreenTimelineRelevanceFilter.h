// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXHOMESCREENTIMELINERELEVANCEFILTER_H
#define _ATXHOMESCREENTIMELINERELEVANCEFILTER_H

@class ATXInformationStore;

#import <Foundation/Foundation.h>


@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore *_timelineRelevanceStore;
}




-(BOOL)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)arg0 family:(NSInteger)arg1 ;
-(BOOL)_widgetExistsOnScreen:(id)arg0 homeScreenState:(id)arg1 ;
-(id)_nextRefreshDateForSuggestion:(id)arg0 familyMask:(NSUInteger)arg1 ;
-(id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)arg0 ;
-(id)init;
-(id)initWithTimelineRelevanceStore:(id)arg0 ;
-(id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)arg0 homeScreenState:(id)arg1 ;
-(void)_cancelAnyExistingScheduledRefresh;
-(void)_scheduleBlendingRefreshAtDate:(id)arg0 reason:(id)arg1 ;
-(void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)arg0 ;


@end


#endif