// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AR2DSKELETONDETECTIONPOSTPROCESSINGTECHNIQUE_H
#define AR2DSKELETONDETECTIONPOSTPROCESSINGTECHNIQUE_H

@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "AR2DSkeletonDetectionPostProcessGPU.h"
#import "AR2DSkeletonDetectionResult.h"
#import "AR2DSkeletonRawEspressoResult.h"

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {
    AR2DSkeletonDetectionPostProcessGPU *_preH13PostProcessorGPU;
    SkeletonJointFilter<float> _extrapolationFilter2D;
    CGFloat _extrapolationTime;
    SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
    AR2DSkeletonDetectionResult *_previous3DSkeleton;
    NSObject<OS_dispatch_semaphore> *_previous3DSkeletonSemaphore;
    BOOL _shouldPush3DSupportSkeleton;
    BOOL _use3DSupportSkeletonForExtrapolation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
}


@property (retain, nonatomic) AR2DSkeletonRawEspressoResult *previousRawEspressoResult; // ivar: _previousRawEspressoResult


-(CGFloat)requiredTimeInterval;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif