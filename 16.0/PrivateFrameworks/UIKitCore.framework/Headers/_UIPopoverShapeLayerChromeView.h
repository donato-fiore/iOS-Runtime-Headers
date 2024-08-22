// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERSHAPELAYERCHROMEVIEW_H
#define _UIPOPOVERSHAPELAYERCHROMEVIEW_H

@class UIPopoverStandardChromeView;


#import "UIVisualEffectView.h"
#import "_UIPopoverShapeLayerMaskView.h"

@interface _UIPopoverShapeLayerChromeView : UIPopoverStandardChromeView {
    UIVisualEffectView *_blurView;
    NSInteger _requestedBackgroundStyle;
    NSInteger _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _shapeLayerPathNeedsUpdate;
    _UIPopoverShapeLayerMaskView *_shapeLayerMaskView;
}




+(CGFloat)arrowBase;
+(CGFloat)arrowHeight;
+(CGFloat)cornerRadius;
-(CGFloat)_leftAndRightStartYLocationForBounds:(struct CGRect )arg0 ;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(CGFloat)_upAndDownStartingXLocationForBounds:(struct CGRect )arg0 ;
-(CGFloat)maxNonPinnedOffset;
-(CGFloat)minNonPinnedOffset;
-(NSInteger)_resolvedBackgroundStyle;
-(NSInteger)backgroundStyle;
-(id)_shadowPath;
-(id)backgroundEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_shadowOffset;
-(struct UIEdgeInsets )_shadowInsets;
-(void)_addArrowCurveToPath:(id)arg0 direction:(NSUInteger)arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 ;
-(void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg0 startPoint:(struct CGPoint )arg1 endPoint:(struct CGPoint )arg2 leadingEdge:(BOOL)arg3 isVertical:(BOOL)arg4 ;
-(void)_configureEffectView;
-(void)_generateBottomArrowShapeInPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_generateLeftArrowShapeInPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_generateRightArrowShapeInPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_generateTopArrowShapeInPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_loadNecessaryViews;
-(void)_removeEffectView;
-(void)_updateBackgroundStyle;
-(void)_updateShapeLayerPath;
-(void)_updateShapeLayerPathIfNeeded;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setArrowDirection:(NSUInteger)arg0 ;
-(void)setArrowOffset:(CGFloat)arg0 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;


@end


#endif