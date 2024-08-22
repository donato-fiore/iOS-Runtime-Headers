// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNHUMANHANDPOSEDETECTOR_H
#define VNHUMANHANDPOSEDETECTOR_H



#import "VNHumanPoseDetector.h"

@interface VNHumanHandPoseDetector : VNHumanPoseDetector



+(Class)recognizedPointsObservationClass;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg0 error:(*id)arg1 ;
-(id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif