// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCEFFECTS_H
#define VCEFFECTS_H


#import <Foundation/Foundation.h>

#import "VCVideoFrameBufferPool.h"

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool *_bufferPool;
}


@property (nonatomic) BOOL effectsApplied; // ivar: _effectsApplied
@property (nonatomic) int effectsMode; // ivar: _effectsMode
@property (nonatomic) BOOL faceMeshTrackingEnabled; // ivar: _faceMeshTrackingEnabled


-(BOOL)addFrame:(struct __CVBuffer *)arg0 time:(NSInteger)arg1 ;
-(BOOL)releaseFrameWithTime:(NSInteger)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif