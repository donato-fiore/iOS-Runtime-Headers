// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBTUTORIALMODALDISPLAYSTYLING_H
#define UIKBTUTORIALMODALDISPLAYSTYLING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIKBTutorialModalDisplayStyling : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (retain, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (retain, nonatomic) UIColor *mainTextColor; // ivar: _mainTextColor


-(id)backgroundBlurEffects:(NSInteger)arg0 ;
-(id)initWithKeyboardAppearance:(NSInteger)arg0 ;


@end


#endif