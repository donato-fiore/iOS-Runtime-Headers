// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDTABHEADERVIEW_H
#define CLOUDTABHEADERVIEW_H

@class UIView, UILabel, UIImageView, NSString;



@interface CloudTabHeaderView : UIView {
    UILabel *_label;
    UIImageView *_icon;
    UIView *_separatorView;
    NSInteger _style;
    CGFloat _bottomPadding;
    CGFloat _paddingBetweenIconAndLabel;
    CGFloat _leftEdgeInset;
}


@property (readonly, nonatomic) CGRect labelFrame;
@property (copy, nonatomic) NSString *text;


+(CGFloat)defaultHeightForStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )_iconSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif