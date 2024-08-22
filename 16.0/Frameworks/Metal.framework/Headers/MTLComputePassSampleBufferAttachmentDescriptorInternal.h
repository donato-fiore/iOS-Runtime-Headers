// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMPUTEPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H
#define MTLCOMPUTEPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {
    MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)endOfEncoderSampleIndex;
-(NSUInteger)hash;
-(NSUInteger)startOfEncoderSampleIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBuffer;
-(struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setEndOfEncoderSampleIndex:(NSUInteger)arg0 ;
-(void)setSampleBuffer:(id)arg0 ;
-(void)setStartOfEncoderSampleIndex:(NSUInteger)arg0 ;


@end


#endif