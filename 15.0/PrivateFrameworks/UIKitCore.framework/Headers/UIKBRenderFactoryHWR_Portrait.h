// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORYHWR_PORTRAIT_H
#define UIKBRENDERFACTORYHWR_PORTRAIT_H

@class Round;



@interface UIKBRenderFactoryHWR_Portrait : Round



-(BOOL)shouldUseRoundCornerForKey:(id)arg0 ;
-(CGFloat)handwritingGradientStartLocation;
-(CGFloat)spaceKeyFontSize;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(struct CGPoint )deleteGlyphOffset;
-(struct CGPoint )globeKeyTextOffset;
-(struct CGPoint )moreKeyTextOffset;
-(struct CGPoint )spaceKeyTextOffset;
-(struct UIEdgeInsets )handwritingAreaInsets;
-(struct UIEdgeInsets )symbolFrameInsets;
-(void)setupLayoutSegments;


@end


#endif