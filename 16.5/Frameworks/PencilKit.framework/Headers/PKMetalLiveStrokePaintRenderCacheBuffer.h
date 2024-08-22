// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALLIVESTROKEPAINTRENDERCACHEBUFFER_H
#define PKMETALLIVESTROKEPAINTRENDERCACHEBUFFER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject {
    id<MTLBuffer> *_strokePointBuffer;
    NSUInteger _strokePointBufferOffset;
    id<MTLBuffer> *_liveStrokePointBuffer;
    NSUInteger _liveStrokePointBufferOffset;
    NSUInteger _numVertices;
    NSUInteger _numPoints;
}




-(id)init;


@end


#endif