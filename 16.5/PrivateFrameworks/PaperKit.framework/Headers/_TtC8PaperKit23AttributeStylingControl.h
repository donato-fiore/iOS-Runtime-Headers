// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT23ATTRIBUTESTYLINGCONTROL_H
#define _TTC8PAPERKIT23ATTRIBUTESTYLINGCONTROL_H

@class UIControl;
@protocol UIPointerInteractionDelegate;



@interface _TtC8PaperKit23AttributeStylingControl : UIControl <UIPointerInteractionDelegate>

 {
    ? contentInsets;
    ? useCompactStyle;
    ? contentStackView;
    ? titleLabel;
    ? imageView;
    ? titleLabelFont;
    ? isEnabled;
    ? title;
    ? font;
    ? image;
    ? wantsCapsuleCornerStyle;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif