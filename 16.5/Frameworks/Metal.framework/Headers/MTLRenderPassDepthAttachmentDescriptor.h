// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPASSDEPTHATTACHMENTDESCRIPTOR_H
#define MTLRENDERPASSDEPTHATTACHMENTDESCRIPTOR_H



#import "MTLRenderPassAttachmentDescriptor.h"

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) CGFloat clearDepth;
@property (nonatomic) NSUInteger depthResolveFilter;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif