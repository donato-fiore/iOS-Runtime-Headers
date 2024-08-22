// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCANVASBACKBUTTONVIEW_H
#define CKCANVASBACKBUTTONVIEW_H

@class UIControl, UIImageView, NSString, UILabel, UIColor, UIView;
@protocol UIPointerInteractionDelegate;



@interface CKCanvasBackButtonView : UIControl <UIPointerInteractionDelegate>



@property (retain, nonatomic) UIImageView *backButtonView; // ivar: _backButtonView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowTitlePaddingView; // ivar: _shouldShowTitlePaddingView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIColor *titleLabelColor; // ivar: _titleLabelColor
@property (retain, nonatomic) UIView *titlePaddingView; // ivar: _titlePaddingView


-(BOOL)wantsChromelessAppearance;
-(id)initWithFrame:(struct CGRect )arg0 showPaddingTitleView:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setVisuallyHighlighted:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setBackButtonTitle:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)sizeToFit;
-(void)tintColorDidChange;


@end


#endif