// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWTIMEOFFLIGHTSYNCHRONIZERNODE_H
#define BWTIMEOFFLIGHTSYNCHRONIZERNODE_H

@class NSMutableArray;


#import "BWNode.h"
#import "BWDataBufferPool.h"
#import "BWNodeInput.h"

@interface BWTimeOfFlightSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    CGFloat _lastEmittedPTS;
    NSMutableArray *_pointCloudBufferQueue;
    NSMutableArray *_videoBufferQueue;
    *opaqueCMFormatDescription _pointCloudFormatDescription;
    os_unfair_lock_s _bufferServicingLock;
    int _maxVideoBufferQueueDepth;
    int _maxPointCloudBufferQueueDepth;
    BWDataBufferPool *_dataBufferPool;
}


@property (readonly) BWNodeInput *pointCloudInput; // ivar: _pointCloudInput
@property (readonly) BWNodeInput *videoInput; // ivar: _videoInput


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif