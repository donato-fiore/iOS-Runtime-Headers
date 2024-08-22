// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRENDERPIPELINECOLORATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRENDERPIPELINECOLORATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLRenderPipelineColorAttachmentDescriptor.h"

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {
    MTLRenderPipelineAttachmentDescriptorPrivate _private;
}




-(BOOL)isBlendingEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)alphaBlendOperation;
-(NSUInteger)destinationAlphaBlendFactor;
-(NSUInteger)destinationRGBBlendFactor;
-(NSUInteger)hash;
-(NSUInteger)pixelFormat;
-(NSUInteger)rgbBlendOperation;
-(NSUInteger)sourceAlphaBlendFactor;
-(NSUInteger)sourceRGBBlendFactor;
-(NSUInteger)writeMask;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setAlphaBlendOperation:(NSUInteger)arg0 ;
-(void)setBlendingEnabled:(BOOL)arg0 ;
-(void)setDestinationAlphaBlendFactor:(NSUInteger)arg0 ;
-(void)setDestinationRGBBlendFactor:(NSUInteger)arg0 ;
-(void)setPixelFormat:(NSUInteger)arg0 ;
-(void)setRgbBlendOperation:(NSUInteger)arg0 ;
-(void)setSourceAlphaBlendFactor:(NSUInteger)arg0 ;
-(void)setSourceRGBBlendFactor:(NSUInteger)arg0 ;
-(void)setWriteMask:(NSUInteger)arg0 ;


@end


#endif