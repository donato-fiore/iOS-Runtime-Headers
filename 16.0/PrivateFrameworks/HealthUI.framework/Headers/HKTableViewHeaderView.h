// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTABLEVIEWHEADERVIEW_H
#define HKTABLEVIEWHEADERVIEW_H

@class UIView, UILabel;



@interface HKTableViewHeaderView : UIView

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)updateFont;


@end


#endif