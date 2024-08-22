// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRENDERPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLRenderPassSampleBufferAttachmentDescriptor.h"

@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {
    MTLRenderPassSampleBufferAttachmentDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)endOfFragmentSampleIndex;
-(NSUInteger)endOfVertexSampleIndex;
-(NSUInteger)hash;
-(NSUInteger)startOfFragmentSampleIndex;
-(NSUInteger)startOfVertexSampleIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBuffer;
-(struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setEndOfFragmentSampleIndex:(NSUInteger)arg0 ;
-(void)setEndOfVertexSampleIndex:(NSUInteger)arg0 ;
-(void)setSampleBuffer:(id)arg0 ;
-(void)setStartOfFragmentSampleIndex:(NSUInteger)arg0 ;
-(void)setStartOfVertexSampleIndex:(NSUInteger)arg0 ;


@end


#endif