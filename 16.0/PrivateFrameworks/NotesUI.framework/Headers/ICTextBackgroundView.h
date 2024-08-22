// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTBACKGROUNDVIEW_H
#define ICTEXTBACKGROUNDVIEW_H

@class UIView, UIImageView;



@interface ICTextBackgroundView : UIView

@property (nonatomic) CGFloat additionalContentHeight; // ivar: _additionalContentHeight
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIEdgeInsets shadowInsets;
@property (retain, nonatomic) UIImageView *shadowView; // ivar: _shadowView


+(struct UIEdgeInsets )additionalTextInsets;
+(struct UIEdgeInsets )defaultContentInsets;
+(struct UIEdgeInsets )listViewContentInsets;
-(id)backgroundColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createLayout;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif