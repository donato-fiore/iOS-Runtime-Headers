// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOSESSIONCONTROLLER_H
#define CSAUDIOSESSIONCONTROLLER_H

@class NSString, NSUUID, NSHashTable;
@protocol CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate, OS_dispatch_queue, CSAudioSessionInfoProviding;

#import <Foundation/Foundation.h>

#import "CSXPCClient.h"

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *endpointId; // ivar: _endpointId
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<CSAudioSessionInfoProviding> *sessionInfoProvider; // ivar: _sessionInfoProvider
@property BOOL shouldKeepConnection; // ivar: _shouldKeepConnection
@property (readonly) Class superclass;
@property (retain, nonatomic) CSXPCClient *xpcClient; // ivar: _xpcClient


+(id)sharedInstance;
-(BOOL)_createXPCClientConnectionIfNeeded;
-(id)init;
-(id)initWithEndpointId:(id)arg0 ;
-(unsigned int)_getAudioSessionID;
-(unsigned int)getAudioSessionID;
-(void)CSXPCClient:(id)arg0 didDisconnect:(BOOL)arg1 ;
-(void)_audioRouteChanged:(id)arg0 ;
-(void)_handleInterruption:(id)arg0 ;
-(void)_mediaServicesWereLost:(id)arg0 ;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_registerAudioRouteChangeNotification;
-(void)_registerInterruptionNotification;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)_teardownXPCClientIfNeeded;
-(void)audioSessionInfoProvider:(id)arg0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionInfoProvider:(id)arg0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionInfoProvider:(id)arg0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg1 ;
-(void)audioSessionInfoProvider:(id)arg0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg1 ;
-(void)coreSpeechDaemonStateMonitor:(id)arg0 didReceiveStateChanged:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)getAudioSessionIDWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif