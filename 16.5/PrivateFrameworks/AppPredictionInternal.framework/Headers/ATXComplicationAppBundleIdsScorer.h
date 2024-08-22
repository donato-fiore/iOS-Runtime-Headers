// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLICATIONAPPBUNDLEIDSSCORER_H
#define ATXCOMPLICATIONAPPBUNDLEIDSSCORER_H

@class BMAppLaunchStream, ATXHomeScreenConfigCache, ATXWatchFaceConfigurationCollector;

#import <Foundation/Foundation.h>

#import "ATXComplicationSuggestionParameters.h"

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}




-(id)_scoredComplicationBundleIdsForModularSet:(id)arg0 bundleIdToAppLaunchData:(id)arg1 bundleIdToPriors:(id)arg2 widgetAppBundleIdsOnHomeScreen:(id)arg3 complicationBundleIdCountsOnWatch:(id)arg4 ;
-(id)_widgetAppBundleIdsOnHomeScreen;
-(id)init;
-(id)inputDescriptionForSignal:(id)arg0 complicationAppBundleIds:(id)arg1 ;
-(id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)arg0 bundleIdToAppLaunchData:(id)arg1 bundleIdToPriors:(id)arg2 widgetAppBundleIdsOnHomeScreen:(id)arg3 ;
-(id)scoredComplicationBundleIdsForModularSet:(id)arg0 ;


@end


#endif