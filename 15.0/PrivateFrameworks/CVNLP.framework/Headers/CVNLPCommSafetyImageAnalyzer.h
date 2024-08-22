// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPCOMMSAFETYIMAGEANALYZER_H
#define CVNLPCOMMSAFETYIMAGEANALYZER_H

@class NSDictionary, NSURL, NSNumber;


#import "CVNLPModelBase.h"

@interface CVNLPCommSafetyImageAnalyzer : CVNLPModelBase {
    NSUInteger data_dim;
    *void encoderPlan;
    *void encoderCtx;
    ? encoderNet;
    ? leafProbabilities;
}


@property (readonly) NSDictionary *acceptedOutputIndices; // ivar: _acceptedOutputIndices
@property (readonly) NSURL *modelUrl; // ivar: _modelUrl
@property (readonly) NSUInteger otgxMainIndex; // ivar: _otgxMainIndex
@property (readonly) NSNumber *otgxMainThreshold; // ivar: _otgxMainThreshold


-(id)_computeOutputForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)_decodeName:(id)arg0 ;
-(id)_encodeName:(id)arg0 ;
-(id)_processNetworkOutput:(id)arg0 ;
-(id)_readOperatingThresholdsData;
-(id)_shiftLetterCharsInString:(id)arg0 byOffset:(int)arg1 ;
-(id)classifyImage:(struct CGImage *)arg0 ;
-(id)classifyPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)computeOutputForImage:(struct vImage_Buffer *)arg0 ;
-(id)generateClassificationScoresForImage:(struct CGImage *)arg0 ;
-(id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)getOperatingPointDataForClassName:(id)arg0 ;
-(id)initWithModelURL:(id)arg0 options:(id)arg1 ;
-(void)_extractThresholdForOTGXMain:(id)arg0 ;
-(void)dealloc;


@end


#endif