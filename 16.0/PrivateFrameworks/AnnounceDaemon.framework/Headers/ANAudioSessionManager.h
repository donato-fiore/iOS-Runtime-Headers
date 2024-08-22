// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANAUDIOSESSIONMANAGER_H
#define ANAUDIOSESSIONMANAGER_H

@class AVAudioSession;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ANAudioSessionManager : NSObject

@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(BOOL)activateAudioSessionWithError:(*id)arg0 ;
-(id)initWithAudioSession:(id)arg0 queue:(id)arg1 endpointID:(id)arg2 ;
-(void)_cancelTimer;
-(void)_deactivateAudioSession;
-(void)_handleTimerExpired;
-(void)deactivateAudioSessionAfterDelay:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif