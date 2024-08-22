// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNANIMALPRINTDETECTORBASE_H
#define VNANIMALPRINTDETECTORBASE_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNAnimalprintDetectorBase : VNEspressoModelFileBasedDetector {
    shared_ptr<vision::mod::PetprintGenerator> _petprintGenerator;
}




+(*void)modelVersionForOptions:(id)arg0 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif