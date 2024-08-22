// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRESOURCESTATEPASSDESCRIPTOR_H
#define MTLRESOURCESTATEPASSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLResourceStatePassSampleBufferAttachmentDescriptorArray.h"

@interface MTLResourceStatePassDescriptor : NSObject <NSCopying>



@property (readonly) MTLResourceStatePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)resourceStatePassDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif