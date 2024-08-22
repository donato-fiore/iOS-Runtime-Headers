// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOPOVERLEGACYCHROMEVIEW_H
#define _UIPOPOVERLEGACYCHROMEVIEW_H

@class UIPopoverStandardChromeView;


#import "UIView.h"
#import "UIVisualEffectView.h"

@interface _UIPopoverLegacyChromeView : UIPopoverStandardChromeView {
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    NSInteger _requestedBackgroundStyle;
    NSInteger _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _wasPinned;
}


@property (readonly, nonatomic) UIView *arrowView; // ivar: _arrowView
@property (readonly, nonatomic) BOOL hasComponentViews;
@property (readonly, nonatomic) UIView *leftCapView; // ivar: _leftCapView
@property (readonly, nonatomic) UIView *rightCapView; // ivar: _rightCapView


+(CGFloat)arrowBase;
+(CGFloat)arrowHeight;
-(BOOL)isPinned;
-(BOOL)useShortMode;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(CGFloat)arrowOffset;
-(CGFloat)maxNonPinnedOffset;
-(CGFloat)minNonPinnedOffset;
-(NSInteger)_resolvedBackgroundStyle;
-(NSInteger)backgroundStyle;
-(id)_shadowPath;
-(id)backgroundEffect;
-(struct CGSize )_shadowOffset;
-(struct UIEdgeInsets )_shadowInsets;
-(void)_configureEffectView;
-(void)_layoutArrowViewsLeftOrRight;
-(void)_layoutArrowViewsNone;
-(void)_layoutArrowViewsUpOrDown;
-(void)_loadNecessaryViews;
-(void)_removeEffectView;
-(void)_resetComponentViews;
-(void)_updateBackgroundStyle;
-(void)_updateChrome;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)motionBegan:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)motionCancelled:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)setArrowBackgroundColor:(id)arg0 ;
-(void)setArrowOffset:(CGFloat)arg0 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)setPopoverBackgroundColor:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif