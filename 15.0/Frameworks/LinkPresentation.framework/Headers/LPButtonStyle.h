// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPBUTTONSTYLE_H
#define LPBUTTONSTYLE_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPPadding.h"

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) LPPointUnit *height; // ivar: _height
@property (retain, nonatomic) LPPadding *margin; // ivar: _margin
@property (retain, nonatomic) LPPointUnit *minimumWidth; // ivar: _minimumWidth
@property (retain, nonatomic) LPPadding *padding; // ivar: _padding


+(id)systemPillButtonStyleForPlatform:(NSInteger)arg0 ;
-(id)init;


@end


#endif