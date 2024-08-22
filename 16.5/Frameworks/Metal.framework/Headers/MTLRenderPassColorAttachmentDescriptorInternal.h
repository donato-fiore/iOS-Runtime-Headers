// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPASSCOLORATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRENDERPASSCOLORATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLRenderPassColorAttachmentDescriptor.h"

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {
    MTLRenderPassAttachmentDescriptorPrivate _private;
}




+(id)attachmentDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)yInvert;
-(NSUInteger)depthPlane;
-(NSUInteger)hash;
-(NSUInteger)level;
-(NSUInteger)loadAction;
-(NSUInteger)resolveDepthPlane;
-(NSUInteger)resolveLevel;
-(NSUInteger)resolveSlice;
-(NSUInteger)slice;
-(NSUInteger)storeAction;
-(NSUInteger)storeActionOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)resolveTexture;
-(id)texture;
-(struct ? )clearColor;
-(struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setClearColor:(struct ? )arg0 ;
-(void)setDepthPlane:(NSUInteger)arg0 ;
-(void)setLevel:(NSUInteger)arg0 ;
-(void)setLoadAction:(NSUInteger)arg0 ;
-(void)setResolveDepthPlane:(NSUInteger)arg0 ;
-(void)setResolveLevel:(NSUInteger)arg0 ;
-(void)setResolveSlice:(NSUInteger)arg0 ;
-(void)setResolveTexture:(id)arg0 ;
-(void)setSlice:(NSUInteger)arg0 ;
-(void)setStoreAction:(NSUInteger)arg0 ;
-(void)setStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTexture:(id)arg0 ;
-(void)setYInvert:(BOOL)arg0 ;


@end


#endif