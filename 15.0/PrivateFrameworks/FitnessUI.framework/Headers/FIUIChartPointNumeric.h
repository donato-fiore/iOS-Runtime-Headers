// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTPOINTNUMERIC_H
#define FIUICHARTPOINTNUMERIC_H

@class NSString, NSNumber, NSDate;
@protocol FIUIChartPoint;

#import <Foundation/Foundation.h>


@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maxYValue;
@property (readonly, nonatomic) NSNumber *minYValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *xValue; // ivar: _xValue
@property (copy, nonatomic) NSNumber *yValue; // ivar: _yValue


+(id)chartPointWithXValue:(id)arg0 yValue:(id)arg1 ;
-(id)initWithXValue:(id)arg0 yValue:(id)arg1 ;


@end


#endif