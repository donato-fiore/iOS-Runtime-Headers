// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXRSFILTER_H
#define ATXRSFILTER_H

@class ATXHomeScreenConfigCache;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchHistogramManager.h"

@interface ATXRSFilter : NSObject {
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
}




-(id)_filterCandidates_trendingAppLaunchPopularity:(id)arg0 ;
-(id)_filterCandidates_widgetExistsOnScreen:(id)arg0 ;
-(id)filterCandidatesBySuggestionRequirements:(id)arg0 ;
-(id)init;
-(id)initWithHomeScreenConfigCache:(id)arg0 appLaunchHistogramManager:(id)arg1 ;


@end


#endif