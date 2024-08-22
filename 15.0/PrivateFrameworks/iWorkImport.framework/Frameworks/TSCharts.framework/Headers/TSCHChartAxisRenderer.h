// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISRENDERER_H
#define TSCHCHARTAXISRENDERER_H

@class NSString;
@protocol TSCHCompositeRendering;


#import "TSCHRenderer.h"
#import "TSCHSelectionPath.h"

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering>

 {
    TSCHSelectionPath *_axisTitleSelectionPath;
    CGRect _startingEditingFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *editingString; // ivar: _editingString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canEditTextForSelectionPath:(id)arg0 ;
-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(BOOL)isCompositeRenderer;
-(BOOL)needsAnySeparateLayers;
-(BOOL)p_isTitleVisible;
-(BOOL)p_needsPositionBasedTransparencyLayer;
-(BOOL)p_needsSharedTickMarkLayer;
-(BOOL)p_tickmarksStretchInside:(int)arg0 ;
-(BOOL)p_tickmarksStretchOutside:(int)arg0 ;
-(CGFloat)p_strokeCapForRenderingTickmarks:(id)arg0 ;
-(CGFloat)p_strokeWidthForRenderingTickmarks:(id)arg0 ;
-(id)axis;
-(id)axisLayoutItem;
-(id)axisTitleSelectionPath;
-(id)transparencyLayers;
-(struct CGRect )frameForEditingTextForSelectionPath:(id)arg0 ;
-(struct CGRect )p_tickmarkFrameFromElementSize:(struct CGSize )arg0 location:(int)arg1 tickLength:(CGFloat)arg2 ;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;
-(void)p_addLinePath:(struct CGContext *)arg0 stroke:(id)arg1 ;
-(void)p_addLinearTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 locations:(id)arg2 stroke:(id)arg3 width:(float)arg4 isMinor:(BOOL)arg5 ;
-(void)p_addPolarAngleTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 stroke:(id)arg2 width:(float)arg3 isMinor:(BOOL)arg4 includeFirstSpoke:(BOOL)arg5 includeSpokesOtherThanTheFirst:(BOOL)arg6 ;
-(void)p_addPolarRadiusTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 absoluteRadii:(id)arg2 stroke:(id)arg3 width:(float)arg4 isMinor:(BOOL)arg5 includeFirstSpoke:(BOOL)arg6 includeSpokesOtherThanTheFirst:(BOOL)arg7 ;
-(void)p_addPolarTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 stroke:(id)arg2 width:(float)arg3 isMinor:(BOOL)arg4 includeFirstSpoke:(BOOL)arg5 includeSpokesOtherThanTheFirst:(BOOL)arg6 betweenSpokes:(BOOL)arg7 unitCircleRadii:(id)arg8 isRotated:(BOOL)arg9 ;
-(void)p_addTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 locations:(id)arg2 stroke:(id)arg3 width:(float)arg4 isMinor:(BOOL)arg5 ;
-(void)p_debugRenderTickmarkArea:(struct CGContext *)arg0 ;
-(void)p_drawTitle:(struct CGContext *)arg0 rangePtr:(struct _NSRange *)arg1 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_renderTickmarkInContext:(struct CGContext *)arg0 startPoint:(struct CGPoint )arg1 endPoint:(struct CGPoint )arg2 strokeWidth:(CGFloat)arg3 strokeCap:(int)arg4 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;
-(void)useEditedString:(id)arg0 ;
-(void)willBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif