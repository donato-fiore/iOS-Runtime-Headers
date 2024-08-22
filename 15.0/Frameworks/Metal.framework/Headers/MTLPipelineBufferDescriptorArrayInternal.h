// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLPIPELINEBUFFERDESCRIPTORARRAYINTERNAL_H
#define MTLPIPELINEBUFFERDESCRIPTORARRAYINTERNAL_H



#import "MTLPipelineBufferDescriptorArray.h"

@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray {
    MTLPipelineBufferDescriptorInternal" _descriptors;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptorAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;


@end


#endif