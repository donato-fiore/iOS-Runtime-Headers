// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTPLAYBACKSERVICE_H
#define _LTPLAYBACKSERVICE_H


#import <Foundation/Foundation.h>


@interface _LTPlaybackService : NSObject {
    AudioStreamBasicDescription _asbd;
    *OpaqueAudioQueue _audioQueue;
    _opaque_pthread_mutex_t _waitForStateChange;
    _opaque_pthread_cond_t _stateChangeCondition;
}


@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isAudioQueueRunning;
-(id)enqueue:(id)arg0 packetCount:(NSInteger)arg1 packetDescriptions:(id)arg2 ;
-(id)initWithContext:(id)arg0 ASBD:(struct AudioStreamBasicDescription )arg1 ;
-(id)start;
-(void)dealloc;
-(void)flushAndStop;
-(void)handleMediaServerReset;
-(void)reset;
-(void)signalQueueRunningStateChanged;
-(void)stop;
-(void)waitForAudioQueueStop;


@end


#endif