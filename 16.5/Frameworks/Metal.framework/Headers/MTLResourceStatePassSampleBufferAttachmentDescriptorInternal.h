// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRESOURCESTATEPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H
#define MTLRESOURCESTATEPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLResourceStatePassSampleBufferAttachmentDescriptor.h"

@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor {
    MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)endOfEncoderSampleIndex;
-(NSUInteger)hash;
-(NSUInteger)startOfEncoderSampleIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBuffer;
-(struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setEndOfEncoderSampleIndex:(NSUInteger)arg0 ;
-(void)setSampleBuffer:(id)arg0 ;
-(void)setStartOfEncoderSampleIndex:(NSUInteger)arg0 ;


@end


#endif