// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARDEPTHESTIMATIONTECHNIQUE_H
#define ARDEPTHESTIMATIONTECHNIQUE_H

@class NSString;
@protocol ARTechniqueBusyState, ARMLDepthDataSourceProvider;


#import "ARMLImageProcessingTechnique.h"
#import "ARImageRotationTechnique.h"
#import "ARImageCroppingTechnique.h"

@interface ARDepthEstimationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState, ARMLDepthDataSourceProvider>

 {
    *__CVPixelBufferPool _outputPixelBufferPool;
    *__CVPixelBufferPool _scaledOutputPixelBufferPool;
    *__CVPixelBufferPool _alphaChannelPixelBufferPool;
    ARImageRotationTechnique *_rotationTechnique;
    ARImageCroppingTechnique *_imageCroppingTechnique;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger depthDataSource;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) Class superclass;


-(CGFloat)requiredTimeInterval;
-(NSInteger)numberOfInputChannelsToExpectInNetwork;
-(id)_fullDescription;
-(id)createResultDataFromTensors:(struct ? *)arg0 numberOfOutputTensors:(NSUInteger)arg1 imageDataForNeuralNetwork:(id)arg2 inputImageData:(id)arg3 rotationNeeded:(NSInteger)arg4 regionOfInterest:(struct CGSize )arg5 ;
-(id)init;
-(id)resultDataClasses;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)dealloc;
-(void)networkModeDidChange:(id)arg0 toMode:(id)arg1 ;


@end


#endif