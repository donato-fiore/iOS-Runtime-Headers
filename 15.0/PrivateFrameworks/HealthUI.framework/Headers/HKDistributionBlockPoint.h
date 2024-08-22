// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISTRIBUTIONBLOCKPOINT_H
#define HKDISTRIBUTIONBLOCKPOINT_H

@class NSString, NSArray;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *distributionSegments; // ivar: _distributionSegments
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint maxPoint; // ivar: _maxPoint
@property (readonly, nonatomic) CGPoint minPoint; // ivar: _minPoint
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)_applyTransformToSegments:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)_quickDate:(id)arg0 ;
-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithChartPoint:(id)arg0 xAxisTransform:(id)arg1 yAxisTransform:(id)arg2 gapZeroCount:(NSInteger)arg3 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 blockPoint:(id)arg1 ;


@end


#endif