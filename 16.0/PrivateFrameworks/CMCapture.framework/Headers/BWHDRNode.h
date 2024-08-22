// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWHDRNODE_H
#define BWHDRNODE_H

@class NSDictionary, NSArray, NSMutableArray;


#import "BWNode.h"
#import "BWStillImageSettings.h"
#import "FigCapturePixelConverter.h"
#import "BWPixelBufferPool.h"

@interface BWHDRNode : BWNode {
    *unk _createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    BWStillImageSettings *_currentStillImageSettings;
    ? _pendingBracketBuffers;
    BOOL _preBracketedFrameExpected;
    BOOL _preBracketedFrameReceived;
    NSMutableArray *_receivedNodeErrors;
    unsigned int _emittedFrameOrErrorCount;
    BOOL _alwaysRequestsPreBracketedEV0;
    BOOL _supportsStereoFusionCaptures;
    FigCapturePixelConverter *_stereoFusionPixelConverter;
    BWPixelBufferPool *_telephotoHDREV0DisparityBufferPool;
    *opaqueCMFormatDescription _telephotoHDREV0DisparityFormatDescription;
    *OpaqueVTPixelTransferSession _telephotoHDREV0DisparityCopySession;
}




+(void)initialize;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)supportsStereoFusionCaptures;
-(id)_initWithClientPID:(int)arg0 sensorIDDictionary:(id)arg1 sbpCreationFunction:(*unk)arg2 ;
-(id)initWithClientPID:(int)arg0 sensorIDDictionary:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg0 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;
-(void)setSupportsStereoFusionCaptures:(BOOL)arg0 ;


@end


#endif