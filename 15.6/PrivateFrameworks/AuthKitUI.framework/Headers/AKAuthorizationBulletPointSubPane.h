// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONBULLETPOINTSUBPANE_H
#define AKAUTHORIZATIONBULLETPOINTSUBPANE_H

@class UIView, UIImageView, UIImage, NSString, UILabel, UIStackView;


#import "AKAuthorizationSubPane.h"

@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane

@property (readonly, nonatomic) UIView *baseView; // ivar: _baseView
@property (readonly, nonatomic) UIImageView *bulletImageView; // ivar: _bulletImageView
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) UIStackView *messageStackView; // ivar: _messageStackView
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_iconColor;
-(id)_imageViewWithImage:(id)arg0 ;
-(id)_labelWithString:(id)arg0 title:(BOOL)arg1 ;
-(id)_verticalStackView;
-(id)initWithImage:(id)arg0 title:(id)arg1 message:(id)arg2 ;
-(struct CGSize )_sizeForBulletImage:(id)arg0 ;
-(void)addToConstraints:(id)arg0 context:(id)arg1 ;


@end


#endif