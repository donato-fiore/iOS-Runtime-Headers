// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLBLITPASSDESCRIPTORINTERNAL_H
#define MTLBLITPASSDESCRIPTORINTERNAL_H



#import "MTLBlitPassDescriptor.h"

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    MTLBlitPassDescriptorPrivate _private;
}




+(id)blitPassDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sampleBufferAttachments;
-(struct MTLBlitPassDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;


@end


#endif