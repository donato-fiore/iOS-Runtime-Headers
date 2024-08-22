// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSLAVEFRAMESYNCHRONIZERNODE_H
#define BWSLAVEFRAMESYNCHRONIZERNODE_H



#import "BWNode.h"

@interface BWSlaveFrameSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    os_unfair_lock_s _bufferServicingLock;
    ? _inputSampleBufferQueues;
    int _numBufferedFrames;
    BOOL _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;
}




+(void)initialize;
-(id)initWithDepthEnabled:(BOOL)arg0 numberOfInputs:(int)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)_emitIncomingFrameKtraces:(struct opaqueCMSampleBuffer *)arg0 withInput:(id)arg1 ;
-(void)_printState;
-(void)_purgeAllBuffers;
-(void)_purgeAllPurgeableBuffers;
-(void)_setupDepthMediaConfigurationForInput:(id)arg0 attachedMediaKey:(id)arg1 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg0 attachedMediaKey:(id)arg1 inputIndexesDrivingDepthOutput:(id)arg2 ;
-(void)_tryToEmitBuffers;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif