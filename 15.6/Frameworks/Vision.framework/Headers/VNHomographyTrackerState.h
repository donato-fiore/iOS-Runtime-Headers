// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHOMOGRAPHYTRACKERSTATE_H
#define VNHOMOGRAPHYTRACKERSTATE_H

@protocol ICFlowControl, ICResultDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VNHomographyTrackerState : NSObject <ICFlowControl, ICResultDelegate>

 {
    *void _analysisSession;
    NSObject<OS_dispatch_semaphore> *_analysisSemaphore;
    NSInteger _analysisPreRollFramesRemaining;
    os_unfair_lock_s _resultsLock;
    vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> _transformsAndConfidences;
}




-(BOOL)ICShouldBeCanceled;
-(id)init;
-(void)ICReportFrameAnalysis:(id)arg0 forPresentationTime:(struct ? )arg1 withStats:(id)arg2 ;
-(void)dealloc;


@end


#endif