// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSLIVERENDEREDIMAGESET_H
#define PKPASSLIVERENDEREDIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassLiveRenderedImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *ambientMaterialPropertyImage; // ivar: _ambientMaterialPropertyImage
@property (retain, nonatomic) PKImage *ambientOcclusionMaterialPropertyImage; // ivar: _ambientOcclusionMaterialPropertyImage
@property (retain, nonatomic) PKImage *diffuseMaterialPropertyImage; // ivar: _diffuseMaterialPropertyImage
@property (retain, nonatomic) PKImage *displacementMaterialPropertyImage; // ivar: _displacementMaterialPropertyImage
@property (retain, nonatomic) PKImage *emissionMaterialPropertyImage; // ivar: _emissionMaterialPropertyImage
@property (retain, nonatomic) PKImage *metalnessMaterialPropertyImage; // ivar: _metalnessMaterialPropertyImage
@property (retain, nonatomic) PKImage *multiplyMaterialPropertyImage; // ivar: _multiplyMaterialPropertyImage
@property (retain, nonatomic) PKImage *normalMaterialPropertyImage; // ivar: _normalMaterialPropertyImage
@property (retain, nonatomic) PKImage *overlayMaterialPropertyImage; // ivar: _overlayMaterialPropertyImage
@property (retain, nonatomic) PKImage *reflectiveMaterialPropertyImage; // ivar: _reflectiveMaterialPropertyImage
@property (retain, nonatomic) PKImage *roughnessMaterialPropertyImage; // ivar: _roughnessMaterialPropertyImage
@property (retain, nonatomic) PKImage *selfIlluminationMaterialPropertyImage; // ivar: _selfIlluminationMaterialPropertyImage
@property (retain, nonatomic) PKImage *specularMaterialPropertyImage; // ivar: _specularMaterialPropertyImage
@property (retain, nonatomic) PKImage *transparentMaterialPropertyImage; // ivar: _transparentMaterialPropertyImage


+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(NSInteger)imageSetType;
+(id)archiveName;
+(unsigned int)currentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif