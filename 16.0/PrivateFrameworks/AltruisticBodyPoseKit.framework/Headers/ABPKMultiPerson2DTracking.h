// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKMULTIPERSON2DTRACKING_H
#define ABPKMULTIPERSON2DTRACKING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"
#import "ABPK2DPoseEstimation.h"

@interface ABPKMultiPerson2DTracking : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DPoseEstimation *_poseEstimation2D;
    NSMutableArray *_previousMultiPerson2DResult;
    NSUInteger _lastTrackingId;
}




-(BOOL)overlayResult:(id)arg0 OnImage:(struct __CVBuffer *)arg1 andGenerateOverlayImage:(struct __CVBuffer *)arg2 ;
-(id)init;
-(int)runPoseEstimationWithInput:(struct __CVBuffer *)arg0 abpkDeviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runPoseEstimationWithInput:(struct __CVBuffer *)arg0 deviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runWithInput:(struct __CVBuffer *)arg0 abpkDeviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(int)runWithInput:(struct __CVBuffer *)arg0 deviceOrientation:(NSInteger)arg1 atTimeStamp:(CGFloat)arg2 andOutput:(id)arg3 ;
-(void)_endInitABPKSignpost;
-(void)_endMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startInitABPKSignpost;
-(void)_startMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(CGFloat)arg0 ;


@end


#endif