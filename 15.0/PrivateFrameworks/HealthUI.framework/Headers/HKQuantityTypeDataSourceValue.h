// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYTYPEDATASOURCEVALUE_H
#define HKQUANTITYTYPEDATASOURCEVALUE_H

@class HKQuantity, NSDate, HKQuantityType, NSDateComponents;

#import <Foundation/Foundation.h>


@interface HKQuantityTypeDataSourceValue : NSObject

@property (retain, nonatomic) HKQuantity *averageQuantity; // ivar: _averageQuantity
@property (retain, nonatomic) HKQuantity *durationQuantity; // ivar: _durationQuantity
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) HKQuantity *maxQuantity; // ivar: _maxQuantity
@property (retain, nonatomic) HKQuantity *minQuantity; // ivar: _minQuantity
@property (retain, nonatomic) HKQuantity *mostRecentQuantity; // ivar: _mostRecentQuantity
@property (retain, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (nonatomic) NSInteger recordCount; // ivar: _recordCount
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSDateComponents *statisticsInterval; // ivar: _statisticsInterval
@property (retain, nonatomic) HKQuantity *sumQuantity; // ivar: _sumQuantity


+(id)quantityTypeDataSourceValueWithCodableStatistics:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)codableStatistics;
-(id)maxYValue;
-(id)minYValue;


@end


#endif