// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCHARTOVERLAYSELECTEDANALYTICSEVENTCONFIGURATION_H
#define HKCHARTOVERLAYSELECTEDANALYTICSEVENTCONFIGURATION_H

@class NSString, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface HKChartOverlaySelectedAnalyticsEventConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *currentContextItemPropertyName; // ivar: _currentContextItemPropertyName
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (retain, nonatomic) NSObject<OS_os_log> *loggingCategory; // ivar: _loggingCategory
@property (retain, nonatomic) NSNumber *minimumAge; // ivar: _minimumAge
@property (readonly, copy, nonatomic) NSString *previousContextItemPropertyName; // ivar: _previousContextItemPropertyName


-(id)initWithEventName:(id)arg0 previousContextItemPropertyName:(id)arg1 currentContextItemPropertyName:(id)arg2 ;


@end


#endif