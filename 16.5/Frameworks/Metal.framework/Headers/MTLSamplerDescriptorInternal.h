// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLSAMPLERDESCRIPTORINTERNAL_H
#define MTLSAMPLERDESCRIPTORINTERNAL_H



#import "MTLSamplerDescriptor.h"

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {
    MTLSamplerDescriptorPrivate _private;
}


@property (nonatomic) NSUInteger borderColorSPI;
@property (nonatomic) unsigned int customBorderColorValue_0;
@property (nonatomic) unsigned int customBorderColorValue_1;
@property (nonatomic) unsigned int customBorderColorValue_2;
@property (nonatomic) unsigned int customBorderColorValue_3;
@property (nonatomic) BOOL forceSeamsOnCubemapFiltering;


-(BOOL)forceResourceIndex;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)lodAverage;
-(BOOL)normalizedCoordinates;
-(BOOL)supportArgumentBuffers;
-(NSUInteger)borderColor;
-(NSUInteger)compareFunction;
-(NSUInteger)hash;
-(NSUInteger)magFilter;
-(NSUInteger)maxAnisotropy;
-(NSUInteger)minFilter;
-(NSUInteger)mipFilter;
-(NSUInteger)pixelFormat;
-(NSUInteger)rAddressMode;
-(NSUInteger)resourceIndex;
-(NSUInteger)sAddressMode;
-(NSUInteger)tAddressMode;
-(float)lodBias;
-(float)lodMaxClamp;
-(float)lodMinClamp;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)label;
-(struct MTLSamplerDescriptorPrivate *)descriptorPrivate;
-(void)dealloc;
-(void)setBorderColor:(NSUInteger)arg0 ;
-(void)setCompareFunction:(NSUInteger)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLodAverage:(BOOL)arg0 ;
-(void)setLodBias:(float)arg0 ;
-(void)setLodMaxClamp:(float)arg0 ;
-(void)setLodMinClamp:(float)arg0 ;
-(void)setMagFilter:(NSUInteger)arg0 ;
-(void)setMaxAnisotropy:(NSUInteger)arg0 ;
-(void)setMinFilter:(NSUInteger)arg0 ;
-(void)setMipFilter:(NSUInteger)arg0 ;
-(void)setNormalizedCoordinates:(BOOL)arg0 ;
-(void)setPixelFormat:(NSUInteger)arg0 ;
-(void)setRAddressMode:(NSUInteger)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;
-(void)setSAddressMode:(NSUInteger)arg0 ;
-(void)setSupportArgumentBuffers:(BOOL)arg0 ;
-(void)setTAddressMode:(NSUInteger)arg0 ;


@end


#endif