// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AR2DSKELETONDETECTIONPOSTPROCESSINGTECHNIQUE_H
#define AR2DSKELETONDETECTIONPOSTPROCESSINGTECHNIQUE_H

@class ABPK2DDetectionPostprocess, ABPK2DDetectionResult;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "ARImageBasedTechnique.h"

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {
    CGFloat _extrapolationTime;
    NSObject<OS_dispatch_semaphore> *_previous3DSkeletonSemaphore;
    BOOL _shouldPush3DSupportSkeleton;
    BOOL _use3DSupportSkeletonForExtrapolation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
    ABPK2DDetectionPostprocess *_postprocess2d;
}


@property (readonly, nonatomic) ABPK2DDetectionResult *abpkPrevious3DSkeleton; // ivar: _abpkPrevious3DSkeleton


-(CGFloat)requiredTimeInterval;
-(id)processData:(id)arg0 ;
-(void)_process2DSkeletonRawEspressoResultInBackground:(id)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif