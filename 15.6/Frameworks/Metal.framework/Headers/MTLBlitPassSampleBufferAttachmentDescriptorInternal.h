// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBLITPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H
#define MTLBLITPASSSAMPLEBUFFERATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLBlitPassSampleBufferAttachmentDescriptor.h"

@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor {
    MTLBlitPassSampleBufferAttachmentDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)endOfEncoderSampleIndex;
-(NSUInteger)hash;
-(NSUInteger)startOfEncoderSampleIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBuffer;
-(struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setEndOfEncoderSampleIndex:(NSUInteger)arg0 ;
-(void)setSampleBuffer:(id)arg0 ;
-(void)setStartOfEncoderSampleIndex:(NSUInteger)arg0 ;


@end


#endif