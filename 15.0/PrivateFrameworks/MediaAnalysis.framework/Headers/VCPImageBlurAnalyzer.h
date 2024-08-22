// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGEBLURANALYZER_H
#define VCPIMAGEBLURANALYZER_H

@class NSArray;


#import "VCPBlurAnalyzer.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"
#import "VCPCNNBlurAnalyzer.h"

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {
    float _sharpnessBlocks;
    NSArray *_faces;
    NSArray *_framePTSResults;
    NSArray *_homographyResults;
    VCPCNNModel *_faceModel;
    VCPCNNData *_faceInput;
    float _livePhotoStillDisplayTime;
    float _imageExposureTime;
    BOOL _useGPU;
    BOOL _sdof;
    float _contrast;
    VCPCNNBlurAnalyzer *_blurAnalyzer;
}


@property (readonly) float sharpness; // ivar: _sharpness
@property (readonly) float textureScore; // ivar: _textureScore


-(float)estimateDistance:(id)arg0 prevHomography:(id)arg1 ;
-(float)getFaceScoreFromOutput:(id)arg0 ratio:(float)arg1 ;
-(id)initWithFaceResults:(id)arg0 sdof:(BOOL)arg1 ;
-(id)initWithFaceResults:(id)arg0 sdof:(BOOL)arg1 revision:(NSUInteger)arg2 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 withPreAnalysisScore:(float)arg2 results:(*id)arg3 cancel:(id)arg4 ;
-(int)computeCNNFaceSharpness:(struct __CVBuffer *)arg0 result:(*float)arg1 cancel:(id)arg2 ;
-(int)computeGyroSharpness:(*float)arg0 ;
-(int)computeLocalSharpness:(struct __CVBuffer *)arg0 ;
-(int)computeSharpnessScore:(*float)arg0 forFacesInImage:(struct __CVBuffer *)arg1 ;
-(int)prepareFaceBlurModel:(BOOL)arg0 ;
-(int)scaleRegion:(struct CGRect *)arg0 ofImage:(struct __CVBuffer *)arg1 toData:(id)arg2 withWidth:(int)arg3 andHeight:(int)arg4 ;
-(void)setFaceResults:(id)arg0 ;
-(void)setGyroSharpnessParam:(id)arg0 homographyResults:(id)arg1 livePhotoStillDisplayTime:(float)arg2 imageExposureTime:(float)arg3 ;
-(void)spatialPooling;


@end


#endif