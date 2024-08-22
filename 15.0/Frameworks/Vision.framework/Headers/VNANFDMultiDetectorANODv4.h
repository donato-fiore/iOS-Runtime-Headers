// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNANFDMULTIDETECTORANODV4_H
#define VNANFDMULTIDETECTORANODV4_H



#import "VNANFDMultiDetectorANODv3.h"

@interface VNANFDMultiDetectorANODv4 : VNANFDMultiDetectorANODv3



+(Class)detectorClass;
+(id)detectedObjectClassToRequestKey;
+(id)detectedObjectRequestKeyToRequestInfo;
+(id)knownAnimalHeadIdentifiers;
+(id)knownSportBallIdentifiers;
+(id)recognizedAnimalHeadObjectClassToAnimalHeadCategoryName;
+(id)recognizedSportBallObjectClassToSportBallCategoryName;
-(BOOL)processDetectedObject:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 imageBuffer:(id)arg3 warningRecorder:(id)arg4 detectedObjectResults:(id)arg5 error:(*id)arg6 ;
-(BOOL)updateRuntimeParametersFromOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif