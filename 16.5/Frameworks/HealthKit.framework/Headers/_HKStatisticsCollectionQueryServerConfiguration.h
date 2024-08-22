// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSTATISTICSCOLLECTIONQUERYSERVERCONFIGURATION_H
#define _HKSTATISTICSCOLLECTIONQUERYSERVERCONFIGURATION_H

@class NSDate, NSDateInterval, NSDateComponents;


#import "HKQueryServerConfiguration.h"
#import "HKStatisticsCollectionCacheSettings.h"

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings; // ivar: _cacheSettings
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (nonatomic) NSUInteger mergeStrategy; // ivar: _mergeStrategy
@property (nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif