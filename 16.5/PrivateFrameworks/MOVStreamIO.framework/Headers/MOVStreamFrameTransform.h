// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVSTREAMFRAMETRANSFORM_H
#define MOVSTREAMFRAMETRANSFORM_H


#import <Foundation/Foundation.h>

#import "MIOPixelBufferPool.h"

@interface MOVStreamFrameTransform : NSObject {
    MIOPixelBufferPool *_pool;
    *OpaqueVTPixelTransferSession _transferSession;
    *OpaqueVTPixelRotationSession _rotationSession;
    NSInteger _rotation;
}




-(id)initWithRotation:(NSInteger)arg0 flip:(NSInteger)arg1 ;
-(struct __CVBuffer *)transform:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif