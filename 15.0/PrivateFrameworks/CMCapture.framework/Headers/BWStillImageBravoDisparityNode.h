// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEBRAVODISPARITYNODE_H
#define BWSTILLIMAGEBRAVODISPARITYNODE_H

@class NSDictionary, FigDisparityGenerator;


#import "BWNode.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWNodeError.h"
#import "BWStillImageNodeConfiguration.h"
#import "BWNodeInput.h"

@interface BWStillImageBravoDisparityNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    FigDisparityGenerator *_disparityGenerator;
    NSUInteger _disparityMapWidth;
    NSUInteger _disparityMapHeight;
    *opaqueCMFormatDescription _disparityFormatDescription;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _expectedDisparityCount;
    int _deliveredDisparityCount;
    int _processingMode;
    *opaqueCMSampleBuffer _teleSbuf;
    *opaqueCMSampleBuffer _wideSbuf;
    BOOL _emitTeleFrame;
    BOOL _emitWideFrame;
    BWNodeError *_errorForWide;
    BWNodeError *_errorForTele;
    BOOL _shouldComputeDisparityWhenCalibrationFails;
    BOOL _disparityInputIsRaw;
    BWStillImageNodeConfiguration *_nodeConfiguration;
}


@property (readonly, nonatomic) BWNodeInput *telephotoInput; // ivar: _telephotoInput
@property (readonly, nonatomic) BWNodeInput *wideInput; // ivar: _wideInput


+(void)initialize;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(id)initWithNodeConfiguration:(id)arg0 sensorConfigurationsByPortType:(id)arg1 disparityMapWidth:(NSUInteger)arg2 disparityMapHeight:(NSUInteger)arg3 outputDisparityBufferCount:(int)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)processorOptionsDictionary;
-(int)_OSStatusFromDisparityResult:(int)arg0 ;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_clearCaptureRequestState;
-(void)_computeDisparityForTeleBuffer:(struct opaqueCMSampleBuffer *)arg0 wideBuffer:(struct opaqueCMSampleBuffer *)arg1 attachToOutputBuffer:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg0 resolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_finishPendingProcessing;
-(void)_handleError:(int)arg0 duringProcessingOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromInput:(id)arg2 ;
-(void)_processBuffersForDisparityIfNecessary;
-(void)_resolveProcessingMode;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg0 ;


@end


#endif