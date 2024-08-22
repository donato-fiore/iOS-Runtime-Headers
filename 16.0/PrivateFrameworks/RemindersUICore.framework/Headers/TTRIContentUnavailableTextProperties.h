// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTRICONTENTUNAVAILABLETEXTPROPERTIES_H
#define TTRICONTENTUNAVAILABLETEXTPROPERTIES_H

@class UIColor, UIFont;


#import "TTRIUIContentUnavailableShim.h"

@interface TTRIContentUnavailableTextProperties : TTRIUIContentUnavailableShim

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;


+(Class)implClass;
-(id)asUIKit;


@end


#endif