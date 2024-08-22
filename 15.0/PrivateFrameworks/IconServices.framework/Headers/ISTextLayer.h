// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISTEXTLAYER_H
#define ISTEXTLAYER_H

@class IFColor, NSString;


#import "ISLayer.h"

@interface ISTextLayer : ISLayer

@property (retain, nonatomic) IFColor *color; // ivar: _color
@property (retain, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSString *text; // ivar: _text


-(id)init;


@end


#endif