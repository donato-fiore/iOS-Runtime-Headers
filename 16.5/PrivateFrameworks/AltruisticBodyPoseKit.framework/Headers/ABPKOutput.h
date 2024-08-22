// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKOUTPUT_H
#define ABPKOUTPUT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABPKAlgorithmState.h"
#import "ABPKAlgorithmParams.h"
#import "ABPK2dSkeleton.h"
#import "ABPKSkeleton.h"

@interface ABPKOutput : NSObject {
    *OpaqueVTPixelTransferSession _vtPixelTransferSession;
    *__CVBuffer _sensorImageBGRA;
    NSMutableArray *_rawDetection2dSkeletonABPKArray;
    ? _rawLiftingNetworkOutputJoints;
}


@property (retain) ABPKAlgorithmState *algState; // ivar: _algState
@property (retain) ABPKAlgorithmParams *algorithmParams; // ivar: _algorithmParams
@property int algorithmReturnCode; // ivar: _algorithmReturnCode
@property (retain) ABPK2dSkeleton *detection2dSkeletonABPK; // ivar: _detection2dSkeletonABPK
@property (retain) ABPKSkeleton *liftingSkeletonABPK; // ivar: _liftingSkeletonABPK
@property *__CVBuffer mlImage; // ivar: _mlImage
@property *__CVBuffer mlOverlayImage; // ivar: _mlOverlayImage
@property (retain) ABPK2dSkeleton *rawDetection2dSkeletonABPK; // ivar: _rawDetection2dSkeletonABPK
@property ? rawLiftingNetworkOutputJoints;
@property (retain) ABPK2dSkeleton *registered2dSkeletonABPK; // ivar: _registered2dSkeletonABPK
@property (retain) ABPKSkeleton *retargetedSkeletonABPK; // ivar: _retargetedSkeletonABPK
@property float timeABPKAlgorithmFinished; // ivar: _timeABPKAlgorithmFinished
@property float timeABPKAlgorithmStart; // ivar: _timeABPKAlgorithmStart
@property CGFloat timestamp; // ivar: _timestamp


-(int)overlayResultsOnImage:(struct __CVBuffer *)arg0 withCameraIntrinsics:(struct ? )arg1 ;
-(int)overlayResultsOnImage:(struct __CVBuffer *)arg0 withCameraIntrinsics:(struct ? )arg1 withConfig:(id)arg2 ;
-(int)saveDataToDir:(id)arg0 withFileNamePrefix:(id)arg1 ;
-(int)saveOnlyPoseDataToDir:(id)arg0 withFileNamePrefix:(id)arg1 ;


@end


#endif