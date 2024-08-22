// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKANNOTATIONBLOCKPOINT_H
#define HKANNOTATIONBLOCKPOINT_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKAnnotationBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly, nonatomic) NSInteger pointType; // ivar: _pointType
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithChartPoint:(id)arg0 xAxisTransform:(id)arg1 yAxisTransform:(id)arg2 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 blockPoint:(id)arg1 ;


@end


#endif