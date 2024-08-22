// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(void)trackingStateOfRequest:(BOOL)arg0 askAppsToStopTracking:(BOOL)arg1 ;
+(void)trackingStateOfRequestForSpecificApp:(NSUInteger)arg0 view:(id)arg1 ;
+(void)trackingViewControllersVisitedInRootController:(id)arg0 ;
+(void)trackingViewVisited;


@end


#endif