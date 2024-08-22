// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCNOTIFICATIONINTERACTEDANALYTICS_H
#define HKMCNOTIFICATIONINTERACTEDANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMCNotificationInteractedAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(void)submitMetricForCategory:(id)arg0 action:(id)arg1 ;


@end


#endif