// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIVECTORGLYPHGRAPHICVARIANTOPTIONS_H
#define CUIVECTORGLYPHGRAPHICVARIANTOPTIONS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIVectorGlyphGraphicVariantOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger contentEffect; // ivar: contentEffect
@property (nonatomic) NSInteger fill; // ivar: fill
@property (copy, nonatomic) NSArray *fillColors; // ivar: fillColors
@property (nonatomic) NSInteger imageAlignment; // ivar: imageAlignment
@property (nonatomic) NSInteger imageCentering; // ivar: imageCentering
@property (nonatomic) CGSize imageOffset; // ivar: imageOffset
@property (nonatomic) NSInteger imageScaling; // ivar: imageScaling
@property (retain, nonatomic) id *monochromeForegroundColor; // ivar: monochromeForegroundColor
@property (nonatomic) CGFloat roundedRectCornerRadius; // ivar: roundedRectCornerRadius
@property (nonatomic) NSInteger shape; // ivar: shape
@property (nonatomic) NSInteger shapeEffect; // ivar: shapeEffect


+(CGFloat)defaultSymbolPointSizeRatio;
-(BOOL)_areValid;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif