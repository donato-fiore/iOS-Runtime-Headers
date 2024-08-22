// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORYHWR_LANDSCAPE_H
#define UIKBRENDERFACTORYHWR_LANDSCAPE_H

@class Portrait;



@interface UIKBRenderFactoryHWR_Landscape : Portrait



-(CGFloat)handwritingGradientStartLocation;
-(CGFloat)spaceKeyFontSize;
-(NSUInteger)edgesAdjustedForTranslucentGapsForGeometry:(id)arg0 key:(id)arg1 onKeyplane:(id)arg2 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(struct CGPoint )deleteGlyphOffset;
-(struct CGPoint )spaceKeyTextOffset;
-(struct UIEdgeInsets )handwritingAreaInsets;
-(struct UIEdgeInsets )symbolFrameInsets;
-(void)setupLayoutSegments;


@end


#endif