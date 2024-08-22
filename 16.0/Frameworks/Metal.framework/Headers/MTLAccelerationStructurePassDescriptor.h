// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLACCELERATIONSTRUCTUREPASSDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREPASSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray.h"

@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying>



@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments; // ivar: _sampleBufferAttachments


+(id)accelerationStructurePassDescriptor;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)convertToComputePassDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif