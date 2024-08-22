// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWICONDRAWER_H
#define WFWORKFLOWICONDRAWER_H

@class WFColor, NSData;

#import <Foundation/Foundation.h>

#import "WFWorkflowIconDrawerContext.h"

@interface WFWorkflowIconDrawer : NSObject

@property (retain, nonatomic) WFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (nonatomic) BOOL dark; // ivar: _dark
@property (nonatomic) BOOL drawBackground; // ivar: _drawBackground
@property (nonatomic) BOOL drawShadowBehindGlyph; // ivar: _drawShadowBehindGlyph
@property (readonly, nonatomic) WFWorkflowIconDrawerContext *drawerContext; // ivar: _drawerContext
@property (nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (retain, nonatomic) WFColor *glyphColor; // ivar: _glyphColor
@property (nonatomic) CGSize glyphSize; // ivar: _glyphSize
@property (nonatomic) BOOL highContrast; // ivar: _highContrast
@property (nonatomic) BOOL outline; // ivar: _outline
@property (nonatomic) BOOL rounded; // ivar: _rounded
@property (nonatomic) BOOL useCustomImage; // ivar: _useCustomImage


+(id)glyphImageWithIcon:(id)arg0 size:(struct CGSize )arg1 ;
+(id)imageWithIcon:(id)arg0 size:(struct CGSize )arg1 ;
+(id)imageWithIcon:(id)arg0 size:(struct CGSize )arg1 background:(BOOL)arg2 ;
+(id)imageWithIcon:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 padding:(struct CGSize )arg3 glyphColor:(id)arg4 background:(BOOL)arg5 ;
+(id)pngDataForImageWithIcon:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageWithSize:(struct CGSize )arg0 ;
-(id)imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 padding:(struct CGSize )arg2 ;
-(id)init;
-(id)initWithDrawerContext:(id)arg0 ;
-(id)initWithHomeScreenIcon:(id)arg0 ;
-(id)initWithIcon:(id)arg0 ;
-(id)initWithIcon:(id)arg0 drawerContext:(id)arg1 ;
-(struct CGSize )calculatedSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)drawInContext:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)setIcon:(id)arg0 ;


@end


#endif