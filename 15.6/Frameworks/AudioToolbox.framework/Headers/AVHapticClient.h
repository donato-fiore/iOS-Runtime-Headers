// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVHAPTICCLIENT_H
#define AVHAPTICCLIENT_H

@class NSXPCConnection, NSArray, NSString;
@protocol NSXPCListenerDelegate, CHHapticClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVHapticClient : NSObject <NSXPCListenerDelegate, CHHapticClientInterface>

 {
    NSXPCConnection *_connection;
    HapticSharedMemory _sharedBuffer;
    NSUInteger _uniqueID;
    int _serverTimeout;
    mutex _mapMutex;
    map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> _sequenceEntryMap;
    NSObject<OS_dispatch_queue> *_completionQueue;
    int _state;
}


@property (copy) id *asyncStopCallback; // ivar: _asyncStopCallback
@property (readonly) NSArray *channelKeys; // ivar: _channelKeys
@property (readonly) NSUInteger clientID; // ivar: _clientID
@property (copy) id *completionCallback; // ivar: _completionCallback
@property BOOL connected; // ivar: _connected
@property (copy) id *connectionCallback; // ivar: _connectionCallback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL disconnecting; // ivar: _disconnecting
@property (readonly) CGFloat hapticLatency;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL prewarmed; // ivar: _prewarmed
@property (readonly) BOOL running;
@property int serverProcessID; // ivar: _serverProcessID
@property (readonly) int state;
@property (readonly) Class superclass;


-(BOOL)clearEventsFromTime:(CGFloat)arg0 channel:(NSUInteger)arg1 ;
-(BOOL)clearSequenceEvents:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)copyCustomAudioEvent:(NSUInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(BOOL)createCustomAudioEvent:(id)arg0 format:(id)arg1 frames:(NSUInteger)arg2 options:(id)arg3 reply:(id)arg4 ;
-(BOOL)doScheduleParamCurve:(NSUInteger)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 paramCurve:(id)arg3 error:(*id)arg4 ;
-(BOOL)doScheduleParamCurveWithMemoryReserve:(NSUInteger)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 memoryReserve:(struct AddressReserve *)arg3 paramCurve:(id)arg4 error:(*id)arg5 ;
-(BOOL)doSendEvents:(id)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 sorted:(BOOL)arg3 outToken:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)enableSequenceLooping:(NSUInteger)arg0 enable:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)finish:(id)arg0 ;
-(BOOL)loadAndPrepareHapticSequenceFromData:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromEvents:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadHapticEvent:(id)arg0 reply:(id)arg1 ;
-(BOOL)pauseHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)prepareHapticSequence:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)referenceCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(BOOL)releaseCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(BOOL)removeAssignedChannelID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)requestAssignedChannels:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)resetChannel:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)resetHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)resumeHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)scheduleParameterCurve:(NSUInteger)arg0 curve:(id)arg1 atTime:(CGFloat)arg2 channel:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)seekHapticSequence:(NSUInteger)arg0 toTime:(CGFloat)arg1 ;
-(BOOL)sendEvents:(id)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 outToken:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)setChannelEventBehavior:(NSUInteger)arg0 channel:(NSUInteger)arg1 ;
-(BOOL)setParameter:(NSUInteger)arg0 atTime:(CGFloat)arg1 value:(float)arg2 channel:(NSUInteger)arg3 ;
-(BOOL)setPlayerBehavior:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setSequenceChannelParameter:(NSUInteger)arg0 atTime:(CGFloat)arg1 value:(float)arg2 sequenceID:(NSUInteger)arg3 channel:(NSUInteger)arg4 ;
-(BOOL)setSequenceEventBehavior:(NSUInteger)arg0 behavior:(NSUInteger)arg1 channel:(NSUInteger)arg2 ;
-(BOOL)setSequenceLoopLength:(NSUInteger)arg0 length:(float)arg1 error:(*id)arg2 ;
-(BOOL)setSequencePlaybackRate:(NSUInteger)arg0 rate:(float)arg1 error:(*id)arg2 ;
-(BOOL)setupConnectionWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)startEventAndReturnToken:(NSUInteger)arg0 type:(NSUInteger)arg1 atTime:(CGFloat)arg2 channel:(NSUInteger)arg3 eventToken:(*NSUInteger)arg4 ;
-(BOOL)startHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 withOffset:(CGFloat)arg2 ;
-(BOOL)stopEventWithToken:(NSUInteger)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 ;
-(BOOL)stopHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(id)getAsyncDelegateForMethod:(SEL)arg0 errorHandler:(id)arg1 ;
-(id)getSequenceFinishedHandlerForID:(SEL)arg0 ;
-(id)getSyncDelegateForMethod:(SEL)arg0 errorHandler:(id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(int)setupSharedMemory:(struct object )arg0 size:(unsigned int)arg1 ;
-(unsigned int)calculateHapticCommandParamCurveMemorySize:(unsigned int)arg0 ;
-(void)allocateResources:(id)arg0 ;
-(void)callSequenceFinishedHandlersWithError:(id)arg0 ;
-(void)clearAssignedChannels;
-(void)clientCompletedWithError:(id)arg0 ;
-(void)clientDisconnectingForReason:(NSUInteger)arg0 error:(id)arg1 ;
-(void)clientStoppedForReason:(NSUInteger)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)destroySharedMemory;
-(void)detachHapticSequence:(NSUInteger)arg0 ;
-(void)detachSequenceEntryforID:(NSUInteger)arg0 ;
-(void)disconnect;
-(void)doInit;
-(void)expectNotifyAfter:(CGFloat)arg0 ;
-(void)handleServerConnectionInterruption;
-(void)handleServerConnectionInvalidation;
-(void)prewarm:(id)arg0 ;
-(void)queryServerCapabilities:(id)arg0 reply:(id)arg1 ;
-(void)releaseResources;
-(void)sequenceFinished:(NSUInteger)arg0 error:(id)arg1 ;
-(void)setRunStateForSequenceEntryWithID:(NSUInteger)arg0 running:(BOOL)arg1 ;
-(void)setSequenceFinishedHandlerForID:(NSUInteger)arg0 finishedHandler:(id)arg1 ;
-(void)startRunning:(id)arg0 ;
-(void)stopPrewarm;
-(void)stopRunning;
-(void)stopRunning:(id)arg0 ;


@end


#endif