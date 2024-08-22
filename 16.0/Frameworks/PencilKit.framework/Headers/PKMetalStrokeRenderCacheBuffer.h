// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMETALSTROKERENDERCACHEBUFFER_H
#define PKMETALSTROKERENDERCACHEBUFFER_H


#import <Foundation/Foundation.h>

#import "PKMetalBuffer.h"

@interface PKMetalStrokeRenderCacheBuffer : NSObject {
    PKMetalBuffer *_buffer;
    NSUInteger _offset;
    NSUInteger _numVertices;
    CGRect _bounds;
}




-(id)init;


@end


#endif