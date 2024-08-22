// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKANALYTICSENVIRONMENTDATASOURCE_H
#define HKANALYTICSENVIRONMENTDATASOURCE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "HKCalendarCache.h"

@interface HKAnalyticsEnvironmentDataSource : NSObject

@property (readonly, copy, nonatomic) NSString *activePairedDeviceHousingColor;
@property (readonly, copy, nonatomic) NSString *activePairedDeviceModelNumber;
@property (readonly, nonatomic) NSString *activePairedDeviceOSBuildNumber;
@property (readonly, nonatomic) NSString *activePairedDeviceProductType;
@property (readonly, copy, nonatomic) NSString *activePairedDeviceRegionInfo;
@property (readonly, nonatomic) HKCalendarCache *calendarCache; // ivar: _calendarCache
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityEnabled;


-(id)init;


@end


#endif