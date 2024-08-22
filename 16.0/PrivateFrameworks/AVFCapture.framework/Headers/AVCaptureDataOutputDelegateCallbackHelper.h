// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREDATAOUTPUTDELEGATECALLBACKHELPER_H
#define AVCAPTUREDATAOUTPUTDELEGATECALLBACKHELPER_H

@class NSString, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {
    NSString *_defaultCallbackQueueName;
    NSObject<OS_dispatch_queue> *_defaultCallbackQueue;
    *OpaqueFigSimpleMutex _stateMutex;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReferencingDelegateStorage *_delegateOverrideStorage;
    *remoteQueueReceiverOpaque _remoteQueueReceiver;
    id *_remoteQueueHandler;
    *localQueueOpaque _localQueue;
    id *_localQueueHandler;
    BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;
}


@property (readonly) NSObject<OS_dispatch_queue> *activeCallbackQueue;
@property (readonly) id *activeDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly) id *clientDelegate;
@property (readonly) id *delegateOverride;
@property (readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;


+(void)initialize;
-(BOOL)_validateCallbackQueue:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)initWithQueueName:(id)arg0 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)arg1 ;
-(void)dealloc;
-(void)releaseRemoteQueueReceiver;
-(void)updateLocalQueue:(struct localQueueOpaque *)arg0 handler:(id)arg1 ;
-(void)updateRemoteQueueReceiver:(struct remoteQueueReceiverOpaque *)arg0 handler:(id)arg1 ;


@end


#endif