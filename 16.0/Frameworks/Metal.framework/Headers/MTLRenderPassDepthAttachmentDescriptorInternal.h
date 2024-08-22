// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRENDERPASSDEPTHATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRENDERPASSDEPTHATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLRenderPassDepthAttachmentDescriptor.h"

@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor {
    MTLRenderPassAttachmentDescriptorPrivate _private;
}




+(id)attachmentDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)yInvert;
-(CGFloat)clearDepth;
-(NSUInteger)depthPlane;
-(NSUInteger)depthResolveFilter;
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
-(struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setClearDepth:(CGFloat)arg0 ;
-(void)setDepthPlane:(NSUInteger)arg0 ;
-(void)setDepthResolveFilter:(NSUInteger)arg0 ;
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