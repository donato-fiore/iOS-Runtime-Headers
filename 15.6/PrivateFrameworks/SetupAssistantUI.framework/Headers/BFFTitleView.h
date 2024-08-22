// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFTITLEVIEW_H
#define BFFTITLEVIEW_H

@class UIScrollView, UILabel;



@interface BFFTitleView : UIScrollView

@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 ;


@end


#endif