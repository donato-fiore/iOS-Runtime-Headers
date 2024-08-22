// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDIMAGE_H
#define CUINAMEDIMAGE_H



#import "CUINamedLookup.h"

@interface CUINamedImage : CUINamedLookup {
    _cuiniproperties _imageProperties;
}


@property (readonly, nonatomic) ? alignmentEdgeInsets;
@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) *CGImage croppedImage;
@property (readonly, nonatomic) ? edgeInsets;
@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) BOOL hasAlignmentInformation;
@property (readonly, nonatomic) BOOL hasSliceInformation;
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) NSInteger imageType;
@property (readonly, nonatomic) BOOL isAlphaCropped;
@property (readonly, nonatomic) BOOL isFlippable;
@property (readonly, nonatomic) BOOL isStructured;
@property (readonly, nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) BOOL isVectorBased;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) BOOL preservedVectorRepresentation;
@property (readonly, nonatomic) NSInteger resizingMode;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) NSInteger templateRenderingMode;


-(BOOL)_cacheRenditionProperties;
-(CGFloat)positionOfSliceBoundary:(unsigned int)arg0 ;
-(NSInteger)resizingModeWithSubtype:(NSInteger)arg0 ;
-(id)baseKey;
-(id)description;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;
-(struct CGImage *)createImageFromPDFRenditionWithScale:(CGFloat)arg0 ;
-(struct CGRect )alphaCroppedRect;
-(struct CGSize )originalUncroppedSize;


@end


#endif