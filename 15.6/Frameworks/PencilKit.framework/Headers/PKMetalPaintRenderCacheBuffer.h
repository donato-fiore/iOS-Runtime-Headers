// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALPAINTRENDERCACHEBUFFER_H
#define PKMETALPAINTRENDERCACHEBUFFER_H


#import <Foundation/Foundation.h>

#import "PKMetalBuffer.h"

@interface PKMetalPaintRenderCacheBuffer : NSObject {
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
    NSUInteger _uniformsBufferOffset;
    NSUInteger _strokePointBufferOffset;
    NSUInteger _numVertices;
    NSUInteger _numPoints;
}




-(id)init;


@end


#endif