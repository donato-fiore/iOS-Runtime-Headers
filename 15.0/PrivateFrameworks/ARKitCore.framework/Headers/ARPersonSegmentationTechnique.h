// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPERSONSEGMENTATIONTECHNIQUE_H
#define ARPERSONSEGMENTATIONTECHNIQUE_H

@class SIPeopleSegmentationAlgorithm;


#import "ARMLImageProcessingTechnique.h"
#import "ARImageRotationTechnique.h"

@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique {
    *__CVPixelBufferPool _outputSegmentationPixelBufferPool;
    *__CVPixelBufferPool _scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    SIPeopleSegmentationAlgorithm *_algorithm;
    *__CVBuffer _previousSegmentationData;
    int frameCount;
}




-(BOOL)isLoadedModelVersionCorrect:(id)arg0 ;
-(BOOL)preProcessNetworkInputImage:(struct __CVBuffer *)arg0 ;
-(CGFloat)requiredTimeInterval;
-(id)init;
-(id)resultDataClasses;
-(id)runNeuralNetworkWithImageData:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(void)_prepareOnce:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif