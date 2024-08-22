// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRICLIENTBEHAVIORMONITOR_H
#define CSSIRICLIENTBEHAVIORMONITOR_H

@class CSAudioRecordContext, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext; // ivar: _audioRecordContext
@property (nonatomic) BOOL isStreaming; // ivar: _isStreaming
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)notifyDidStartStreamWithContext:(id)arg0 successfully:(BOOL)arg1 option:(id)arg2 withEventUUID:(id)arg3 ;
-(void)notifyDidStopStream:(id)arg0 withEventUUID:(id)arg1 ;
-(void)notifyFetchedSiriClientAudioStream:(id)arg0 successfully:(BOOL)arg1 ;
-(void)notifyPreparedSiriClientAudioStream:(id)arg0 successfully:(BOOL)arg1 ;
-(void)notifyReleaseAudioSession;
-(void)notifyWillStartStreamWithContext:(id)arg0 option:(id)arg1 ;
-(void)notifyWillStopStream:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif