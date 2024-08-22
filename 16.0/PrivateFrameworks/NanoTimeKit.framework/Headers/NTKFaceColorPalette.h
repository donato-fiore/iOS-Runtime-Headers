// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACECOLORPALETTE_H
#define NTKFACECOLORPALETTE_H

@class NSString, NSMutableArray, NSCache, NSBundle, UIColor;
@protocol NSObject, NSCopying, NTKFaceColorPalette, NTKFaceColorPaletteConfigurationDelegate, NTKFaceColorPaletteKeyColors;

#import <Foundation/Foundation.h>

#import "NTKFaceColorPaletteConfiguration.h"
#import "NTKInterpolatedColorPalette.h"
#import "NTKPigmentEditOption.h"
#import "NTKFaceColorPalette.h"

@interface NTKFaceColorPalette : NSObject <NSObject, NSCopying, NTKFaceColorPalette, NTKFaceColorPaletteConfigurationDelegate, NTKFaceColorPaletteKeyColors>

 {
    BOOL _tritium;
    NSString *_identifier;
}


@property (retain, nonatomic) NSMutableArray *bundleList; // ivar: _bundleList
@property (retain, nonatomic) NSCache *colorCache; // ivar: _colorCache
@property (retain, nonatomic) NTKFaceColorPaletteConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *domainBundle; // ivar: _domainBundle
@property (copy, nonatomic) NSString *faceSpecificNamespace; // ivar: _faceSpecificNamespace
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKInterpolatedColorPalette *interpolatedTritiumPalette; // ivar: _interpolatedTritiumPalette
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *swatch;
@property (retain, nonatomic) NSCache *swatchImageCache; // ivar: _swatchImageCache
@property (readonly, nonatomic, getter=isTritium) BOOL tritium;
@property (retain, nonatomic) NTKFaceColorPalette *tritiumPalette; // ivar: _tritiumPalette


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(id)colorWithName:(id)arg0 inDomain:(id)arg1 ;
-(BOOL)hasPrimaryColorRange;
-(BOOL)isBlackColor;
-(BOOL)isCompositePalette;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEvergreenCollection;
-(BOOL)isMulticolor;
-(BOOL)isNotFoundColor:(id)arg0 ;
-(BOOL)isRainbowColor;
-(BOOL)isSiriColor;
-(BOOL)isUnityColor;
-(BOOL)isVictory;
-(BOOL)isWhite;
-(BOOL)isWhiteColor;
-(BOOL)isZeus;
-(id)_loadColorFromAssetCatalogForKey:(id)arg0 namespace:(id)arg1 collectionName:(id)arg2 bundle:(id)arg3 colorFraction:(CGFloat)arg4 ignoringOptionAndCollection:(BOOL)arg5 inspector:(id)arg6 ;
-(id)_notFoundColor;
-(id)_unityMiddleColor;
-(id)_unitySwatchImageForSize:(struct CGSize )arg0 ;
-(id)_unitySwatchImageForSize:(struct CGSize )arg0 redColor:(id)arg1 blackColor:(id)arg2 greenColor:(id)arg3 ;
-(id)copyWithOption:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entryNameForKey:(id)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithDomainName:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithFaceClass:(Class)arg0 ;
-(id)multitoneColorNames;
-(id)paletteAtIndex:(NSUInteger)arg0 ;
-(id)primaryColorWithFraction:(CGFloat)arg0 ;
-(id)swatchImageForSize:(struct CGSize )arg0 ;
-(id)tritiumPaletteWithProgress:(CGFloat)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)colorBundleContentChanged;
-(void)configurationDidChange:(id)arg0 ;
-(void)executeWithOption:(id)arg0 block:(id)arg1 ;


@end


#endif