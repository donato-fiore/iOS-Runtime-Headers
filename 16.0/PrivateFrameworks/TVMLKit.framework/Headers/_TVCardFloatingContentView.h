// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVCARDFLOATINGCONTENTVIEW_H
#define _TVCARDFLOATINGCONTENTVIEW_H

@class UIFloatingContentView, UIView, NSString, UIImage;
@protocol _UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting;



@interface _TVCardFloatingContentView : UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting>

 {
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    CGFloat _unfocusedAlpha;
    BOOL _isSelected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat focusedShadowAlpha; // ivar: _focusedShadowAlpha
@property (nonatomic) CGSize focusedShadowCardSize; // ivar: _focusedShadowCardSize
@property (retain, nonatomic) UIImage *focusedShadowImage; // ivar: _focusedShadowImage
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pressCompletionBlock; // ivar: _pressCompletionBlock
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unfocusedShadowAlpha; // ivar: _unfocusedShadowAlpha
@property (nonatomic) CGSize unfocusedShadowCardSize; // ivar: _unfocusedShadowCardSize
@property (retain, nonatomic) UIImage *unfocusedShadowImage; // ivar: _unfocusedShadowImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_updateForAccessibilityChange;
-(void)dealloc;
-(void)floatingContentView:(id)arg0 didFinishTransitioningToState:(NSUInteger)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBgColor:(id)arg0 highlightBgColor:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif