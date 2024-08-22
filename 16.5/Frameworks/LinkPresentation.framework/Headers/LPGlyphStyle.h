// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPGLYPHSTYLE_H
#define LPGLYPHSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPImage.h"
#import "LPImageViewStyle.h"
#import "LPPadding.h"

@interface LPGlyphStyle : NSObject

@property (retain, nonatomic) LPPointUnit *baselineOffset; // ivar: _baselineOffset
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (readonly, nonatomic) LPImageViewStyle *imageStyle; // ivar: _imageStyle
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, retain, nonatomic) LPPadding *padding; // ivar: _padding


-(id)init;
-(id)initSearchGlyph;


@end


#endif