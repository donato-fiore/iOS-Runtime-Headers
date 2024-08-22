// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUKEYFRAMESOURCENODE_H
#define NUKEYFRAMESOURCENODE_H

@protocol OS_dispatch_queue;


#import "NUVideoFrameSourceNode.h"
#import "NUVideoSourceNode.h"

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
    NUVideoSourceNode *_videoSourceNode;
    ? _frameTime;
    *__CVBuffer _pixelBuffer;
}




-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithSettings:(id)arg0 orientation:(NSInteger)arg1 ;
-(id)initWithVideoSource:(id)arg0 time:(struct ? )arg1 settings:(id)arg2 orientation:(NSInteger)arg3 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;
-(struct __CVBuffer *)_pixelBufferWithAuxiliaryImageType:(NSInteger)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif