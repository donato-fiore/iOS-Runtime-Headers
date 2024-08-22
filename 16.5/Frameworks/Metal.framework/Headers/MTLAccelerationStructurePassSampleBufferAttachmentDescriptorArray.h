// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLACCELERATIONSTRUCTUREPASSSAMPLEBUFFERATTACHMENTDESCRIPTORARRAY_H
#define MTLACCELERATIONSTRUCTUREPASSSAMPLEBUFFERATTACHMENTDESCRIPTORARRAY_H


#import <Foundation/Foundation.h>


@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray : NSObject {
    MTLAccelerationStructurePassSampleBufferAttachmentDescriptor" _sampleDescriptors;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptorAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)copyFrom:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;


@end


#endif