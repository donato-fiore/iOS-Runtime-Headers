// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPASSSTENCILATTACHMENTDESCRIPTOR_H
#define MTLRENDERPASSSTENCILATTACHMENTDESCRIPTOR_H



#import "MTLRenderPassAttachmentDescriptor.h"

@interface MTLRenderPassStencilAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) NSUInteger stencilResolveFilter;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif