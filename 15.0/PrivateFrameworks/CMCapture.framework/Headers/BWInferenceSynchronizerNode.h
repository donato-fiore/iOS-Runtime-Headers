// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESYNCHRONIZERNODE_H
#define BWINFERENCESYNCHRONIZERNODE_H

@class NSMutableDictionary;


#import "BWNode.h"
#import "BWNodeInput.h"

@interface BWInferenceSynchronizerNode : BWNode {
    NSMutableDictionary *_mostRecentEmittedCaptureIdentifierByPortType;
    int _indexOfInputProvidingOutputSampleBuffer;
    int _indexOfInputProvidingOnlyInferences;
    int _indexOfInputProvidingPreferredInferences;
    ? _contexts;
    os_unfair_lock_s _bufferServicingLock;
    unsigned char _maximumNumberOfInflightBuffers;
}


@property (readonly, nonatomic) unsigned short errorHandlingModel; // ivar: _errorHandlingModel
@property (readonly, nonatomic) BWNodeInput *inputProvidingOnlyInferences;
@property (readonly, nonatomic) BWNodeInput *inputProvidingOutputSampleBuffer;
@property (readonly, nonatomic) BWNodeInput *inputProvidingPreferredInferences;
@property (nonatomic) BOOL synchronizesTopLevelAttachments; // ivar: _synchronizesTopLevelAttachments


+(void)initialize;
-(id)_bufferArrayToString:(id)arg0 ;
-(id)init;
-(id)initWithIndexOfInputProvidingOutputSampleBuffer:(int)arg0 indexOfInputProvidingPreferredInferences:(int)arg1 errorHandlingModel:(unsigned short)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct opaqueCMSampleBuffer *)_synchronizedBufferFromQueue:(id)arg0 withIdentifier:(unsigned int)arg1 andPortType:(id)arg2 ;
-(void)_attemptBufferOrErrorEmission;
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