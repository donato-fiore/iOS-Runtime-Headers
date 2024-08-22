// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    int _clientBracketSequenceNumber;
    id<BWNRFProcessorControllerDelegate> *_delegate;
}


@property (readonly, nonatomic) NRFDeepFusionOutput *deepFusionOutput;
@property (nonatomic) BOOL deliveredAdaptiveBracketingErrorRecoveryFrame; // ivar: _deliveredAdaptiveBracketingErrorRecoveryFrame
@property (nonatomic) BOOL deliveredDeferredProxyImage; // ivar: _deliveredDeferredProxyImage
@property (nonatomic) int demosaicedRawErr; // ivar: _demosaicedRawErr
@property (nonatomic) int err; // ivar: _err
@property (nonatomic) BOOL gainMapEnabled; // ivar: _gainMapEnabled
@property (readonly, nonatomic) BWNRFProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _maxExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _minExposureTimesOfFramesAddedForMultiFrameProcessing
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing; // ivar: _numberOfFramesAddedForMultiFrameProcessing
@property (readonly, nonatomic) NRFUBFusionOutput *output;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing; // ivar: _totalExposureTimesOfFramesAddedForMultiFrameProcessing


-(BOOL)keepFramesUntilReferenceFrameSelected;
-(BOOL)processClientBracketFrame;
-(BOOL)processErrorRecoveryFrame;
-(BOOL)processOriginalImage;
-(BOOL)receivedAllFrames;
-(BOOL)useFrameForMultiFrameProcessing:(struct opaqueCMSampleBuffer *)arg0 ;
-(NSUInteger)fusionErrorRecoveryImageType;
-(NSUInteger)imageType;
-(id)delegate;
-(id)description;
-(id)initWithInput:(id)arg0 output:(id)arg1 deepFusionOutput:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5 delegate:(id)arg6 ;
-(int)expectedFrameCount;
-(struct opaqueCMSampleBuffer *)clientBracketFrame;
-(unsigned int)processingType;
-(void)dealloc;


@end


#endif