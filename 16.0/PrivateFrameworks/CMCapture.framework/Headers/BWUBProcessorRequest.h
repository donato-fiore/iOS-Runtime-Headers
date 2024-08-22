// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWUBPROCESSORREQUEST_H
#define BWUBPROCESSORREQUEST_H

@class UBFusionOutput, UBDeepFusionOutput;
@protocol BWUBProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWUBProcessorInput.h"

@interface BWUBProcessorRequest : NSObject {
    BWUBProcessorInput *_input;
    UBFusionOutput *_output;
    UBDeepFusionOutput *_deepFusionOutput;
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    BOOL _processSemanticRendering;
    BOOL _provideInferenceInputImageForProcessing;
    BOOL _inferencesAvailable;
    id<BWUBProcessorControllerDelegate> *_delegate;
}


@property (readonly, nonatomic) UBDeepFusionOutput *deepFusionOutput;
@property (nonatomic) BOOL deliveredDeferredProxyImage; // ivar: _deliveredDeferredProxyImage
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BOOL inferencesAvailable;
@property (readonly, nonatomic) BWUBProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _maxExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _minExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing; // ivar: _numberOfFramesAddedForMultiFrameProcessing
@property (readonly, nonatomic) UBFusionOutput *output;
@property (readonly, nonatomic) BOOL provideInferenceInputImageForProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _totalExposureTimesOfFramesAddedForMultiFrameProcessing


-(id)description;
-(void)dealloc;


@end


#endif