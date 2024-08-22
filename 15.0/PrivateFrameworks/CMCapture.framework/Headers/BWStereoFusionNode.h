// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTEREOFUSIONNODE_H
#define BWSTEREOFUSIONNODE_H

@class NSDictionary, NSMutableArray;


#import "BWNode.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWStereoFusionNode : BWNode {
    *unk _createSampleBufferProcessorFunction;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSDictionary *_telephotoSensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BOOL _expectsWideFrame;
    BOOL _receivedWideFrame;
    BOOL _expectsTelephotoFrame;
    BOOL _receivedTelephotoFrame;
    BOOL _performSBPProcessing;
    NSDictionary *_sbpZoomRectangleDictionary;
    BWNodeInput *_masterInput;
    NSMutableArray *_nodeErrorsForWide;
    NSMutableArray *_nodeErrorsForTelephoto;
}


@property (readonly, nonatomic) BWNodeOutput *defaultOutput; // ivar: _defaultOutput
@property (readonly, nonatomic) BWNodeOutput *stereoHDROutput; // ivar: _stereoHDROutput
@property (readonly, nonatomic) BWNodeInput *telephotoInput; // ivar: _telephotoInput
@property (readonly, nonatomic) BWNodeInput *wideInput; // ivar: _wideInput


+(void)initialize;
-(BOOL)_receivedExpectedNumberOfFramesOrErrors;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)isCaptureRequestStateReset;
-(id)_initWithTelephotoSensorIDDictionary:(id)arg0 cameraInfoByPortType:(id)arg1 sbpCreationFunction:(*unk)arg2 treatSoftErrorsAsHardErrors:(BOOL)arg3 ;
-(id)initWithTelephotoSensorIDDictionary:(id)arg0 cameraInfoByPortType:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)sbpOptionsDictionary;
-(int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString *)arg0 value:(*void)arg1 ;
-(int)_setupSampleBufferProcessor;
-(struct OpaqueFigSampleBufferProcessor *)sampleBufferProcessor;
-(void)_clearCaptureRequestState;
-(void)_endSequence;
-(void)_handleError:(int)arg0 forSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 input:(id)arg2 ;
-(void)_processSampleBufferInSampleBufferProcessor:(struct opaqueCMSampleBuffer *)arg0 metadataDictionary:(id)arg1 ;
-(void)_processSequenceInSampleBufferProcessor;
-(void)_sampleBufferProcessorOutputReady:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_setExpectedInputFramesWithResolvedCaptureSettings:(id)arg0 ;
-(void)_setZoomRectangleOnSampleBufferProcessorIfNecessaryBasedOnMetadata:(id)arg0 captureType:(int)arg1 ;
-(void)_setZoomRectangleOnSampleBufferProcessorWithRectangle:(struct CGRect )arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;


@end


#endif