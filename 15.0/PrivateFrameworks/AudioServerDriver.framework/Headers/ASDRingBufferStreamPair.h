// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDRINGBUFFERSTREAMPAIR_H
#define ASDRINGBUFFERSTREAMPAIR_H

@protocol ASDManagedRingBuffer;

#import <Foundation/Foundation.h>

#import "ASDStream.h"

@interface ASDRingBufferStreamPair : NSObject

@property (readonly, nonatomic) ASDStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) ASDStream *outputStream; // ivar: _outputStream
@property (readonly, nonatomic) NSObject<ASDManagedRingBuffer> *ringBuffer; // ivar: _ringBuffer
@property (nonatomic) NSInteger ringBufferFrameCapacity; // ivar: _ringBufferFrameCapacity


-(id)initWithRingBufferFrameCapacity:(NSInteger)arg0 withPlugin:(id)arg1 ;


@end


#endif