// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGESIGNATUREDETECTOR_H
#define VNIMAGESIGNATUREDETECTOR_H



#import "VNDetector.h"

@interface VNImageSignatureDetector : VNDetector {
    unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> _hyperplaneLSHProcessor;
}


@property (readonly, nonatomic) NSUInteger imageSignatureHashType; // ivar: _imageSignatureHashType
@property (readonly, nonatomic) NSUInteger imageSignatureprintType; // ivar: _imageSignatureprintType


+(id)configurationOptionKeysForDetectorKey;
-(?)_calculateImageSignatureHashDescriptorFrom:(?)arg0 optionserror;
-(?)_calculateImageSignatureprintDescriptorFromOptionserror;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;


@end


#endif