// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIACCOUNTCONTACTBULLETPOINTSUBPANE_H
#define AAUIACCOUNTCONTACTBULLETPOINTSUBPANE_H

@class UIView, UIImageView, UIImage, NSString, UILabel, UIStackView;



@interface AAUIAccountContactBulletPointSubPane : UIView

@property (readonly, nonatomic) UIImageView *bulletImageView; // ivar: _bulletImageView
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) UIStackView *messageStackView; // ivar: _messageStackView
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_imageViewWithImage:(id)arg0 ;
-(id)_labelWithString:(id)arg0 title:(BOOL)arg1 ;
-(id)_verticalStackView;
-(id)initWithImage:(id)arg0 title:(id)arg1 message:(id)arg2 ;


@end


#endif