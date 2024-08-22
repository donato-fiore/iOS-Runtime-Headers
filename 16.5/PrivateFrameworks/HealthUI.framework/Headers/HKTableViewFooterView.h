// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTABLEVIEWFOOTERVIEW_H
#define HKTABLEVIEWFOOTERVIEW_H

@class UIView, UILabel;



@interface HKTableViewFooterView : UIView

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)updateFont;


@end


#endif