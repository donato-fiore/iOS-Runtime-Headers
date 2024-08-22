// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCOMPUTEPASSDESCRIPTOR_H
#define MTLCOMPUTEPASSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLComputePassSampleBufferAttachmentDescriptorArray.h"

@interface MTLComputePassDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger dispatchType;
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)computePassDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif