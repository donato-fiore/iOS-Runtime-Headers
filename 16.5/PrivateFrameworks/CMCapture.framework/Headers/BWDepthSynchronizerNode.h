// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEPTHSYNCHRONIZERNODE_H
#define BWDEPTHSYNCHRONIZERNODE_H

@class NSMutableArray;


#import "BWNode.h"
#import "BWNodeError.h"
#import "BWNodeInput.h"

@interface BWDepthSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    uint8_t _depthInputHasReceivedEOD;
    NSMutableArray *_imageBufferQueue;
    NSMutableArray *_depthBufferQueue;
    int _maxQueueDepth;
    int _lastEmittedFrameCaptureID;
    int _lastReceivedImageID;
    int _lastReceivedDepthID;
    int _imageIDWrapAroundCounter;
    int _depthIDWrapAroundCounter;
    BOOL _discardsDegradedDepthBuffers;
    BOOL _separateDepthComponentsEnabled;
    BOOL _streaming;
    BWNodeError *_errorForImageInput;
    BWNodeError *_errorForDepthInput;
    os_unfair_lock_s _bufferServicingLock;
    ? _lastReceivedImagePTS;
    ? _lastReceivedDepthPTS;
}


@property (readonly) BWNodeInput *depthInput; // ivar: _depthInput
@property (nonatomic) BOOL discardsDegradedDepthBuffers;
@property (nonatomic) BOOL flushOnDepthEOD; // ivar: _flushOnDepthEOD
@property (readonly) BWNodeInput *imageInput; // ivar: _imageInput


+(void)initialize;
-(id)initForStreaming:(BOOL)arg0 separateDepthComponentsEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif