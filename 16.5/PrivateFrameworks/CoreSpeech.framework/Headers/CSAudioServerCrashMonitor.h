// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOSERVERCRASHMONITOR_H
#define CSAUDIOSERVERCRASHMONITOR_H

@class AVVoiceTriggerClient, NSString;
@protocol CSAudioServerCrashEventProvidingDelegate;


#import "CSEventMonitor.h"

@interface CSAudioServerCrashMonitor : CSEventMonitor <CSAudioServerCrashEventProvidingDelegate>



@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController; // ivar: _alwaysOnProcessorController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger serverState; // ivar: _serverState
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_didReceiveMediaserverNotification:(NSUInteger)arg0 ;
-(void)_mediaserverdDidRestart;
-(void)_notifyObserver:(id)arg0 withMediaserverState:(NSUInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)audioServerCrashEventProvidingLostMediaserverd;


@end


#endif