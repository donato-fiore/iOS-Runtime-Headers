// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTORSOPRINTGENERATORHUMANDETECTORBASED_H
#define VNTORSOPRINTGENERATORHUMANDETECTORBASED_H



#import "VNTorsoprintGeneratorBase.h"

@interface VNTorsoprintGeneratorHumanDetectorBased : VNTorsoprintGeneratorBase {
    shared_ptr<vision::mod::TorsoprintGenerator> _torsoprintGenerator;
}




+(*void)modelVersionForOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)torsoprintForImageBuffer:(struct __CVBuffer *)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif