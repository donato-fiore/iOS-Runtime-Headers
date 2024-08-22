// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AR2DSKELETONDETECTIONTECHNIQUE_H
#define AR2DSKELETONDETECTIONTECHNIQUE_H

@class ABPK2DDetection, NSString;
@protocol ARTechniqueBusyState;


#import "ARMLImageProcessingTechnique.h"

@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState>

 {
    ABPK2DDetection *_algorithm;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) Class superclass;


+(struct CGSize )inputDimensionsForMLModel;
-(CGFloat)requiredTimeInterval;
-(id)init;
-(id)processImageDataThroughNeuralNetwork:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
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


@end


#endif