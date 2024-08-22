// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHADDWIDGETBUTTON_H
#define SBHADDWIDGETBUTTON_H

@class UIButton, MTStylingProvidingSolidColorView, UIView;



@interface SBHAddWidgetButton : UIButton

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView


-(CGFloat)_buttonCornerRadius;
-(id)_addSymbolImage;
-(id)_titleLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
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