// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTUISTYLE_H
#define AVTUISTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface AVTUIStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


+(id)darkStyle;
+(id)lightStyle;


@end


#endif