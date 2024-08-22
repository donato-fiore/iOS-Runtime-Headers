// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTEREOFUSIONNODE_H
#define BWSTEREOFUSIONNODE_H

@class NSDictionary, NSMutableArray;


#import "BWNode.h"
#import "BWStillImageSettings.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWStereoFusionNode : BWNode {
    *unk _createSampleBufferProcessorFunction;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSDictionary *_telephotoSensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    BWStillImageSettings *_currentStillImageSettings;
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
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)isCaptureRequestStateReset;
-(id)_initWithTelephotoSensorIDDictionary:(id)arg0 cameraInfoByPortType:(id)arg1 sbpCreationFunction:(*unk)arg2 treatSoftErrorsAsHardErrors:(BOOL)arg3 ;
-(id)initWithTelephotoSensorIDDictionary:(id)arg0 cameraInfoByPortType:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct OpaqueFigSampleBufferProcessor *)sampleBufferProcessor;
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