// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUICHARTPOINTMULTIPLE_H
#define FIUICHARTPOINTMULTIPLE_H

@class NSString, NSNumber, NSDate, NSIndexSet;
@protocol FIUIChartPoint;

#import <Foundation/Foundation.h>


@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maxYValue;
@property (readonly, nonatomic) NSNumber *minYValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *xValue; // ivar: _xValue
@property (copy, nonatomic) NSIndexSet *yValue; // ivar: _yValue


+(id)chartPointWithDate:(id)arg0 valueIndexSet:(id)arg1 ;
+(id)chartPointWithXValue:(id)arg0 yValue:(id)arg1 ;


@end


#endif