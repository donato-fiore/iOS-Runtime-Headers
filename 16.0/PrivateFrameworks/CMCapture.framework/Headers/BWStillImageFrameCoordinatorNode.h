// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEFRAMECOORDINATORNODE_H
#define BWSTILLIMAGEFRAMECOORDINATORNODE_H

@class NSDictionary, NSMutableDictionary, NSMutableArray;


#import "BWNode.h"
#import "BWStillImageSettings.h"

@interface BWStillImageFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSDictionary *_portTypeToSensorRawInput;
    NSDictionary *_portTypeToSensorRawOutput;
    NSMutableDictionary *_portTypeToFrameCounters;
    BWStillImageSettings *_currentStillImageSettings;
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}




+(void)initialize;
-(id)initWithPortTypes:(id)arg0 sensorRawInputPortTypes:(id)arg1 ;
-(id)inputForPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputForPortType:(id)arg0 ;
-(id)sensorRawInputForPortType:(id)arg0 ;
-(id)sensorRawOutputForPortType:(id)arg0 ;
-(void)_handleMessage:(id)arg0 fromInput:(id)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif