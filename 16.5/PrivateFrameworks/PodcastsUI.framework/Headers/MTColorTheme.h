// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCOLORTHEME_H
#define MTCOLORTHEME_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface MTColorTheme : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL isBackgroundLight; // ivar: _isBackgroundLight
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor


-(BOOL)isBackgroundDark;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif