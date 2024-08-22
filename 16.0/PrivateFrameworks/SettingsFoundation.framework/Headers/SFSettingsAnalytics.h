// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSETTINGSANALYTICS_H
#define SFSETTINGSANALYTICS_H


#import <Foundation/Foundation.h>


@interface SFSettingsAnalytics : NSObject



+(void)trackingAppAccessTransparencyVisited:(id)arg0 ;
+(void)trackingAppActivitySaved;
+(void)trackingControlValueChanged:(id)arg0 sender:(id)arg1 ;
+(void)trackingPerformSelector:(id)arg0 targetString:(id)arg1 ;
+(void)trackingRecordAppActivityVisited;
+(void)trackingSettingsOpenByURL:(BOOL)arg0 url:(id)arg1 ;
+(void)trackingSettingsSearchUsed:(BOOL)arg0 isUser65AgeOrOlder:(BOOL)arg1 numberOfSectionsInResults:(NSUInteger)arg2 numberOfTotalResults:(NSUInteger)arg3 searchFromSpotlight:(BOOL)arg4 methodForEndingSearch:(NSUInteger)arg5 searchResultURL:(id)arg6 searchActivityID:(id)arg7 ;
+(void)trackingSettingsSearchUsed:(BOOL)arg0 isUser65AgeOrOlder:(BOOL)arg1 searchFromSpotlight:(BOOL)arg2 searchActivityID:(id)arg3 ;
+(void)trackingSettingsSearchUsed:(BOOL)arg0 numberOfSectionsInResults:(NSUInteger)arg1 numberOfTotalResults:(NSUInteger)arg2 searchFromSpotlight:(BOOL)arg3 methodForEndingSearch:(NSUInteger)arg4 searchActivityID:(id)arg5 ;
+(void)trackingSettingsSearchUsed:(BOOL)arg0 searchFromSpotlight:(BOOL)arg1 methodForEndingSearch:(NSUInteger)arg2 searchResultURL:(id)arg3 ;
+(void)trackingStateOfRequest:(BOOL)arg0 askAppsToStopTracking:(BOOL)arg1 ;
+(void)trackingStateOfRequestForSpecificApp:(NSUInteger)arg0 view:(id)arg1 ;
+(void)trackingViewControllersVisitedInRootController:(id)arg0 ;
+(void)trackingViewVisited;


@end


#endif