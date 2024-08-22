// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFRAME_H
#define TSDFRAME_H

@class NSString;


#import "TSDStroke.h"
#import "TSDFrameSpec.h"

@interface TSDFrame : TSDStroke {
    NSString *_frameName;
    CGFloat _leftWidth;
    CGFloat _rightWidth;
    CGFloat _topHeight;
    CGFloat _bottomHeight;
    CGSize _adornmentSize;
}


@property (readonly, nonatomic) NSString *archivableFrameName;
@property (readonly, nonatomic) CGFloat assetScale; // ivar: _assetScale
@property (readonly, nonatomic) NSString *frameName;
@property (readonly, nonatomic) TSDFrameSpec *frameSpec; // ivar: _spec
@property (readonly, nonatomic) BOOL hasMask;
@property (readonly, nonatomic) CGFloat minimumAssetScale;


+(Class)mutableClass;
-(BOOL)canApplyDirectlyToRepRenderable;
-(BOOL)canApplyToShapeRenderable;
-(BOOL)containsPoint:(struct CGPoint )arg0 whenStrokingRect:(struct CGRect )arg1 ;
-(BOOL)drawsInOneStep;
-(BOOL)i_willRenderForRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrame;
-(BOOL)isNearlyWhite;
-(BOOL)isNullStroke;
-(BOOL)prefersToApplyToShapeRenderableDuringManipulation;
-(BOOL)shouldRender;
-(BOOL)shouldRenderForSizeIncludingCoverage:(struct CGSize )arg0 ;
-(BOOL)supportsColor;
-(BOOL)supportsLineOptions;
-(BOOL)supportsPattern;
-(CGFloat)equivalentStrokeWidth;
-(CGFloat)i_bottomHeight;
-(CGFloat)i_leftWidth;
-(CGFloat)i_rightWidth;
-(CGFloat)i_topHeight;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithFrameName:(id)arg0 ;
-(id)initWithFrameSpec:(id)arg0 ;
-(id)initWithFrameSpec:(id)arg0 assetScale:(CGFloat)arg1 ;
-(id)initWithFrameSpec:(id)arg0 assetScale:(CGFloat)arg1 archivableFrameName:(id)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)strokeByTransformingByTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )coverageRect:(struct CGRect )arg0 ;
-(struct CGRect )coverageRectWithoutAdornment:(struct CGRect )arg0 ;
-(struct CGRect )i_adornmentRectForRect:(struct CGRect )arg0 ;
-(struct CGRect )p_coverageRectWithAdornment:(struct CGRect )arg0 ;
-(struct CGRect )p_coverageRectWithoutAdornment:(struct CGRect )arg0 ;
-(struct CGRect )p_uncoveredRectWithoutAdornment:(struct CGRect )arg0 ;
-(struct CGSize )p_minimumRenderedSize;
-(struct _TSDStrokeOutsets )outsets;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif