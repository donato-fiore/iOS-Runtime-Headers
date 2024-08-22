// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSFRONTFACEIMAGESET_H
#define PKPASSFRONTFACEIMAGESET_H

@class NSData;


#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassFrontFaceImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *backgroundParallaxCrossDissolveImage; // ivar: _backgroundParallaxCrossDissolveImage
@property (retain, nonatomic) PKImage *backgroundParallaxEmitterImage; // ivar: _backgroundParallaxEmitterImage
@property (retain, nonatomic) PKImage *backgroundParallaxImage; // ivar: _backgroundParallaxImage
@property (nonatomic) CGRect cobrandLogoRect; // ivar: _cobrandLogoRect
@property (retain, nonatomic) PKImage *dynamicLayerStaticFallbackImage; // ivar: _dynamicLayerStaticFallbackImage
@property (retain, nonatomic) PKImage *faceImage; // ivar: _faceImage
@property (retain, nonatomic) PKImage *faceShadowImage; // ivar: _faceShadowImage
@property (retain, nonatomic) PKImage *footerImage; // ivar: _footerImage
@property (retain, nonatomic) PKImage *foregroundParallaxCrossDissolveImage; // ivar: _foregroundParallaxCrossDissolveImage
@property (retain, nonatomic) PKImage *foregroundParallaxEmitterImage; // ivar: _foregroundParallaxEmitterImage
@property (retain, nonatomic) PKImage *foregroundParallaxImage; // ivar: _foregroundParallaxImage
@property (nonatomic) CGRect logoRect; // ivar: _logoRect
@property (retain, nonatomic) PKImage *neutralEmitterImage; // ivar: _neutralEmitterImage
@property (retain, nonatomic) PKImage *neutralImage; // ivar: _neutralImage
@property (retain, nonatomic) PKImage *staticOverlayEmitterImage; // ivar: _staticOverlayEmitterImage
@property (retain, nonatomic) PKImage *staticOverlayImage; // ivar: _staticOverlayImage
@property (nonatomic) CGRect stripRect; // ivar: _stripRect
@property (nonatomic) CGRect thumbnailRect; // ivar: _thumbnailRect
@property (retain, nonatomic) PKImage *transactionEffectEmitterImage; // ivar: _transactionEffectEmitterImage
@property (retain, nonatomic) NSData *transactionEffectEmitterShapeSVGData; // ivar: _transactionEffectEmitterShapeSVGData


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