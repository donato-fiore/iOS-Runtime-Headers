// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCHARTOVERLAYSELECTEDANALYTICSEVENT_H
#define HKCHARTOVERLAYSELECTEDANALYTICSEVENT_H

@class NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>

#import "HKChartOverlaySelectedAnalyticsEventConfiguration.h"
#import "HKDisplayTypeContextItem.h"

@interface HKChartOverlaySelectedAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HKChartOverlaySelectedAnalyticsEventConfiguration *_configuration;
    HKDisplayTypeContextItem *_previousItem;
    HKDisplayTypeContextItem *_currentItem;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)determineFeatureVersionWithHealthDataSource:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 previousItem:(id)arg1 currentItem:(id)arg2 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif