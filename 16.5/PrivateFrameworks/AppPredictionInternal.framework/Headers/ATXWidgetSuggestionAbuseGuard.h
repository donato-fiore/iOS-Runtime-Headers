// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETSUGGESTIONABUSEGUARD_H
#define ATXWIDGETSUGGESTIONABUSEGUARD_H

@class ATXInformationStore, NSDate;

#import <Foundation/Foundation.h>

#import "ATXTimelineAbuseControlConfig.h"
#import "ATXInformationFilter.h"

@interface ATXWidgetSuggestionAbuseGuard : NSObject {
    ATXTimelineAbuseControlConfig *_config;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    NSDate *_scheduledRefreshDate;
}




+(id)sharedInstance;
-(BOOL)shouldDemoteSuggestionsForWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 ;
-(id)init;
-(id)initWithConfig:(id)arg0 store:(id)arg1 ;
-(void)_invalidatePreviousVerdicts;
-(void)_scheduleRefreshNoLaterThanDate:(id)arg0 ;


@end


#endif