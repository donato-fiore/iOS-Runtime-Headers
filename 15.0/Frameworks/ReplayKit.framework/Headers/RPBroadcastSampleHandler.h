// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPBROADCASTSAMPLEHANDLER_H
#define RPBROADCASTSAMPLEHANDLER_H

@class NSString;
@protocol RPExtensionContextDelegate, RPBroadcastDaemonProtocol;


#import "RPBroadcastHandler.h"

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate>



@property (retain, nonatomic) NSObject<RPBroadcastDaemonProtocol> *daemonProxy; // ivar: _daemonProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)audioQueue;
-(id)group;
-(id)videoQueue;
-(void)_processPayload:(id)arg0 ;
-(void)_processPayloadWithAudioSample:(id)arg0 type:(NSInteger)arg1 ;
-(void)_processPayloadWithVideoSample:(id)arg0 ;
-(void)_setupListenerWithEndpoint:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)broadcastAnnotatedWithApplicationInfo:(id)arg0 ;
-(void)broadcastFinished;
-(void)broadcastPaused;
-(void)broadcastResumed;
-(void)broadcastStartedWithSetupInfo:(id)arg0 ;
-(void)extensionContext:(id)arg0 setEndpoint:(id)arg1 ;
-(void)finishBroadcastWithError:(id)arg0 ;
-(void)processPayload:(id)arg0 completion:(id)arg1 ;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withType:(NSInteger)arg1 ;
-(void)updateBroadcastURL:(id)arg0 ;
-(void)updateServiceInfo:(id)arg0 ;


@end


#endif