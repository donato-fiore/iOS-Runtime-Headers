// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMEDIAPLAYINGMONITOR_H
#define CSMEDIAPLAYINGMONITOR_H

@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSMediaPlayingMonitor : CSEventMonitor {
    NSInteger _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(NSInteger)mediaPlayingState;
-(id)init;
-(void)_notePossiblePlayPausedStateChange:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 mediaIsPlayingState:(NSInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)initializeMediaPlayingState;
-(void)mediaPlayingStateWithCompletion:(id)arg0 ;


@end


#endif