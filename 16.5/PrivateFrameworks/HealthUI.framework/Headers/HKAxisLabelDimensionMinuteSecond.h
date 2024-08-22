// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAXISLABELDIMENSIONMINUTESECOND_H
#define HKAXISLABELDIMENSIONMINUTESECOND_H

@class NSDateFormatter, NSDate;


#import "HKAxisLabelDimensionScalar.h"

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar

@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 ;
-(id)stringForLocation:(id)arg0 formatterForStepSize:(id)arg1 ;


@end


#endif