// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPSESSIONEVENTMETRIC_H
#define ATXAPPSESSIONEVENTMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXAppSessionEventMetric : ATXCoreAnalyticsMetric

@property (readonly, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (readonly, nonatomic) NSNumber *appCategory; // ivar: _appCategory
@property (readonly, nonatomic) CGFloat appSessionDuration; // ivar: _appSessionDuration
@property (readonly, nonatomic) NSString *interruptingAppBundleId; // ivar: _interruptingAppBundleId
@property (readonly, nonatomic) NSNumber *interruptingAppCategory; // ivar: _interruptingAppCategory


-(id)coreAnalyticsDictionary;
-(id)initWithDimensions:(id)arg0 bundleId:(id)arg1 interruptingAppBundleId:(id)arg2 duration:(CGFloat)arg3 ;
-(id)metricName;


@end


#endif