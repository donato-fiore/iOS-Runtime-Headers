// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEVENTLISTENER_H
#define IMEVENTLISTENER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface IMEventListener : NSObject

@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy) id *didInvokeCompletion; // ivar: _didInvokeCompletion
@property (readonly) CGFloat elapsedWaitingTime;
@property (readonly) NSUInteger eventCount; // ivar: _eventCount
@property (readonly, getter=isListening) BOOL listening;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (weak) id *target; // ivar: _target
@property (readonly) CGFloat timeLastEventReceived; // ivar: _timeLastEventReceived
@property (readonly) CGFloat timeListeningStarted; // ivar: _timeListeningStarted
@property (readonly) CGFloat timeListeningStopped; // ivar: _timeListeningStopped
@property CGFloat timeout; // ivar: _timeout
@property (nonatomic) CGFloat timerStart; // ivar: _timerStart
@property (copy) id *willInvokeCompletion; // ivar: _willInvokeCompletion
@property (nonatomic) BOOL willRepeat; // ivar: _willRepeat


+(id)_mutableListenerDictionary;
+(id)allListeners;
+(id)eventListener;
+(id)eventListenerWithNotificationName:(id)arg0 object:(id)arg1 ;
-(id)createResult:(BOOL)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)_addToListeners;
-(void)_cancelTimeoutTimer;
-(void)_didReceiveEvent:(BOOL)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)_dispatchStartEventBlock:(id)arg0 ;
-(void)_handleTimeout:(id)arg0 ;
-(void)_invokeCompletion:(BOOL)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)_removeFromListeners;
-(void)_reset;
-(void)_startListening;
-(void)_startTimeoutTimerIfNeeded;
-(void)_stopListening;
-(void)reset;
-(void)startListening;
-(void)startListeningForEventTarget:(id)arg0 completion:(id)arg1 ;
// -(void)startListeningForEventTarget:(id)arg0 sendStartingEvent:(id)arg1 completion:(unk)arg2  ;
-(void)stopListening;
-(void)waitForCompletion;
-(void)willReset;
-(void)willStartListening;
-(void)willStopListening;


@end


#endif