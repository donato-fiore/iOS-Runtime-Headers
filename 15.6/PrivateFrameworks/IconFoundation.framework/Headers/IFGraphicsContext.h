// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IFGRAPHICSCONTEXT_H
#define IFGRAPHICSCONTEXT_H

@class NSData;

#import <Foundation/Foundation.h>

#import "IFColor.h"
#import "IFImage.h"

@interface IFGraphicsContext : NSObject

@property (nonatomic) int blendMode;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) *CGContext cgContext; // ivar: _cgContext
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) IFColor *fillColor;
@property (readonly, nonatomic) IFImage *image;
@property (nonatomic) CGFloat lineWidth;
@property (readonly, nonatomic) NSUInteger preset; // ivar: _preset
@property (readonly, nonatomic) CGFloat scale;
@property (retain, nonatomic) IFColor *strokeColor;
@property (nonatomic) CGAffineTransform transform;


+(id)bitmapContextWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 preset:(NSUInteger)arg2 ;
-(id)imageFromRect:(struct CGRect )arg0 ;
-(id)initWithCGContext:(struct CGContext *)arg0 preset:(NSUInteger)arg1 ;
-(struct CGSize )size;
-(void)clear;
-(void)clipToMaskCGImage:(struct CGImage *)arg0 inRect:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)drawCGImage:(struct CGImage *)arg0 centeredInRect:(struct CGRect )arg1 ;
-(void)drawCGImage:(struct CGImage *)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawSymbolImage:(id)arg0 centeredInRect:(struct CGRect )arg1 ;
-(void)drawText:(id)arg0 fontName:(id)arg1 fontSize:(CGFloat)arg2 inRect:(struct CGRect )arg3 ;
-(void)fillPath:(struct CGPath *)arg0 ;
-(void)fillRect:(struct CGRect )arg0 ;
-(void)popState;
-(void)pushState;
-(void)strokePath:(struct CGPath *)arg0 ;
-(void)strokeRect:(struct CGRect )arg0 ;


@end


#endif