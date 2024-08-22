// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2DPOSEESTIMATION_H
#define ABPK2DPOSEESTIMATION_H


#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"
#import "ABPK2DDetection.h"
#import "ABPK2DDetectionPostprocess.h"

@interface ABPK2DPoseEstimation : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DDetection *_detection2dAlgorithm;
    ABPK2DDetectionPostprocess *_postprocess2d;
}




-(id)initWith2DDetectionConfig:(id)arg0 use3DSkeletonForExtrapolation:(BOOL)arg1 shouldPush3DSupportSkeleton:(BOOL)arg2 ;
-(int)runWithMLImageData:(id)arg0 rotationOfResultTensor:(NSInteger)arg1 ;
-(void)getRawTrackedHumanForLiftingSkeleton:(id)arg0 ;
-(void)getRawTrackedHumanSkeleton:(id)arg0 ;
-(void)getRawTrackedHumanSkeletonVector:(id)arg0 ;
-(void)getTrackedHumanForLiftingSkeleton:(id)arg0 ;
-(void)getTrackedHumanSkeleton:(id)arg0 ;


@end


#endif