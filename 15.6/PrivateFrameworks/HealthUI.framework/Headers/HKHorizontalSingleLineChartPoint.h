// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHORIZONTALSINGLELINECHARTPOINT_H
#define HKHORIZONTALSINGLELINECHARTPOINT_H

@class NSString, NSDate, NSNumber;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKHorizontalSingleLineChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL groupToPrevious; // ivar: _groupToPrevious
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger markStyle; // ivar: _markStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSDate *xValue; // ivar: _xValue
@property (retain, nonatomic) NSNumber *yValue; // ivar: _yValue


-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif