// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMINMAXCOORDINATE_H
#define HKMINMAXCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

 {
    id<HKGraphSeriesBlockCoordinateInfo> *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint max; // ivar: _max
@property (readonly, nonatomic) CGPoint min; // ivar: _min
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo;


-(BOOL)isVisibleInChartRect:(struct CGRect )arg0 ;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 ;
-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithChartPoint:(id)arg0 xAxisTransform:(id)arg1 yAxisTransform:(id)arg2 ;
-(id)initWithMin:(struct CGPoint )arg0 max:(struct CGPoint )arg1 userInfo:(id)arg2 ;


@end


#endif