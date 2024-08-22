// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPSHADOWSTYLE_H
#define LPSHADOWSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "LPSize.h"

@interface LPShadowStyle : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) LPSize *offset; // ivar: _offset
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


+(id)cardHeadingIconShadow;
+(id)collaborationPreviewShadow;
-(id)init;


@end


#endif