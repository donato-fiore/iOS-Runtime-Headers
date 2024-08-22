// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUITHEMERENDITION_H
#define CUITHEMERENDITION_H

@class NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface CUIThemeRendition : NSObject {
    _renditionkeytoken _stackKey;
    *_renditionkeytoken _key;
    cuithemerenditionrenditionflags _renditionFlags;
    NSUInteger _colorSpaceID;
    NSString *_name;
    NSString *_utiType;
    *CGImage _uncroppedImage;
    CGSize _physicalSizeInMeters;
    NSDictionary *_properties;
}


@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) int exifOrientation; // ivar: _exifOrientation
@property (retain, nonatomic) NSString *internalName;
@property (nonatomic) unsigned int internalScale; // ivar: _scale
@property (nonatomic) NSInteger internalTemplateRenderingMode; // ivar: _templateRenderingMode
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, nonatomic) NSData *srcData; // ivar: _srcData
@property (nonatomic) unsigned int subtype; // ivar: _subtype
@property (nonatomic) NSInteger type; // ivar: _type


+(Class)renditionClassForRenditionType:(NSInteger)arg0 andPixelFormat:(unsigned int)arg1 ;
+(id)displayNameForRenditionType:(NSInteger)arg0 ;
-(BOOL)edgesOnly;
-(BOOL)isFlippable;
-(BOOL)isInternalLink;
-(BOOL)isInterpolatable;
-(BOOL)isOpaque;
-(BOOL)isScaled;
-(BOOL)isTiled;
-(BOOL)isTintable;
-(BOOL)isVectorBased;
-(BOOL)optOutOfThinning;
-(BOOL)preserveForArchiveOnly;
-(BOOL)preservedVectorRepresentation;
-(BOOL)substituteWithSystemColor;
-(CGFloat)gradientDrawingAngle;
-(CGFloat)scale;
-(CGFloat)vectorGlyphBaseline;
-(CGFloat)vectorGlyphCapLine;
-(CGFloat)vectorGlyphReferencePointSize;
-(NSInteger)templateRenderingMode;
-(NSInteger)textureIntepretation;
-(NSInteger)vectorGlyphRenderingMode;
-(NSUInteger)colorSpaceID;
-(NSUInteger)sourceRowbytes;
-(float)vectorGlyphTemplateVersion;
-(id)_initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)_sourceRendition;
-(id)assetPackIdentifier;
-(id)contentNames;
-(id)data;
-(id)description;
-(id)effectPreset;
-(id)externalTags;
-(id)gradient;
-(id)imageForSliceIndex:(NSInteger)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)layerReferences;
-(id)linkingToRendition;
-(id)maskForSliceIndex:(NSInteger)arg0 ;
-(id)metrics;
-(id)mipLevels;
-(id)modelAsset;
-(id)modelMesh;
-(id)modelSubmesh;
-(id)name;
-(id)properties;
-(id)provideTextureInfo;
-(id)sizeIndexes;
-(id)sliceInformation;
-(id)systemColorName;
-(id)textureImages;
-(id)utiType;
-(id)vectorGlyphAvailableSizes;
-(int)bitmapEncoding;
-(int)objectVersion;
-(int)pixelFormat;
-(struct ? )transformation;
-(struct ? )vectorGlyphAlignmentRectInsets;
-(struct CGColor *)cgColor;
-(struct CGImage *)createImageFromPDFRenditionWithScale:(CGFloat)arg0 ;
-(struct CGImage *)uncroppedImage;
-(struct CGImage *)unslicedImage;
-(struct CGPDFDocument *)pdfDocument;
-(struct CGRect )_destinationFrame;
-(struct CGRect )alphaCroppedRect;
-(struct CGSVGDocument *)svgDocument;
-(struct CGSize )originalUncroppedSize;
-(struct CGSize )physicalSizeInMeters;
-(struct CGSize )unslicedSize;
-(struct _csitextstyle *)csiTextStyle;
-(struct _renditionkeytoken *)key;
-(struct cuithemerenditionrenditionflags *)renditionFlags;
-(unsigned int)gradientStyle;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg0 ;
-(void)_initalizeMetadataFromCSIData:(struct _csiheader *)arg0 ;
-(void)_initializeCompositingOptionsFromCSIData:(struct _csiheader *)arg0 ;
-(void)_initializePropertiesFromCSIData:(struct _csiheader *)arg0 ;
-(void)_initializeRenditionKey:(struct _renditionkeytoken *)arg0 ;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg0 ;
-(void)_setFlippable:(BOOL)arg0 ;
-(void)_setStructuredThemeStore:(id)arg0 ;
-(void)dealloc;
-(void)setName:(id)arg0 ;


@end


#endif