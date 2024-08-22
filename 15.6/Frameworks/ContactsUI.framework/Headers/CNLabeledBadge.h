// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNLABELEDBADGE_H
#define CNLABELEDBADGE_H

@class UIView, UILabel, UIFont, NSString, UIColor;



@interface CNLabeledBadge : UIView {
    UILabel *_label;
    CGFloat _height;
    CGSize _cachedTextSize;
}


@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;


+(id)labeledBadgeWithText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)cacheTextSizeIfNeeded;
-(void)invalidateCachedTextSize;
-(void)layoutSubviews;


@end


#endif