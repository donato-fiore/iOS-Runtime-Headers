// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSIPERSONDETECTIONTECHNIQUE_H
#define ARSIPERSONDETECTIONTECHNIQUE_H

@class SIPersonDetectorAlgorithm, NSString;
@protocol ARTechniqueBusyState;


#import "ARMLImageProcessingTechnique.h"
#import "ARPersonDetectionData.h"

@interface ARSIPersonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState>

 {
    CGFloat _lastTimestamp;
    *__CVPixelBufferPool _depthPixelBufferPool;
    CGSize _imageNetworkSize;
    BOOL _mergeLargelyOverlappingBoxes;
    SIPersonDetectorAlgorithm *_algorithm;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (retain) ARPersonDetectionData *latestResult; // ivar: _latestResult
@property (readonly) Class superclass;


-(BOOL)isLoadedModelVersionCorrect:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(id)createResultDataFromAlgorithmOutput:(id)arg0 imageDataForNeuralNetwork:(id)arg1 inputImageData:(id)arg2 rotationNeeded:(NSInteger)arg3 regionOfInterest:(struct CGSize )arg4 ;
-(id)init;
-(id)resultDataClasses;
-(id)runNeuralNetworkWithImageData:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_prepareOnce:(BOOL)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)changeEspressoConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif