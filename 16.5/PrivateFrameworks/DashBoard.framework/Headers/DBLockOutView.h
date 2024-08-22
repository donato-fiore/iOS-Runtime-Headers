// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBLOCKOUTVIEW_H
#define DBLOCKOUTVIEW_H

@class UIView, UITapGestureRecognizer, UIStackView, UIImageView, UILabel;
@protocol DBLockOutViewDelegate;


#import "DBEnvironmentConfiguration.h"

@interface DBLockOutView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *backToOEMGestureRecognizer; // ivar: _backToOEMGestureRecognizer
@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (weak, nonatomic) NSObject<DBLockOutViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_buttonFont;
-(id)_buttonOfType:(NSUInteger)arg0 ;
-(id)_buttonTitleForType:(NSUInteger)arg0 ;
-(id)_titleFont;
-(id)initWithMode:(NSInteger)arg0 environmentConfiguration:(id)arg1 ;
-(void)_backToOEM;
-(void)_buttonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif