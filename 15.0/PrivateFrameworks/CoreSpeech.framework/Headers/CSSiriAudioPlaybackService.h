// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRIAUDIOPLAYBACKSERVICE_H
#define CSSIRIAUDIOPLAYBACKSERVICE_H

@class NSHashTable, NSMutableDictionary, AVAudioSession, NSString;
@protocol AFMemoryPressureListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioSessionController.h"

@interface CSSiriAudioPlaybackService : NSObject <AFMemoryPressureListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    NSMutableDictionary *_activeSessionsByRequest;
    NSMutableDictionary *_reusableSessionsByRequest;
    unsigned int _audioSessionID;
    AVAudioSession *_audioSession;
    CSAudioSessionController *_audioSessionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedService;
-(id)_audioSession;
-(id)_createAudioPlaybackSessionWithRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithAudioSessionController:(id)arg0 ;
-(unsigned int)_audioSessionID;
-(void)_enumerateListenersUsingBlock:(id)arg0 ;
-(void)_evictAllReusableSessionsForReason:(id)arg0 ;
-(void)_handleExecutionForSession:(id)arg0 ;
-(void)_handleFinalizationForSession:(id)arg0 error:(id)arg1 ;
-(void)_handlePreparationForSession:(id)arg0 ;
-(void)_invalidate;
-(void)_prewarmRequest:(id)arg0 completion:(id)arg1 ;
-(void)_setAudioSessionID:(unsigned int)arg0 ;
// -(void)_startRequest:(id)arg0 options:(NSUInteger)arg1 preparationHandler:(id)arg2 executionHandler:(unk)arg3 finalizationHandler:(id)arg4  ;
-(void)_stopAllRequests:(BOOL)arg0 completion:(id)arg1 ;
-(void)_stopAllRequestsSynchronously;
-(void)_stopRequest:(id)arg0 immediately:(BOOL)arg1 ;
-(void)addListener:(id)arg0 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionOwnerLostNotification:(id)arg1 ;
-(void)audioSessionController:(id)arg0 didReceiveAudioSessionOwnerResetNotification:(id)arg1 ;
-(void)memoryPressureObserver:(id)arg0 didChangeFromCondition:(NSInteger)arg1 toCondition:(NSInteger)arg2 ;
-(void)prewarmRequest:(id)arg0 completion:(id)arg1 ;
-(void)removeAllListeners;
-(void)removeListener:(id)arg0 ;
-(void)startRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)startRequest:(id)arg0 options:(NSUInteger)arg1 preparationHandler:(id)arg2 executionHandler:(unk)arg3 finalizationHandler:(id)arg4  ;
-(void)stopAllRequests:(BOOL)arg0 completion:(id)arg1 ;
-(void)stopAllRequestsSynchronously;
-(void)stopRequest:(id)arg0 immediately:(BOOL)arg1 ;


@end


#endif