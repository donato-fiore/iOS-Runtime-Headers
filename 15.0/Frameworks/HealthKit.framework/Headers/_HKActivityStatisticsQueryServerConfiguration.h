// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKACTIVITYSTATISTICSQUERYSERVERCONFIGURATION_H
#define _HKACTIVITYSTATISTICSQUERYSERVERCONFIGURATION_H

@class NSDate, NSDateComponents;


#import "HKQueryServerConfiguration.h"

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDateComponents *exerciseIntervalComponents; // ivar: _exerciseIntervalComponents
@property (copy, nonatomic) NSDateComponents *moveIntervalComponents; // ivar: _moveIntervalComponents
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif