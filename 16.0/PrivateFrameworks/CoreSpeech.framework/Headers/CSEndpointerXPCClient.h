// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSENDPOINTERXPCCLIENT_H
#define CSENDPOINTERXPCCLIENT_H

@class NSXPCConnection;
@protocol CSEndpointerXPCServiceDelegate, CSEndpointAnalyzerDelegate, OS_dispatch_queue;


#import "CSEndpointerProxy.h"

@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate>

 {
    id<CSEndpointAnalyzerDelegate> *_endpointerDelegate;
}


@property (retain, nonatomic) NSXPCConnection *endpointerConnection; // ivar: _endpointerConnection
@property (retain, nonatomic) id *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // ivar: _xpcClientQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // ivar: _xpcConnectionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue; // ivar: _xpcDelegateQueue


-(CGFloat)elapsedTimeWithNoSpeech;
-(NSUInteger)endPointAnalyzerType;
-(id)_getRemoteServiceProxyObject;
-(id)endpointerDelegate;
-(id)endpointerModelVersion;
-(id)init;
-(void)_createClientConnection;
-(void)dealloc;
-(void)didDetectHardEndpointAtTime:(CGFloat)arg0 withMetrics:(id)arg1 ;
-(void)didDetectStartpointAtTime:(CGFloat)arg0 ;
-(void)processAudioSamplesAsynchronously:(id)arg0 ;
-(void)processServerEndpointFeatures:(id)arg0 ;
-(void)recordingStoppedForReason:(NSInteger)arg0 ;
-(void)resetForNewRequestWithSampleRate:(NSUInteger)arg0 recordContext:(id)arg1 recordOption:(id)arg2 voiceTriggerInfo:(id)arg3 ;
-(void)resetForVoiceTriggerTwoShotWithSampleRate:(NSUInteger)arg0 ;
-(void)setActiveChannel:(NSUInteger)arg0 ;
-(void)setAutomaticEndpointingSuspensionEndTime:(CGFloat)arg0 ;
-(void)setEndWaitTime:(CGFloat)arg0 ;
-(void)setEndpointerDelegate:(id)arg0 ;
-(void)setEndpointerOperationMode:(NSInteger)arg0 ;
-(void)setStartWaitTime:(CGFloat)arg0 ;
-(void)shouldAcceptEagerResultForDuration:(CGFloat)arg0 resultsCompletionHandler:(id)arg1 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg0 ;
-(void)updateEndpointerThreshold:(float)arg0 ;


@end


#endif