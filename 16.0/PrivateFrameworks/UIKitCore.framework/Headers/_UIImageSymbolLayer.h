// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGESYMBOLLAYER_H
#define _UIIMAGESYMBOLLAYER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIImageAsset.h"
#import "UIColor.h"
#import "_UIImageCUIVectorGlyphContent.h"

@interface _UIImageSymbolLayer : NSObject

@property (retain, nonatomic) UIImageAsset *asset; // ivar: _asset
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) _UIImageCUIVectorGlyphContent *content; // ivar: _content
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic, getter=isSystemImage) BOOL systemImage;


+(id)_symbolLayerWithImage:(id)arg0 color:(id)arg1 offset:(struct CGPoint )arg2 scaleFactor:(CGFloat)arg3 ;
+(id)_symbolLayerWithName:(id)arg0 color:(id)arg1 ;
+(id)_symbolLayerWithName:(id)arg0 color:(id)arg1 offset:(struct CGPoint )arg2 scaleFactor:(CGFloat)arg3 ;
+(id)_symbolLayerWithSystemName:(id)arg0 color:(id)arg1 ;
+(id)_symbolLayerWithSystemName:(id)arg0 color:(id)arg1 offset:(struct CGPoint )arg2 scaleFactor:(CGFloat)arg3 ;


@end


#endif