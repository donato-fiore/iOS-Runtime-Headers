// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRENDERPASSSTENCILATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRENDERPASSSTENCILATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLRenderPassStencilAttachmentDescriptor.h"

@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor {
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
-(NSUInteger)stencilResolveFilter;
-(NSUInteger)storeAction;
-(NSUInteger)storeActionOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)resolveTexture;
-(id)texture;
-(struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
-(unsigned int)clearStencil;
-(void)dealloc;
-(void)setClearStencil:(unsigned int)arg0 ;
-(void)setDepthPlane:(NSUInteger)arg0 ;
-(void)setLevel:(NSUInteger)arg0 ;
-(void)setLoadAction:(NSUInteger)arg0 ;
-(void)setResolveDepthPlane:(NSUInteger)arg0 ;
-(void)setResolveLevel:(NSUInteger)arg0 ;
-(void)setResolveSlice:(NSUInteger)arg0 ;
-(void)setResolveTexture:(id)arg0 ;
-(void)setSlice:(NSUInteger)arg0 ;
-(void)setStencilResolveFilter:(NSUInteger)arg0 ;
-(void)setStoreAction:(NSUInteger)arg0 ;
-(void)setStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTexture:(id)arg0 ;
-(void)setYInvert:(BOOL)arg0 ;


@end


#endif