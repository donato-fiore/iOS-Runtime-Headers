// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAILUREBARVIEW_H
#define FAILUREBARVIEW_H

@class UIImageView, UILabel;



@interface FailureBarView : UIImageView

@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setFailureCount:(NSInteger)arg0 ;


@end


#endif