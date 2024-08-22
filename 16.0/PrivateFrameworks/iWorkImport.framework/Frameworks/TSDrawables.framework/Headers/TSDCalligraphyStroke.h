// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCALLIGRAPHYSTROKE_H
#define TSDCALLIGRAPHYSTROKE_H



#import "TSDSmartStroke.h"

@interface TSDCalligraphyStroke : TSDSmartStroke

@property (readonly, nonatomic) CGFloat angle;
@property (readonly, nonatomic) BOOL chisel;
@property (readonly, nonatomic) CGFloat scale;


+(Class)mutableClass;
-(BOOL)canApplyToShapeRenderable;
-(BOOL)drawsInOneStep;
-(BOOL)drawsOutsideStrokeBounds;
-(BOOL)prefersToApplyToShapeRenderableDuringManipulation;
-(CGFloat)horizontalMarginForSwatch;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColor:(id)arg0 width:(CGFloat)arg1 cap:(int)arg2 join:(int)arg3 pattern:(id)arg4 miterLimit:(CGFloat)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGAffineTransform )transformInContext:(struct CGContext *)arg0 ;
-(struct CGRect )boundsForLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 ;
-(struct CGRect )boundsForPath:(id)arg0 ;
-(struct CGRect )p_superBoundsForPath:(id)arg0 ;
-(void)applyToContext:(struct CGContext *)arg0 insideStroke:(BOOL)arg1 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(BOOL)arg5 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 ;


@end


#endif