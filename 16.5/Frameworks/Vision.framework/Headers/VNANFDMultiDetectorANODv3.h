// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNANFDMULTIDETECTORANODV3_H
#define VNANFDMULTIDETECTORANODV3_H



#import "VNANFDMultiDetector.h"

@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector



+(BOOL)shouldAlignFacesForRequestWithSpecifier:(id)arg0 ;
+(Class)detectorClass;
+(id)detectedObjectClassToRequestKey;
+(id)detectedObjectRequestKeyToRequestInfo;
+(id)knownFoodAndDrinkIdentifiers;
+(id)recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;
-(BOOL)processDetectedObject:(id)arg0 originatingRequestSpecifier:(id)arg1 objectBoundingBox:(struct CGRect )arg2 imageBuffer:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(*id)arg7 ;
-(BOOL)updateRuntimeParametersFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)splitDetectedClassResultsIntoSubclasses:(id)arg0 ;


@end


#endif