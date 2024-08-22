// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTURECLIENTBASE_H
#define CMCONTINUITYCAPTURECLIENTBASE_H

@class NSMutableDictionary, NSArray, NSString, NSMutableArray;
@protocol ContinuityCaptureControlDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureTimeSyncClock.h"

@interface CMContinuityCaptureClientBase : NSObject <ContinuityCaptureControlDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate>

 {
    NSMutableDictionary *_availableSidecarStreamsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id *_connectionInterruptHandler;
    NSArray *_mediaIdentifiers;
    BOOL _active;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    NSObject<OS_dispatch_group> *_streamActivationGroup;
    id *_earlyActivationCompletionHandler;
    NSString *_earlyActivationCompletionMediaIdentifier;
    NSObject<OS_dispatch_group> *_earlyStreamActivationGroup;
    BOOL _pendingTimeSyncCallback;
    NSMutableArray *_timeSyncFailureLogs;
    NSMutableArray *_activationFailureLogs;
}


@property (readonly) BOOL active;
@property NSUInteger currentSessionID; // ivar: _currentSessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSArray *mediaIdentifers;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id *statusHandler;
@property (readonly) Class superclass;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;
@property (readonly, nonatomic) NSInteger transport;


+(void)initialize;
-(id)debugInfo;
-(id)initWithQueue:(id)arg0 mediaIdentifers:(id)arg1 ;
-(id)sidecarStreamForIdentifier:(id)arg0 ;
-(void)_handleAVCNegotiation:(NSInteger)arg0 data:(id)arg1 ;
-(void)_sendMessage:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)_setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)activate:(id)arg0 ;
-(void)activateSidecarStream:(id)arg0 completion:(id)arg1 ;
// -(void)activateSidecarStreams:(id)arg0 option:(unk)arg1  ;
-(void)cancel:(id)arg0 ;
-(void)connectionInterrupted:(id)arg0 ;
-(void)createTimeSyncClockForSession:(id)arg0 completion:(id)arg1 ;
-(void)enqueueResponse:(id)arg0 identifier:(id)arg1 ;
-(void)handleAVCNegotiation:(NSInteger)arg0 data:(id)arg1 ;
-(void)logActivationFailure;
-(void)logTimeSyncFailures:(NSInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerOnetimeCallackForActivationCompletionOfEntity:(NSInteger)arg0 completion:(id)arg1 ;
// -(void)reset:(id)arg0 error:(unk)arg1  ;
-(void)sendMessage:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)setConnectionInterruptHandler:(id)arg0 ;
-(void)setValueForControl:(id)arg0 completion:(id)arg1 ;
// -(void)setupSidecarStreams:(id)arg0 earlyStreamCompletion:(unk)arg1 timeSyncClockCompletion:(id)arg2 option:(unk)arg3  ;
-(void)teardownSidecarStreams:(id)arg0 completion:(id)arg1 ;


@end


#endif