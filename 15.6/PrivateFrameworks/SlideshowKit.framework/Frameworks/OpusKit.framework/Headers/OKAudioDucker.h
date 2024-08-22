// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKAUDIODUCKER_H
#define OKAUDIODUCKER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface OKAudioDucker : NSObject {
    float _currentVolume;
    float _fadeToVolume;
    float _fadeFromVolume;
    float _duckLevel;
    CGFloat _startFadeTime;
    NSInteger _duckState;
    CGFloat _fadeDuration;
    CGFloat _duckDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id *_setVolumeBlock;
}


@property (nonatomic) float volume; // ivar: _volume


-(id)init;
-(void)_handleTimerEvent;
-(void)beginDuckingToLevel:(CGFloat)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)beginFadingWithDuration:(CGFloat)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)endDucking;
-(void)endFading;
-(void)endFading:(BOOL)arg0 ;
-(void)setSetVolumeBlock:(id)arg0 ;


@end


#endif