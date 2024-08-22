// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACEEXPRESSIONDETECTOR_H
#define VNFACEEXPRESSIONDETECTOR_H



#import "VNDetector.h"

@interface VNFaceExpressionDetector : VNDetector {
    shared_ptr<vision::mod::LandmarkAttributes> m_FaceAttributesImpl;
    BOOL _modelFilesWereMemmapped;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)createExpressionAndConfidencesDictionaryFromScores:(id)arg0 ;
+(id)createExpressionDetectionDictionaryFromScores:(id)arg0 ;
+(int)expressionTypeFromString:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif