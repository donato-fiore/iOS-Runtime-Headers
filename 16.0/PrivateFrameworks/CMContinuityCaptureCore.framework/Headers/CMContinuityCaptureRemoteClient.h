// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREREMOTECLIENT_H
#define CMCONTINUITYCAPTUREREMOTECLIENT_H

@class SidecarRequest, NSMutableArray, NSString;
@protocol ContinuityCaptureEventDelegate, ContinuityCaptureStreamDelegate, ContinuityCaptureControlDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate, OS_dispatch_group;


#import "CMContinuityCaptureClientBase.h"

@interface CMContinuityCaptureRemoteClient : CMContinuityCaptureClientBase <ContinuityCaptureEventDelegate>

 {
    id<ContinuityCaptureStreamDelegate> *_streamDelegate;
    id<ContinuityCaptureControlDelegate> *_controlDelegate;
    id<ContinuityCaptureAVCNegotiationDataDelegate> *_avcNegotiationDelegate;
    id<ContinuityCaptureClockSynchronizationDelegate> *_clockSynchronizationDelegate;
    id<ContinuityCaptureStillImageCaptureDelegate> *_stillImageCaptureDelegate;
    SidecarRequest *_activeRequest;
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_group> *_sidecarActivationCompletionGroup;
    NSMutableArray *_connectionTimeoutLogs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)postCommandForSelector:(NSUInteger)arg0 args:(id)arg1 ;
-(id)debugInfo;
-(id)initWithRequest:(id)arg0 mediaIdentifiers:(id)arg1 streamDelegate:(id)arg2 controlDelegate:(id)arg3 avcNegotiationDelegate:(id)arg4 clockSynchronizationDelegate:(id)arg5 stillImageCaptureDelegate:(id)arg6 queue:(id)arg7 ;
-(void)_didCaptureStillImage:(id)arg0 entity:(NSInteger)arg1 ;
-(void)_enqueueCommandForSelector:(NSInteger)arg0 args:(id)arg1 ;
-(void)_notifyCompletion;
-(void)_postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)_synchronizeAudioClockWithSampleTime:(NSUInteger)arg0 networkTime:(NSUInteger)arg1 clockGrandMasterIdentifier:(NSUInteger)arg2 ;
-(void)didCaptureStillImage:(id)arg0 entity:(NSInteger)arg1 ;
-(void)enqueueCommandForSelector:(NSInteger)arg0 args:(id)arg1 ;
-(void)enqueueResponse:(id)arg0 identifier:(id)arg1 ;
-(void)logConnectionTimeout;
-(void)notifyCompletion;
-(void)postEvent:(id)arg0 entity:(NSInteger)arg1 ;
// -(void)setupSidecarStreams:(id)arg0 earlyStreamCompletion:(unk)arg1 timeSyncClockCompletion:(id)arg2 option:(unk)arg3  ;
-(void)synchronizeAudioClockWithSampleTime:(NSUInteger)arg0 networkTime:(NSUInteger)arg1 clockGrandMasterIdentifier:(NSUInteger)arg2 ;
-(void)teardownSidecarStreams:(id)arg0 completion:(id)arg1 ;


@end


#endif