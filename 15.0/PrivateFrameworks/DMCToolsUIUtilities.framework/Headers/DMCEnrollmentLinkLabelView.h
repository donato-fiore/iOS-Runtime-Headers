// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTLINKLABELVIEW_H
#define DMCENROLLMENTLINKLABELVIEW_H

@class UIView, UIImageView, UILabel;



@interface DMCEnrollmentLinkLabelView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) id *linkHandler; // ivar: _linkHandler
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithIcon:(id)arg0 message:(id)arg1 linkMessage:(id)arg2 linkHandler:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif