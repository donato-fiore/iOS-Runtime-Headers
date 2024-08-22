// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNRFPROCESSORREQUEST_H
#define BWNRFPROCESSORREQUEST_H

@class NRFUBFusionOutput, NRFDeepFusionOutput;
@protocol BWNRFProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWNRFProcessorInput.h"

@interface BWNRFProcessorRequest : NSObject {
    BWNRFProcessorInput *_input;
    NRFUBFusionOutput *_output;
    NRFDeepFusionOutput *_deepFusionOutput;
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    BOOL _processToneMapping;
    BOOL _processInferenceInputImage;
    int _clientBracketSequenceNumber;
    BOOL _processSemanticRendering;
    BOOL _provideInferenceInputImageForProcessing;
    BOOL _inferencesAvailable;
    id<BWNRFProcessorControllerDelegate> *_delegate;
}


@property (readonly, nonatomic) NRFDeepFusionOutput *deepFusionOutput;
@property (nonatomic) BOOL deliveredAdaptiveBracketingErrorRecoveryFrame; // ivar: _deliveredAdaptiveBracketingErrorRecoveryFrame
@property (nonatomic) BOOL deliveredDeferredProxyImage; // ivar: _deliveredDeferredProxyImage
@property (nonatomic) int demosaicedRawErr; // ivar: _demosaicedRawErr
@property (nonatomic) int err; // ivar: _err
@property (nonatomic) BOOL gainMapEnabled; // ivar: _gainMapEnabled
@property (readonly, nonatomic) BOOL inferencesAvailable;
@property (readonly, nonatomic) BWNRFProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _maxExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _minExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing; // ivar: _numberOfFramesAddedForMultiFrameProcessing
@property (readonly, nonatomic) NRFUBFusionOutput *output;
@property (readonly, nonatomic) BOOL processSemanticRendering;
@property (readonly, nonatomic) BOOL provideInferenceInputImageForProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _totalExposureTimesOfFramesAddedForMultiFrameProcessing


-(id)description;
-(void)dealloc;


@end


#endif