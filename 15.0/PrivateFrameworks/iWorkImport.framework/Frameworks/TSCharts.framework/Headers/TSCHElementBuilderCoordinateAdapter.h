// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHELEMENTBUILDERCOORDINATEADAPTER_H
#define TSCHELEMENTBUILDERCOORDINATEADAPTER_H


#import <Foundation/Foundation.h>


@interface TSCHElementBuilderCoordinateAdapter : NSObject



-(struct ? *)cartesianPointsWithSeries:(id)arg0 groupIndexSet:(id)arg1 nullsUseIntercept:(BOOL)arg2 plotAreaFrame:(struct CGRect )arg3 ;
-(struct ? *)p_pointArrayWithCount:(NSUInteger)arg0 ;
-(struct CGRect )constrainedRectWithSeries:(id)arg0 elementBoundingBox:(struct CGRect )arg1 seriesAreaFrame:(struct CGRect )arg2 ;
-(void)p_iterateWithXValues:(*CGFloat)arg0 yValues:(*CGFloat)arg1 points:(struct ? *)arg2 pointCount:(NSUInteger)arg3 plotAreaFrame:(struct CGRect )arg4 yValueModifierBlock:(id)arg5 ;


@end


#endif