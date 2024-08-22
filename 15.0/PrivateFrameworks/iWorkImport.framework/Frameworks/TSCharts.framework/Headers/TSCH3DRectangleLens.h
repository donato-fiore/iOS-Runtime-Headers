// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DRECTANGLELENS_H
#define TSCH3DRECTANGLELENS_H



#import "TSCH3DLens.h"

@interface TSCH3DRectangleLens : TSCH3DLens

@property (nonatomic) float bottom; // ivar: _bottom
@property (readonly, nonatomic) float height;
@property (nonatomic) float left; // ivar: _left
@property (nonatomic) float right; // ivar: _right
@property (nonatomic) float top; // ivar: _top
@property (readonly, nonatomic) float width;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)frustumRect;
-(id)init;
-(id)narrowByNormalizedBounds:(*void)arg0 ;
-(id)narrowedByNormalizedBounds:(*void)arg0 ;
-(id)shiftByPercentage:(*void)arg0 ;
-(id)shiftedByPercentage:(*void)arg0 ;
-(void)deviceNormalize;
-(void)normalize;
-(void)setPerPixel:(*void)arg0 ;
-(void)setPerPixelSize:(*void)arg0 ;


@end


#endif