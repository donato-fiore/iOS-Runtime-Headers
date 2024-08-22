// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAVVCRECORDINGCLIENTMONITOR_H
#define CSAVVCRECORDINGCLIENTMONITOR_H

@class AVVoiceTriggerClient, NSString;
@protocol CSAudioServerCrashMonitorDelegate, OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSAVVCRecordingClientMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>



@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController; // ivar: _alwaysOnProcessorController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numOfAVVCRecordingClients; // ivar: _numOfAVVCRecordingClients
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)_didReceiveAVVCRecordingClientNumberChange:(NSUInteger)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif