// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPPERIODCOORDINATE_H
#define HKSLEEPPERIODCOORDINATE_H

@class NSArray, NSString, NSNumber;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, nonatomic) NSArray *asleepYValues; // ivar: _asleepYValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) NSArray *inBedYValues; // ivar: _inBedYValues
@property (readonly, nonatomic) NSNumber *lowerGoalYValue; // ivar: _lowerGoalYValue
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *upperGoalYValue; // ivar: _upperGoalYValue
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) CGFloat xValue; // ivar: _xValue
@property (readonly, nonatomic) NSArray *yValues; // ivar: _yValues


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithXValue:(CGFloat)arg0 asleepYValues:(id)arg1 inBedYValues:(id)arg2 yValues:(id)arg3 upperGoalYValue:(id)arg4 lowerGoalYValue:(id)arg5 highlighted:(BOOL)arg6 userInfo:(id)arg7 ;


@end


#endif