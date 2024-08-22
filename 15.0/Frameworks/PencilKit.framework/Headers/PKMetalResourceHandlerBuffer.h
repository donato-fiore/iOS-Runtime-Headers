// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMETALRESOURCEHANDLERBUFFER_H
#define PKMETALRESOURCEHANDLERBUFFER_H

@class NSMutableArray;
@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "PKMetalBuffer.h"

@interface PKMetalResourceHandlerBuffer : NSObject {
    id<MTLDevice> *_device;
    PKMetalBuffer *_buffer;
    NSUInteger _currentOffset;
    NSUInteger _bufferSize;
    NSUInteger _options;
    BOOL _purgeable;
    NSMutableArray *_reusableBuffers;
}






@end


#endif