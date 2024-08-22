// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHUMANPOSEDETECTOR_H
#define VNHUMANPOSEDETECTOR_H

@class VCPRequest;


#import "VNDetector.h"

@interface VNHumanPoseDetector : VNDetector {
    VCPRequest *_humanPoseDetector;
}




+(Class)recognizedPointsObservationClass;
+(id)configurationOptionKeysForDetectorKey;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg0 error:(*id)arg1 ;
-(id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif