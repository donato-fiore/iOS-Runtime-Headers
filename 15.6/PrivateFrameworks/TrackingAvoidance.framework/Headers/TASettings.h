// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TASETTINGS_H
#define TASETTINGS_H


#import <Foundation/Foundation.h>

#import "TAAnalyticsManagerSettings.h"
#import "TADeviceRecordSettings.h"
#import "TAEventBufferSettings.h"
#import "TAFilterGeneralSettings.h"
#import "TAFilterLeavingLOISettings.h"
#import "TAFilterSingleVisitSettings.h"
#import "TAFilterVisitsSettings.h"
#import "TAPersistenceManagerSettings.h"
#import "TAScanRequestSettings.h"
#import "TATrackingAvoidanceServiceSettings.h"
#import "TAVisitStateSettings.h"

@interface TASettings : NSObject

@property (retain, nonatomic) TAAnalyticsManagerSettings *analyticsManagerSettings; // ivar: _analyticsManagerSettings
@property (retain, nonatomic) TADeviceRecordSettings *deviceRecordSettings; // ivar: _deviceRecordSettings
@property (retain, nonatomic) TAEventBufferSettings *eventBufferSettings; // ivar: _eventBufferSettings
@property (retain, nonatomic) TAFilterGeneralSettings *filterGeneralSettings; // ivar: _filterGeneralSettings
@property (retain, nonatomic) TAFilterLeavingLOISettings *filterLeavingLOISettings; // ivar: _filterLeavingLOISettings
@property (retain, nonatomic) TAFilterSingleVisitSettings *filterSingleVisitSettings; // ivar: _filterSingleVisitSettings
@property (retain, nonatomic) TAFilterVisitsSettings *filterVisitsSettings; // ivar: _filterVisitsSettings
@property (nonatomic) NSUInteger maximumDailyScans; // ivar: _maximumDailyScans
@property (nonatomic) NSUInteger notificationThrottleHours; // ivar: _notificationThrottleHours
@property (nonatomic) NSUInteger notificationThrottleMaxPerPeriod; // ivar: _notificationThrottleMaxPerPeriod
@property (nonatomic) BOOL peopleDensityEnabled; // ivar: _peopleDensityEnabled
@property (nonatomic) CGFloat persistenceInterval; // ivar: _persistenceInterval
@property (retain, nonatomic) TAPersistenceManagerSettings *persistenceManagerSettings; // ivar: _persistenceManagerSettings
@property (retain, nonatomic) TAScanRequestSettings *scanRequestSettings; // ivar: _scanRequestSettings
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings; // ivar: _serviceSettings
@property (nonatomic) NSUInteger settingsVersion; // ivar: _settingsVersion
@property (nonatomic) BOOL trackingAvoidanceEnabled; // ivar: _trackingAvoidanceEnabled
@property (retain, nonatomic) TAVisitStateSettings *visitStateSettings; // ivar: _visitStateSettings


+(id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg0 ;
+(id)getArraySettingsKeys;
+(id)getBooleanSettingsKeys;
+(id)getDoubleSettingsKeys;
+(id)getIntegerSettingsKeys;
+(id)getStringSettingsKeys;
+(id)getUnsignedIntegerSettingsKeys;
-(id)description;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)setSettings:(id)arg0 ;


@end


#endif