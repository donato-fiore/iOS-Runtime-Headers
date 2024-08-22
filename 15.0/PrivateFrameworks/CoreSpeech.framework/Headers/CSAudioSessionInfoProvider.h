// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOSESSIONINFOPROVIDER_H
#define CSAUDIOSESSIONINFOPROVIDER_H

@class NSString, NSHashTable;
@protocol CSAudioSessionInfoProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue; // ivar: _sessionInfoQueue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(unsigned int)audioSessionIdForDeviceId:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_audioRouteChanged:(id)arg0 ;
-(void)_deregisterAudioSessionNotifications;
-(void)_handleInterruption:(id)arg0 ;
-(void)_registerAudioRouteChangeNotification;
-(void)_registerAudioSessionNotifications;
-(void)_registerInterruptionNotification;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif