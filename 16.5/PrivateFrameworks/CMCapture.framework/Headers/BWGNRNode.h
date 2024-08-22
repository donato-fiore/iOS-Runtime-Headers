// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWGNRNODE_H
#define BWGNRNODE_H

@class NSString, NSDictionary, NSMutableDictionary;


#import "BWNode.h"
#import "BWNodeOutput.h"
#import "BWStillImageSettings.h"
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
    BWStillImageSettings *_currentStillImageSettings;
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
-(BOOL)allowedToModifyInputBuffers;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
-(id)_initWithSISEnabled:(BOOL)arg0 OISEnabled:(BOOL)arg1 LTMHDREnabled:(BOOL)arg2 processingLTMHDRFusion:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 sbpCreationFunction:(*unk)arg10 treatSoftErrorsAsHardErrors:(BOOL)arg11 ;
-(id)initWithSISEnabled:(BOOL)arg0 OISEnabled:(BOOL)arg1 LTMHDREnabled:(BOOL)arg2 processingLTMHDRFusion:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 ;
-(id)nodeSubType;
-(id)nodeType;
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