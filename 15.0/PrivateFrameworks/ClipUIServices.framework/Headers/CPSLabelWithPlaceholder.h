// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSLABELWITHPLACEHOLDER_H
#define CPSLABELWITHPLACEHOLDER_H

@class UILabel, UIView, NSString, UIColor;



@interface CPSLabelWithPlaceholder : UILabel {
    UIView *_placeholderView;
    NSString *_text;
}


@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) CGFloat placeholderWidth; // ivar: _placeholderWidth


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(struct CGSize )_desiredPlaceholderSize;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)_placeholderInputsDidChange;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif