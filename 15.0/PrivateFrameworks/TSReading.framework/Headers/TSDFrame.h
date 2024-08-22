// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFRAME_H
#define TSDFRAME_H

@class NSString;


#import "TSDStroke.h"
#import "TSDFrameSpec.h"

@interface TSDFrame : TSDStroke {
    NSString *mFrameName;
    BOOL mScaledSizesValid;
    CGFloat mLeftWidth;
    CGFloat mRightWidth;
    CGFloat mTopHeight;
    CGFloat mBottomHeight;
    CGSize mAdornmentSize;
}


@property (readonly, nonatomic) CGFloat assetScale; // ivar: mAssetScale
@property (readonly, nonatomic) TSDFrameSpec *frameSpec; // ivar: mSpec


+(Class)mutableClass;
-(BOOL)canApplyDirectlyToRepCALayer;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsInOneStep;
-(BOOL)hasMask;
-(BOOL)i_willRenderForRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrame;
-(BOOL)isNullStroke;
-(BOOL)prefersToApplyToShapeRenderableDuringManipulation;
-(BOOL)shouldRender;
-(BOOL)shouldRenderForSizeIncludingCoverage:(struct CGSize )arg0 ;
-(BOOL)supportsColor;
-(BOOL)supportsLineOptions;
-(BOOL)supportsPattern;
-(CGFloat)i_bottomHeight;
-(CGFloat)i_leftWidth;
-(CGFloat)i_rightWidth;
-(CGFloat)i_topHeight;
-(CGFloat)minimumAssetScale;
-(NSUInteger)hash;
-(id)archivableFrameName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)frameName;
-(id)initWithFrameName:(id)arg0 ;
-(id)initWithFrameSpec:(id)arg0 ;
-(id)initWithFrameSpec:(id)arg0 assetScale:(CGFloat)arg1 ;
-(id)initWithFrameSpec:(id)arg0 assetScale:(CGFloat)arg1 archivableFrameName:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)strokeByTransformingByTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )coverageRect:(struct CGRect )arg0 ;
-(struct CGRect )coverageRectWithoutAdornment:(struct CGRect )arg0 ;
-(struct CGRect )i_adornmentRectForRect:(struct CGRect )arg0 ;
-(struct CGRect )p_coverageRectWithAdornment:(struct CGRect )arg0 ;
-(struct CGRect )p_coverageRectWithoutAdornment:(struct CGRect )arg0 ;
-(struct CGSize )p_minimumRenderedSize;
-(struct _TSDStrokeOutsets )outsets;
-(void)dealloc;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 ;


@end


#endif