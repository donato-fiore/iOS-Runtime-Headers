// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFUNNELNODE_H
#define BWFUNNELNODE_H

@class NSMutableArray;


#import "BWNode.h"

@interface BWFunnelNode : BWNode {
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    os_unfair_lock_s _stateLock;
    BOOL _running;
}




+(void)initialize;
-(id)initWithNumberOfInputs:(int)arg0 mediaType:(unsigned int)arg1 ;
-(id)initWithNumberOfInputs:(int)arg0 mediaType:(unsigned int)arg1 holdMessages:(BOOL)arg2 ;
-(void)_handleMessage:(id)arg0 fromInput:(id)arg1 ;
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