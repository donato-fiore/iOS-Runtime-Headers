// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKANALYTICSDATASOURCE_H
#define HKANALYTICSDATASOURCE_H

@protocol HKAnalyticsHealthDataSource;

#import <Foundation/Foundation.h>

#import "HKAnalyticsEnvironmentDataSource.h"

@interface HKAnalyticsDataSource : NSObject

@property (readonly, nonatomic) HKAnalyticsEnvironmentDataSource *environmentDataSource; // ivar: _environmentDataSource
@property (readonly, nonatomic) NSObject<HKAnalyticsHealthDataSource> *healthDataSource;
@property (readonly, nonatomic) NSObject<HKAnalyticsHealthDataSource> *strongHealthDataSource; // ivar: _strongHealthDataSource
@property (readonly, weak, nonatomic) NSObject<HKAnalyticsHealthDataSource> *weakHealthDataSource; // ivar: _weakHealthDataSource


-(id)initWithHealthDataSource:(id)arg0 ;


@end


#endif