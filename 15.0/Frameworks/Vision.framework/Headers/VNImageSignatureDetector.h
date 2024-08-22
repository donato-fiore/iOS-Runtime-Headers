// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGESIGNATUREDETECTOR_H
#define VNIMAGESIGNATUREDETECTOR_H



#import "VNDetector.h"

@interface VNImageSignatureDetector : VNDetector {
    unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> _hyperplaneLSHProcessor;
}


@property (readonly, nonatomic) NSUInteger imageSignatureHashType; // ivar: _imageSignatureHashType
@property (readonly, nonatomic) NSUInteger imageSignatureprintType; // ivar: _imageSignatureprintType


+(id)configurationOptionKeysForDetectorKey;
-(?)_calculateImageSignatureHashDescriptorFrom:(?)arg0 optionserror;
-(?)_calculateImageSignatureprintDescriptorFromOptionserror;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif