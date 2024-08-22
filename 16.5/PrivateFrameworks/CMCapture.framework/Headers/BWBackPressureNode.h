// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWBACKPRESSURENODE_H
#define BWBACKPRESSURENODE_H

@class NSMutableArray;
@protocol BWNodeBackPressureSource, OS_dispatch_semaphore;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"

@interface BWBackPressureNode : BWNode {
    unsigned int _numberOfInputs;
    NSMutableArray *_receivedPresentationTimestampByInput;
    os_unfair_lock_s _presentationTimestampLock;
    NSInteger _initialSemaphoreValue;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    os_unfair_lock_s _stateLock;
    int _numEODMessagesReceived;
    BOOL _receivedFirstFrame;
}


@property (nonatomic) NSObject<BWNodeBackPressureSource> *backPressureSourceNode; // ivar: _backPressureSourceNode
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


+(void)initialize;
-(id)init;
-(id)initWithNumberOfInputsAndOutputs:(unsigned int)arg0 initialSemaphoreValue:(NSInteger)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)_handleUpdatedPresentationTimestamp:(struct ? )arg0 forIndex:(NSUInteger)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setInitialSemaphoreValue:(int)arg0 ;


@end


#endif