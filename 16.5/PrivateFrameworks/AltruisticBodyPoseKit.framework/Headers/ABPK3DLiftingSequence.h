// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK3DLIFTINGSEQUENCE_H
#define ABPK3DLIFTINGSEQUENCE_H

@class NSArray, NSMutableDictionary, NSString;
@protocol ABPK3DLiftingAlgorithm;

#import <Foundation/Foundation.h>

#import "ABPK3DLiftingResult.h"
#import "ABPKMLModelConfiguration3DLiftingSequenceFirstStage.h"
#import "ABPKSkeletonDefinition.h"
#import "ABPKMLNetworkV2.h"

@interface ABPK3DLiftingSequence : NSObject <ABPK3DLiftingAlgorithm>

 {
    RingBuffer<std::vector<std::array<float, 3>>, 243UL> _3DLiftingInputBuffer;
    CGFloat _imageWidth;
    CGFloat _imageHeight;
    int _frameCount;
    NSArray *_inputTensorFirstStageNames;
    NSArray *_outputTensorFirstStageNames;
    *void _context_first_stage;
    *void _plan_first_stage;
    ? _network_first_stage;
    ? _inputTensorFirstStage;
    ? _outputTensorFirstStage;
    ABPK3DLiftingResult *_liftingResult;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _liftingResultAsModelPoses;
    vector<float, std::allocator<float>> _gaussianSmoothingFilter;
    RingBuffer<std::vector<float>, 9UL> _smoothingFilterRingBuffer;
    ABPKMLModelConfiguration3DLiftingSequenceFirstStage *_mlConfigFirstStage;
    ABPKSkeletonDefinition *_abpkLiftingSkeletonDefinition;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *_inputBufferDict;
    NSMutableDictionary *_outputBufferDict;
    BOOL _useEspressoV2;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)initMLNetwork;
-(id)getLiftingResults;
-(id)init;
-(int)runLiftingModelWithBuffer:(*void)arg0 with2DReferenceResults:(id)arg1 atTimestamp:(CGFloat)arg2 exportDebuggingData:(BOOL)arg3 ;
-(int)runLiftingModelWithData:(id)arg0 atTimestamp:(CGFloat)arg1 ;
-(int)runLiftingModelWithData:(id)arg0 imageResolution:(struct CGSize )arg1 deviceOrientation:(NSInteger)arg2 atTimestamp:(CGFloat)arg3 ;
-(struct ? *)get3DLiftingResultsAsModelPoses;
-(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )getGaussianSmoothedOutput:(*void)arg0 ;
-(void)_adjustBoneLength:(*void)arg0 ;
-(void)_endLoading3DLiftingSequenceMLModelSignpost;
-(void)_endPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endPrepareLiftingSequenceInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endRunLiftingSequenceModelSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoading3DLiftingSequenceMLModelSignpost;
-(void)_startPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startPrepareLiftingSequenceInputSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startRunLiftingSequenceModelSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)dealloc;
-(void)saveDataToFilePath:(id)arg0 with2DInputBuffer:(*void)arg1 withFirstStageOutput:(*float)arg2 withSmoothedOutputwithPostprocessedLiftingResults;
-(void)updateInputImageResolution:(struct CGSize )arg0 ;


@end


#endif