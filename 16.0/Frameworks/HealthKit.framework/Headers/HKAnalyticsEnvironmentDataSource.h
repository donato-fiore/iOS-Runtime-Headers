// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKANALYTICSENVIRONMENTDATASOURCE_H
#define HKANALYTICSENVIRONMENTDATASOURCE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "HKCalendarCache.h"

@interface HKAnalyticsEnvironmentDataSource : NSObject

@property (readonly, nonatomic) NSString *activePairedDeviceProductType;
@property (readonly, nonatomic) HKCalendarCache *calendarCache; // ivar: _calendarCache
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityEnabled;


-(id)init;


@end


#endif