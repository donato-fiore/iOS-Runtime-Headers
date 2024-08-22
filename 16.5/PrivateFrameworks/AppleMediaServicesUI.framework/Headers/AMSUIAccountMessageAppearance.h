// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIACCOUNTMESSAGEAPPEARANCE_H
#define AMSUIACCOUNTMESSAGEAPPEARANCE_H

@class UIColor, UIFont, UIImage, UIImageSymbolConfiguration;
@protocol NSCopying;


#import "AMSUIAppearance.h"

@interface AMSUIAccountMessageAppearance : AMSUIAppearance <NSCopying>



@property (retain, nonatomic) UIColor *accessoryButtonColor; // ivar: _accessoryButtonColor
@property (retain, nonatomic) UIFont *accessoryButtonFont; // ivar: _accessoryButtonFont
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIColor *footerButtonColor; // ivar: _footerButtonColor
@property (retain, nonatomic) UIFont *footerButtonFont; // ivar: _footerButtonFont
@property (nonatomic) NSUInteger imageStyle; // ivar: _imageStyle
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (nonatomic) NSInteger impressionAnimationStyle; // ivar: _impressionAnimationStyle
@property (retain, nonatomic) UIFont *messageFont; // ivar: _messageFont
@property (retain, nonatomic) UIColor *messageTextColor; // ivar: _messageTextColor
@property (nonatomic) NSInteger primaryImageRenderingMode; // ivar: _primaryImageRenderingMode
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(NSInteger)_animationStyleWithDictionary:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif