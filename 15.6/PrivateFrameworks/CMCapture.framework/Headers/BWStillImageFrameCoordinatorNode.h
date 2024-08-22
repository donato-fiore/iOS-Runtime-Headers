// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGEFRAMECOORDINATORNODE_H
#define BWSTILLIMAGEFRAMECOORDINATORNODE_H

@class NSDictionary, NSMutableDictionary, NSMutableArray;


#import "BWNode.h"
#import "BWStillImageCaptureSettings.h"

@interface BWStillImageFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSMutableDictionary *_portTypeToFrameCounters;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}




+(void)initialize;
-(BOOL)_isCaptureComplete;
-(id)initWithPortTypes:(id)arg0 ;
-(id)inputForPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputForPortType:(id)arg0 ;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg0 ;
-(void)_deliverQueuedMessages;
-(void)_handleMessage:(id)arg0 fromInput:(id)arg1 ;
-(void)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_handleZeroShutterLagSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_resetStillImageCaptureState;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif