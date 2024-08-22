// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTKTEXTUREIOBUFFERALLOCATOR_H
#define MTKTEXTUREIOBUFFERALLOCATOR_H

@class NSString;
@protocol TXRBufferAllocator, MTLDevice;

#import <Foundation/Foundation.h>


@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator>

 {
    id<MTLDevice> *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
// -(id)newBufferWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 deallocNotification:(id)arg2 error:(unk)arg3  ;
-(id)newBufferWithLength:(NSUInteger)arg0 ;


@end


#endif