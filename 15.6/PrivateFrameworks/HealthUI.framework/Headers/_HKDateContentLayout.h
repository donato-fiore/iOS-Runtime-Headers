// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKDATECONTENTLAYOUT_H
#define _HKDATECONTENTLAYOUT_H

@class UIView;



@interface _HKDateContentLayout : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *dateView; // ivar: _dateView


-(CGFloat)_maximumViewWidth;
-(CGFloat)_totalViewHeight;
-(NSInteger)_viewCount;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateLayout;
-(void)layoutSubviews;


@end


#endif