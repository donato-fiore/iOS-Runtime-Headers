// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFORMATIONFEATURIZER_H
#define ATXINFORMATIONFEATURIZER_H

@protocol ATXInformationFeaturizerProtocol;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchHistogram.h"
#import "ATXHomeScreenWidgetFeedback.h"

@interface ATXInformationFeaturizer : NSObject <ATXInformationFeaturizerProtocol>

 {
    _ATXAppLaunchHistogram *_appLaunchHistory;
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
}




-(CGFloat)_fetchAppLaunchCountForBundleIdentifier:(id)arg0 ;
-(CGFloat)_fetchAppLaunchPopularityForBundleIdentifier:(id)arg0 ;
-(CGFloat)_fetchFeedbackForWidgetBundleId:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_featureSetForSuggestion:(id)arg0 ;
-(id)featurizeInfoSuggestions:(id)arg0 ;
-(id)featurizeTimelineWithWidgetBundleId:(id)arg0 widgetKind:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(id)populateFeatureSetForWidgetBundleId:(id)arg0 widgetKind:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(void)_lazyLoadAppLaunchHistogram;
-(void)_lazyLoadWidgetFeedbackHistogram;


@end


#endif