// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPERSONOCCLUSIONTECHNIQUE_H
#define ARPERSONOCCLUSIONTECHNIQUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "ARTechnique.h"

@interface ARPersonOcclusionTechnique : ARTechnique {
    *__CVPixelBufferPool _bgraPixelBufferPool;
    *__CVPixelBufferPool _depthPixelBufferPool;
    shared_ptr<arkit::RobustExpFilter<float>> _varExpFilter;
    NSInteger _lastDeviceOrientation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    vector<int, std::allocator<int>> _localPixelDepthDict;
    NSUInteger _minFilterIntermediateBufferSize;
    char * _minFilterIntermediatePooledBuffer;
}




+(float)_confidenceForDepthData:(id)arg0 location;
-(?)_minFilterDepthMap:(?)arg0 kernelSizepResultBuffer;
-(?)postProcessSegmentation:(?)arg0 depthData:(?)arg1 depthDataSource:(?)arg2 detectionDatapResultingDepthBuffer;
-(BOOL)isBusy;
-(id)_fullDescription;
-(id)init;
-(void)dealloc;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif