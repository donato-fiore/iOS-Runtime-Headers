// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKALGORITHMRA_H
#define ABPKALGORITHMRA_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ABPKAlgorithm.h"
#import "ABPKCameraParams.h"
#import "ABPKAlgorithmParams.h"
#import "ABPKCropParams.h"
#import "ABPKPaddingParams.h"
#import "ABPKImagePreProcessing.h"
#import "ABPKImagePreProcessingParams.h"
#import "ABPKAlgInput.h"
#import "ABPKAlgOutput.h"

@interface ABPKAlgorithmRA : NSObject {
    ABPKAlgorithm *_abpkAlgorithm;
    NSInteger _exitPoint;
    CGSize _inputResolution;
    ABPKCameraParams *_abpkCameraParams;
    ABPKAlgorithmParams *_algParams;
    NSString *_imagePreProcessingType;
    ABPKCropParams *_cropParameters;
    ABPKPaddingParams *_paddingParameters;
    CGSize _mlResolution;
    ABPKImagePreProcessing *_imagePreprocessor;
    ABPKImagePreProcessingParams *_imagePreProcessingParams;
    CGSize _regImageDimensions;
    ? _regIntrinsics;
    *__CVBuffer _mlImage;
    NSString *_saveDirectory;
    ABPKAlgInput *_algorithmInput;
    ABPKAlgOutput *_algorithmOutput;
}




-(id)initWithCameraParams:(id)arg0 ;
-(id)initWithCameraParams:(id)arg0 andAlgorithmMode:(NSInteger)arg1 ;
-(int)preprocessInputImage:(struct __CVBuffer *)arg0 ;
-(void)_endABPKAlgoInitSignpost;
-(void)_endExecuteAlgorithmSignpost;
-(void)_endImagePreprocessingSignpost;
-(void)_startABPKAlgoInitSignpost;
-(void)_startExecuteAlgorithmSignpost;
-(void)_startImagePreprocessingSignpost;
-(void)computeRootTransforms:(id)arg0 withVioPose:(struct ? )arg1 withVioPoseValidity:(BOOL)arg2 ;
-(void)dealloc;
-(void)runABPKAlgorithmWithInputData:(id)arg0 andGetOutput:(id)arg1 ;
-(void)saveInputData:(id)arg0 andOutputData:(id)arg1 ToDir:(id)arg2 withFileNamePrefix:(id)arg3 ;
-(void)setExitPoint:(NSInteger)arg0 ;


@end


#endif