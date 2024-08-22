// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWCROSSOVERNODE_H
#define BWCROSSOVERNODE_H



#import "BWNode.h"

@interface BWCrossoverNode : BWNode {
    int _numEODMessagesReceived;
    os_unfair_lock_s _bufferServicingLock;
}




+(void)initialize;
-(id)initWithMediaType:(unsigned int)arg0 numberOfInputs:(unsigned int)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif