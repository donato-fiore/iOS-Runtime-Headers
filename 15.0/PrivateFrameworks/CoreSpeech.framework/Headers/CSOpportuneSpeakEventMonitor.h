// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSOPPORTUNESPEAKEVENTMONITOR_H
#define CSOPPORTUNESPEAKEVENTMONITOR_H

@class NSString, CSAudioRecordContext, NSUUID;
@protocol CSOpportuneSpeakBehaviorMonitorDelegate, OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate>



@property (retain, nonatomic) NSString *audioProviderUUID; // ivar: _audioProviderUUID
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext; // ivar: _audioRecordContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOpportuneSpeakListening; // ivar: _isOpportuneSpeakListening
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *token; // ivar: _token


+(id)sharedInstance;
-(BOOL)isStreaming;
-(id)init;
-(void)_notifyStopOpportuneSpeakWithDelay:(CGFloat)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)opportuneSpeakBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 ;


@end


#endif