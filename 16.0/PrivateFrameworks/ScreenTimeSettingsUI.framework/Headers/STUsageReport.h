// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEREPORT_H
#define STUSAGEREPORT_H

@class NSArray, NSDictionary, NSCache, NSString, NSDate, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STUsageReportGraphDataSet.h"

@interface STUsageReport : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat activePickupDateIntervals; // ivar: _activePickupDateIntervals
@property (readonly, copy, nonatomic) NSArray *appAndWebUsages; // ivar: _appAndWebUsages
@property (readonly, copy, nonatomic) NSDictionary *appUsageByStartOfDateInterval; // ivar: _appUsageByStartOfDateInterval
@property (readonly, copy, nonatomic) NSArray *appUsages; // ivar: _appUsages
@property (readonly, copy, nonatomic) NSDictionary *applicationUsageByStartOfDateIntervalByTrustIdentifier; // ivar: _applicationUsageByStartOfDateIntervalByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *applicationUsageByTrustIdentifier; // ivar: _applicationUsageByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateInterval; // ivar: _categoryUsageByStartOfDateInterval
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateIntervalByTrustIdentifier; // ivar: _categoryUsageByStartOfDateIntervalByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByTrustIdentifier; // ivar: _categoryUsageByTrustIdentifier
@property (readonly, nonatomic) STUsageReportGraphDataSet *categoryUsageDataSet;
@property (readonly, copy, nonatomic) NSArray *categoryUsages; // ivar: _categoryUsages
@property (retain, nonatomic) NSCache *dataSetByUsageIdentifier; // ivar: _dataSetByUsageIdentifier
@property (readonly, copy, nonatomic) NSArray *dateIntervals; // ivar: _dateIntervals
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSDate *firstPickup; // ivar: _firstPickup
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, nonatomic) NSUInteger maxPickupDateIntervalIndex; // ivar: _maxPickupDateIntervalIndex
@property (readonly, nonatomic) NSUInteger maxPickups; // ivar: _maxPickups
@property (readonly, copy, nonatomic) NSDateInterval *maxPickupsDateInterval; // ivar: _maxPickupsDateInterval
@property (readonly, nonatomic) CGFloat maxScreenTime; // ivar: _maxScreenTime
@property (readonly) CGFloat notificationDeltaFromHistoricalAverage; // ivar: _notificationDeltaFromHistoricalAverage
@property (readonly, nonatomic) CGFloat notificationRate; // ivar: _notificationRate
@property (readonly, copy, nonatomic) NSArray *notifications; // ivar: _notifications
@property (readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateInterval; // ivar: _notificationsByStartOfDateInterval
@property (readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateIntervalByTrustIdentifier; // ivar: _notificationsByStartOfDateIntervalByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *notificationsByTrustIdentifier; // ivar: _notificationsByTrustIdentifier
@property (readonly, nonatomic) STUsageReportGraphDataSet *notificationsDataSet;
@property (readonly) CGFloat pickupDeltaFromHistoricalAverage; // ivar: _pickupDeltaFromHistoricalAverage
@property (readonly, nonatomic) CGFloat pickupFrequency; // ivar: _pickupFrequency
@property (readonly, nonatomic) CGFloat pickupRate; // ivar: _pickupRate
@property (readonly, copy, nonatomic) NSArray *pickups; // ivar: _pickups
@property (readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateInterval; // ivar: _pickupsByStartOfDateInterval
@property (readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateIntervalByTrustIdentifier; // ivar: _pickupsByStartOfDateIntervalByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *pickupsByTrustIdentifier; // ivar: _pickupsByTrustIdentifier
@property (readonly, nonatomic) STUsageReportGraphDataSet *pickupsDataSet;
@property (readonly, copy, nonatomic) NSDateInterval *reportDateInterval; // ivar: _reportDateInterval
@property (readonly, copy, nonatomic) NSDictionary *screenTimeByStartOfDateInterval; // ivar: _screenTimeByStartOfDateInterval
@property (readonly, nonatomic) STUsageReportGraphDataSet *screenTimeDataSet;
@property (readonly, nonatomic) CGFloat screenTimeDeltaFromHistoricalAverage; // ivar: _screenTimeDeltaFromHistoricalAverage
@property (readonly, nonatomic) CGFloat totalAppUsage; // ivar: _totalAppUsage
@property (readonly, nonatomic) CGFloat totalCategoryUsage; // ivar: _totalCategoryUsage
@property (readonly, nonatomic) NSUInteger totalNotifications; // ivar: _totalNotifications
@property (readonly, nonatomic) NSUInteger totalPickups; // ivar: _totalPickups
@property (readonly, nonatomic) CGFloat totalScreenTime; // ivar: _totalScreenTime
@property (readonly, nonatomic) CGFloat totalWebUsage; // ivar: _totalWebUsage
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateInterval; // ivar: _webUsageByStartOfDateInterval
@property (readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateIntervalByTrustIdentifier; // ivar: _webUsageByStartOfDateIntervalByTrustIdentifier
@property (readonly, copy, nonatomic) NSDictionary *webUsageByTrustIdentifier; // ivar: _webUsageByTrustIdentifier
@property (readonly, copy, nonatomic) NSArray *webUsages; // ivar: _webUsages


+(BOOL)supportsSecureCoding;
-(id)_countedDataSetForItemType:(NSUInteger)arg0 trustIdentifier:(id)arg1 includeIndicatorImageName:(BOOL)arg2 ;
-(id)_dataSetForItemType:(NSUInteger)arg0 trustIdentifier:(id)arg1 includeIndicatorImageName:(BOOL)arg2 useDarkColors:(BOOL)arg3 ;
-(id)_timedDataSetForItemType:(NSUInteger)arg0 trustIdentifier:(id)arg1 ;
-(id)_timedDataSetForItemType:(NSUInteger)arg0 useDarkColors:(BOOL)arg1 ;
-(id)appAndWebUsageDataSetWithDarkColors:(BOOL)arg0 ;
-(id)dataSetWithUsageItem:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReportType:(NSUInteger)arg0 startDate:(id)arg1 lastUpdatedDate:(id)arg2 firstPickup:(id)arg3 usageItems:(id)arg4 ;
-(id)topUsageItemsWithMaxCount:(NSUInteger)arg0 type:(NSUInteger)arg1 includeAggregateItem:(BOOL)arg2 nonAggregateItems:(*id)arg3 darkColors:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif