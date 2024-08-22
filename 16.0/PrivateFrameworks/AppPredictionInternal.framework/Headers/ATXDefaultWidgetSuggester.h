// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEFAULTWIDGETSUGGESTER_H
#define ATXDEFAULTWIDGETSUGGESTER_H


#import <Foundation/Foundation.h>

#import "_ATXAppLaunchHistogramManager.h"

@interface ATXDefaultWidgetSuggester : NSObject {
    _ATXAppLaunchHistogramManager *_histogramManager;
}




-(BOOL)shouldSuggestTV;
-(CGFloat)_appLaunchCountForAppBudleId:(id)arg0 ;
-(CGFloat)_intentDonationCountForActionKey:(id)arg0 ;
-(CGFloat)_upcomingMediaCountForAppBundleId:(id)arg0 isInternalApplication:(BOOL)arg1 ;
-(CGFloat)appLaunchCountForTVApp;
-(CGFloat)intentDonationCountForTVApp;
-(CGFloat)upcomingMediaCountForTVApp;
-(id)initWithHistogramManager:(id)arg0 ;


@end


#endif