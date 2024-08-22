// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAXISLABELDIMENSIONMINUTESECOND_H
#define HKAXISLABELDIMENSIONMINUTESECOND_H

@class NSDateFormatter, NSDate;


#import "HKAxisLabelDimensionScalar.h"

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar

@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 ;
-(id)stringForLocation:(id)arg0 ;


@end


#endif