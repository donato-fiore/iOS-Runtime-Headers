// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSISNODE_H
#define BWSISNODE_H

@class NSDictionary, NSArray;


#import "BWNode.h"
#import "FigCaptureStillImageSettings.h"

@interface BWSISNode : BWNode {
    *unk _createSampleBufferProcessorFunction;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSDictionary *_cameraTuningDictionary;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_noiseModelParamsDictionary;
    NSDictionary *_fusionParamsDictionary;
    int _fusionScheme;
    BOOL _alwaysRequestsPreBracketedEV0;
    BOOL _allowExperimentalOverrides;
    int _lensShadingCorrectionMode;
    int _maxIntegrationTimeLimitMsec;
    float _bracketGainCap;
    NSArray *_exposureValues;
    NSArray *_afWindowParamsArray;
    int _sisBracketCount;
    NSArray *_oisExposureDurationTypes;
    int _oisBracketCount;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    BOOL _preBracketedFrameReceived;
    int _numberFramesReceived;
    int _lastFusionTypeUsed;
    BOOL _livePhotoSupported;
    BOOL _OISSupported;
    BOOL _allowAllocationsAtPrepareTime;
}




+(void)initialize;
-(BOOL)OISSupported;
-(BOOL)allowAllocationsAtPrepareTime;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)livePhotoSupported;
-(id)_initWithCameraTuningDictionary:(id)arg0 sensorIDDictionary:(id)arg1 sbpCreationFunction:(*unk)arg2 fusionScheme:(int)arg3 allowExperimentalOverrides:(BOOL)arg4 ;
-(id)initWithCameraTuningDictionary:(id)arg0 sensorIDDictionary:(id)arg1 fusionScheme:(int)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_setupSampleBufferProcessor;
-(int)_unpackSISOptions;
-(void)_clearCaptureRequestState;
-(void)_sampleBufferProcessorOutputReady:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAllowAllocationsAtPrepareTime:(BOOL)arg0 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg0 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;
-(void)setLivePhotoSupported:(BOOL)arg0 ;
-(void)setOISSupported:(BOOL)arg0 ;


@end


#endif