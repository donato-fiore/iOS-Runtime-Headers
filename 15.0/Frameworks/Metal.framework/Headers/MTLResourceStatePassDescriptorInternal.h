// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRESOURCESTATEPASSDESCRIPTORINTERNAL_H
#define MTLRESOURCESTATEPASSDESCRIPTORINTERNAL_H



#import "MTLResourceStatePassDescriptor.h"

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    MTLResourceStatePassDescriptorPrivate _private;
}




+(id)resourceStatePassDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBufferAttachments;
-(struct MTLResourceStatePassDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;


@end


#endif