// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMETRICSUTILITIES_H
#define SKUIMETRICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface SKUIMetricsUtilities : NSObject



+(BOOL)shouldLogTimingMetrics;
+(BOOL)showEventNotifications;
+(BOOL)trackAllEvents;
+(CGFloat)timeIntervalFromJSTime:(id)arg0 ;
+(id)jsTimeFromTimeInterval:(CGFloat)arg0 ;
+(id)newErrorPageEvent;
+(id)newErrorRetryClickEvent;


@end


#endif