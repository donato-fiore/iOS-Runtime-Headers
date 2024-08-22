// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMAPPLAUNCHSCORER_H
#define ATXDEFAULTHOMESCREENITEMAPPLAUNCHSCORER_H

@protocol ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenWidgetDescriptor.h"

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> *_spotlightLaunchesHistogram;
}




-(BOOL)_isAppPredictionsWidget;
-(BOOL)_isContactsWidget;
-(BOOL)_isSleepWidget;
-(BOOL)isWidgetSpecialCase;
-(CGFloat)_contactsWidgetiCloudFamilyScore;
-(id)_appLaunchScoreForContactsWidget;
-(id)_appLaunchScoreForSleepWidget;
-(id)_dateOfSleepOnboardingCompletion;
-(id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)arg0 ;
-(id)initWithWidget:(id)arg0 appLaunchHistogram:(id)arg1 ;
-(id)scoreWithCachedAppLaunchData:(id)arg0 ;


@end


#endif