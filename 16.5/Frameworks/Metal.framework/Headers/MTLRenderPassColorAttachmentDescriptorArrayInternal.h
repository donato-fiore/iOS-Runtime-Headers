// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPASSCOLORATTACHMENTDESCRIPTORARRAYINTERNAL_H
#define MTLRENDERPASSCOLORATTACHMENTDESCRIPTORARRAYINTERNAL_H



#import "MTLRenderPassColorAttachmentDescriptorArray.h"
#import "MTLRenderPassDepthAttachmentDescriptorInternal.h"
#import "MTLRenderPassStencilAttachmentDescriptorInternal.h"

@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {
    MTLRenderPassColorAttachmentDescriptorInternal" _color_descriptors;
    MTLRenderPassDepthAttachmentDescriptorInternal *_depth_descriptor;
    MTLRenderPassStencilAttachmentDescriptorInternal *_stencil_descriptor;
}




-(id)_descriptorAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;


@end


#endif