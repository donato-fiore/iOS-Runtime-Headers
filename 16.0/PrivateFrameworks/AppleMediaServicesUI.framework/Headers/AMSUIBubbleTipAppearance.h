// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIBUBBLETIPAPPEARANCE_H
#define AMSUIBUBBLETIPAPPEARANCE_H

@class UIColor, UIFont, UIImage, UIImageSymbolConfiguration;
@protocol NSCopying;


#import "AMSUIAppearance.h"

@interface AMSUIBubbleTipAppearance : AMSUIAppearance <NSCopying>



@property (retain, nonatomic) UIColor *accessoryButtonColor; // ivar: _accessoryButtonColor
@property (retain, nonatomic) UIFont *accessoryButtonFont; // ivar: _accessoryButtonFont
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIColor *footerButtonColor; // ivar: _footerButtonColor
@property (retain, nonatomic) UIFont *footerButtonFont; // ivar: _footerButtonFont
@property (nonatomic) NSUInteger imageStyle; // ivar: _imageStyle
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (retain, nonatomic) UIFont *messageFont; // ivar: _messageFont
@property (retain, nonatomic) UIColor *messageTextColor; // ivar: _messageTextColor
@property (nonatomic) NSInteger primaryImageRenderingMode; // ivar: _primaryImageRenderingMode
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif