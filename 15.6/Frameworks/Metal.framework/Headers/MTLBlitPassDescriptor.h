// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBLITPASSDESCRIPTOR_H
#define MTLBLITPASSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLBlitPassSampleBufferAttachmentDescriptorArray.h"

@interface MTLBlitPassDescriptor : NSObject <NSCopying>



@property (readonly) MTLBlitPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)blitPassDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif