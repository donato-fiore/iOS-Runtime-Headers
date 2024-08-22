// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKANNOTATIONCHARTPOINT_H
#define HKANNOTATIONCHARTPOINT_H

@class NSDate, NSString, NSNumber;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>


@interface HKAnnotationChartPoint : NSObject <HKChartPoint>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger pointType; // ivar: _pointType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


-(id)allYValues;
-(id)initWithPoint:(struct CGPoint )arg0 pointType:(NSInteger)arg1 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif