// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOCKAUDIOSESSION_H
#define PXMOCKAUDIOSESSION_H

@class NSTimer;


#import "PXAudioSession.h"

@interface PXMockAudioSession : PXAudioSession {
    NSTimer *_currentTimeUpdateTimer;
    ? _currentTime;
}




-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(struct ? )currentTime;
-(void)_handleCurrentTimeUpdateTimer:(id)arg0 ;
-(void)_invalidateCurrentTimeUpdateTimer;
-(void)_startCurrentTimeUpdateTimer;
-(void)pause;
-(void)play;
-(void)prepareToPlay;


@end


#endif