// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESHOMESCREENMODIFICATIONSMETRICS_H
#define ATXSUGGESTEDPAGESHOMESCREENMODIFICATIONSMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesHomeScreenModificationsMetrics : NSObject

@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSString *eventType; // ivar: _eventType
@property (nonatomic) BOOL isSuggestedWidget; // ivar: _isSuggestedWidget
@property (nonatomic) int source; // ivar: _source
@property (copy, nonatomic) NSString *suggestedPageType; // ivar: _suggestedPageType
@property (copy, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (copy, nonatomic) NSString *widgetKind; // ivar: _widgetKind
@property (copy, nonatomic) NSString *widgetSize; // ivar: _widgetSize


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;
-(id)metricsSourceToStringWithSource:(int)arg0 ;
-(void)logToCoreAnalytics;


@end


#endif