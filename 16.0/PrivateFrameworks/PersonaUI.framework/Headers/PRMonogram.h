// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRMONOGRAM_H
#define PRMONOGRAM_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>

#import "PRMonogramColor.h"

@interface PRMonogram : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSUInteger fontIndex; // ivar: _fontIndex
@property (retain, nonatomic) PRMonogramColor *monogramColor; // ivar: _monogramColor
@property (readonly, nonatomic) UIColor *plateFlatColor;
@property (readonly, nonatomic) UIColor *plateGradientEndColor;
@property (readonly, nonatomic) UIColor *plateGradientStartColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveTextColor;
@property (readonly, nonatomic) UIColor *plateSelectedInactiveColor;
@property (copy, nonatomic) NSString *text; // ivar: _text


+(CGFloat)kerningForFontIndex:(NSUInteger)arg0 fontSize:(CGFloat)arg1 ;
+(NSUInteger)countOfFonts;
+(id)_fontSpecs;
+(id)fontForIndex:(NSUInteger)arg0 plateDiameter:(CGFloat)arg1 ;
+(id)monogram;
+(id)monogramWithData:(id)arg0 ;
+(id)plateOverlayLayer;
+(void)updatePlateOverlayLayer:(id)arg0 ;
-(BOOL)_renderTextInContext:(struct CGContext *)arg0 frame:(struct CGRect )arg1 ;
-(id)_initWithData:(id)arg0 ;
-(id)dataRepresentation;
-(id)dataRepresentationWithVersion:(unsigned char)arg0 ;
-(id)description;
-(id)init;
-(id)initWithText:(id)arg0 fontIndex:(NSUInteger)arg1 monogramColor:(id)arg2 ;
-(id)snapshotWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)stringAttributesForDiameter:(CGFloat)arg0 ;
-(void)_takeValuesFromDataRepresentation:(id)arg0 ;
-(void)appendToRecipe:(id)arg0 text:(id)arg1 ;
-(void)appendToRecipe:(id)arg0 text:(id)arg1 fontIndex:(unsigned char)arg2 ;


@end


#endif