// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMPUTEPASSDESCRIPTORINTERNAL_H
#define MTLCOMPUTEPASSDESCRIPTORINTERNAL_H



#import "MTLComputePassDescriptor.h"

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    MTLComputePassDescriptorPrivate _private;
}


@property (nonatomic) BOOL allowCommandEncoderCoalescing;
@property (nonatomic) unsigned int substreamCount;


+(id)computePassDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)dispatchType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBufferAttachments;
-(struct MTLComputePassDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setDispatchType:(NSUInteger)arg0 ;


@end


#endif