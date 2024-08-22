// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPGLYPHSTYLE_H
#define LPGLYPHSTYLE_H


#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPImage.h"
#import "LPImageViewStyle.h"
#import "LPPadding.h"

@interface LPGlyphStyle : NSObject

@property (retain, nonatomic) LPPointUnit *baselineOffset; // ivar: _baselineOffset
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (readonly, nonatomic) LPImageViewStyle *imageStyle; // ivar: _imageStyle
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, retain, nonatomic) LPPadding *padding; // ivar: _padding


-(id)init;
-(id)initSearchGlyph;


@end


#endif