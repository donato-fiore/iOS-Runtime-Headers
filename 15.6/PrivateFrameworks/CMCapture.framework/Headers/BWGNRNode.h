// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWGNRNODE_H
#define BWGNRNODE_H

@class NSString, NSDictionary, NSMutableDictionary;


#import "BWNode.h"
#import "BWNodeOutput.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "FigCapturePixelConverter.h"

@interface BWGNRNode : BWNode {
    BOOL _sisEnabled;
    BOOL _oisEnabled;
    BOOL _hdrEnabled;
    BOOL _processingLTMHDRFusion;
    BWNodeOutput *_bravoHDRDisparityOutput;
    *unk _createSampleBufferProcessorFunction;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSString *_portType;
    NSString *_sensorID;
    NSDictionary *_sensorIDDictionary;
    NSString *_telephotoPortType;
    NSString *_telephotoSensorID;
    NSDictionary *_telephotoSensorIDDictionary;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    int _processingType;
    BOOL _clientExpectsPreBracketFrame;
    BOOL _expectsPreBracketFrame;
    BOOL _receivedPreBracketFrame;
    unsigned int _expectedFrameCount;
    unsigned int _receivedFrameCount;
    BOOL _receivedAllFrames;
    int _receivedReferenceFrameBracketedCaptureSequenceNumber;
    int _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    BOOL _processingHDREV0BracketFrame;
    int _hdrEV0BracketCaptureIdentifier;
    int _hdrDisparityBracketedCaptureSequenceNumber;
    NSMutableDictionary *_inputAttachedMedia;
    *opaqueCMSampleBuffer _collectedUnprocessedPreBracketHDR;
    FigCapturePixelConverter *_stereoFusedGNRHDRPixelConverter;
    NSInteger _previouslyCompletedFusionSettingsID;
    BOOL _usesHDRPreBracketFrameForErrorRecoveryDownstream;
    BOOL _allowedToModifyInputBuffers;
}




+(void)initialize;
-(BOOL)_isBravoDepthDataCapture;
-(BOOL)_isBravoHDRDepthDataCapture;
-(BOOL)_isBravoTelephotoHDRDepthDataCapture;
-(BOOL)_receivedExpectedAmountOfFrames;
-(BOOL)allowedToModifyInputBuffers;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
-(id)_initWithSISEnabled:(BOOL)arg0 OISEnabled:(BOOL)arg1 LTMHDREnabled:(BOOL)arg2 processingLTMHDRFusion:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 sbpCreationFunction:(*unk)arg10 treatSoftErrorsAsHardErrors:(BOOL)arg11 ;
-(id)_tuningDictionaryWithOnlyGNRParameters;
-(id)initWithSISEnabled:(BOOL)arg0 OISEnabled:(BOOL)arg1 LTMHDREnabled:(BOOL)arg2 processingLTMHDRFusion:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)sbpOptionsDictionary;
-(int)_gnrProcessingTypeWithMetadataDictionary:(id)arg0 ;
-(int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString *)arg0 value:(*void)arg1 ;
-(int)_setupSampleBufferProcessor;
-(struct opaqueCMSampleBuffer *)_copyAndZoomSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingNormalizedZoomRectangle:(struct CGRect )arg1 ;
-(unsigned int)_worstCaseFrameRetainCount;
-(void)_clearCaptureRequestState;
-(void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
-(void)_handleSBPReferenceFrame:(int)arg0 ;
-(void)_processSequenceInSampleBufferProcessor;
-(void)_sampleBufferProcessorOutputReady:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_setExpectedFrameCountForPortType:(id)arg0 ;
-(void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg0 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAllowedToModifyInputBuffers:(BOOL)arg0 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;
-(void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)arg0 ;


@end


#endif