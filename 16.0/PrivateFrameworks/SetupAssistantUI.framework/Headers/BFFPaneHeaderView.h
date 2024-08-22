// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFPANEHEADERVIEW_H
#define BFFPANEHEADERVIEW_H

@class UIView, UIButton, UIColor, UILabel, UIImage, NSString, UIImageView;



@interface BFFPaneHeaderView : UIView {
    CGSize _iconSize;
    UIButton *_linkButton;
    id *_linkHandler;
    UIView *_bottomLine;
}


@property (retain, nonatomic) UIColor *bottomLineColor;
@property (nonatomic) CGFloat customTopPadding; // ivar: _customTopPadding
@property (readonly, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (nonatomic) CGFloat flexibleHeight; // ivar: _flexibleHeight
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (nonatomic) BOOL iconInheritsTint; // ivar: _iconInheritsTint
@property (nonatomic) CGSize iconSize;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UILabel *subLabel; // ivar: _subLabel
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic, getter=isTextLabelAlignedByLastBaseline) BOOL textLabelAlignedByLastBaseline; // ivar: _textLabelAlignedByLastBaseline
@property (nonatomic) BOOL useMinimumTopPadding; // ivar: _useMinimumTopPadding


-(CGFloat)_labelsAndLinksBaselineOffsetForView:(id)arg0 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_linkButtonPressed;
-(void)layoutSubviews;
-(void)setLinkText:(id)arg0 handler:(id)arg1 ;
-(void)setTitleText:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif