// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUITOASTAPPEARANCE_H
#define AMSUITOASTAPPEARANCE_H

@class UIColor, UIFont, UIImage;
@protocol NSCopying;


#import "AMSUIAppearance.h"

@interface AMSUIToastAppearance : AMSUIAppearance <NSCopying>



@property (retain, nonatomic) UIColor *accessoryButtonColor; // ivar: _accessoryButtonColor
@property (retain, nonatomic) UIFont *accessoryButtonFont; // ivar: _accessoryButtonFont
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (retain, nonatomic) UIFont *messageFont; // ivar: _messageFont
@property (retain, nonatomic) UIColor *messageTextColor; // ivar: _messageTextColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif