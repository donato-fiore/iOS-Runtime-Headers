// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLPIPELINEBUFFERDESCRIPTORINTERNAL_H
#define MTLPIPELINEBUFFERDESCRIPTORINTERNAL_H



#import "MTLPipelineBufferDescriptor.h"

@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    MTLPipelineBufferDescriptorPrivate _private;
}




-(BOOL)isDefault;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)mutability;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setMutability:(NSUInteger)arg0 ;


@end


#endif