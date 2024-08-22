// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREVIEWINAPPRATINGHEADERVIEW_H
#define SKUIREVIEWINAPPRATINGHEADERVIEW_H

@class UIView, UIImageView, NSString, UILabel;


#import "SKUIStarRatingControl.h"

@interface SKUIReviewInAppRatingHeaderView : UIView

@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) SKUIStarRatingControl *ratingView; // ivar: _ratingView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithTitle:(id)arg0 message:(id)arg1 icon:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif