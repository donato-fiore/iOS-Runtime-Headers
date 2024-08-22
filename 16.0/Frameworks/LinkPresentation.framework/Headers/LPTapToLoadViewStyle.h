// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTAPTOLOADVIEWSTYLE_H
#define LPTAPTOLOADVIEWSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "LPTextViewStyle.h"
#import "LPPointUnit.h"

@interface LPTapToLoadViewStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) LPTextViewStyle *caption; // ivar: _caption
@property (retain, nonatomic) LPPointUnit *height; // ivar: _height
@property (retain, nonatomic) UIColor *tapHighlightColor; // ivar: _tapHighlightColor
@property (retain, nonatomic) LPPointUnit *width; // ivar: _width


-(id)initWithPlatform:(NSInteger)arg0 sizeClass:(NSUInteger)arg1 fontScalingFactor:(CGFloat)arg2 ;


@end


#endif