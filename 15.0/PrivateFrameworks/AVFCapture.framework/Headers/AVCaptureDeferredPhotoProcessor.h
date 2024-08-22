// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDEFERREDPHOTOPROCESSOR_H
#define AVCAPTUREDEFERREDPHOTOPROCESSOR_H

@class NSString, AVWeakReference, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCaptureDeferredPhotoProcessor : NSObject {
    NSString *_applicationID;
    NSObject<OS_dispatch_queue> *_fcdppQueue;
    *OpaqueFigCaptureDeferredPhotoProcessor _fcdpp;
    AVWeakReference *_weakReference;
    *OpaqueFigSimpleMutex _requestsLock;
    NSMutableArray *_requests;
}


@property (readonly, nonatomic) NSArray *persistentlyStoredDeferredPhotoProxies;


+(id)sharedPhotoProcessor;
+(id)sharedPhotoProcessorForApplicationID:(id)arg0 ;
+(void)initialize;
-(BOOL)cancelProcessingForPhotoProxy:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPaused;
-(id)_initWithApplicationID:(id)arg0 ;
-(id)_processingRequestForCaptureRequestIdentifier:(id)arg0 photoIdentifier:(id)arg1 ;
-(int)_establishServerConnection;
-(void)_dispatchFailureCallbacks:(unsigned int)arg0 forProcessingRequest:(id)arg1 error:(id)arg2 ;
-(void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleNotification:(struct __CFString *)arg0 payload:(id)arg1 ;
-(void)_handleServerConnectionDiedNotification;
-(void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor *)arg0 ;
-(void)dealloc;
-(void)deletePersistentStorageForPhotoProxy:(id)arg0 ;
-(void)processPhotoProxy:(id)arg0 queuePosition:(id)arg1 delegate:(id)arg2 ;
-(void)setPaused:(BOOL)arg0 ;


@end


#endif