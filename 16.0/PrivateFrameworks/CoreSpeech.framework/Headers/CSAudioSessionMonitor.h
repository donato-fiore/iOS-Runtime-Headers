// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOSESSIONMONITOR_H
#define CSAUDIOSESSIONMONITOR_H

@class NSString;
@protocol CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate, OS_dispatch_queue;


#import "CSEventMonitor.h"
#import "CSAudioServerCrashMonitor.h"

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioServerCrashMonitor *_crashMonitor;
}


@property (nonatomic, getter=getAudioSessionState) NSUInteger audioSessionState; // ivar: _audioSessionState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)initWithCrashMonitor:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 withAudioSessionState:(NSUInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)audioSessionEventProvidingDidSetAudioSessionActive:(BOOL)arg0 ;
-(void)audioSessionEventProvidingWillSetAudioSessionActive:(BOOL)arg0 ;
-(void)notifyAudioSessionStateChange:(NSUInteger)arg0 ;


@end


#endif