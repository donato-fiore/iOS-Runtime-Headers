// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHADDWIDGETBUTTON_H
#define SBHADDWIDGETBUTTON_H

@class UIButton, UIPointerInteraction, MTStylingProvidingSolidColorView, NSString, UIView;
@protocol UIPointerInteractionDelegate;



@interface SBHAddWidgetButton : UIButton <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
}


@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (readonly) Class superclass;


-(CGFloat)_buttonCornerRadius;
-(id)_addSymbolImage;
-(id)_titleLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)mt_applyVisualStyling:(id)arg0 ;
-(void)mt_removeAllVisualStyling;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif