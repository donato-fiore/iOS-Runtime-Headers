// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMHAPTICCOMPONENT_H
#define AXMHAPTICCOMPONENT_H

@class CHHapticEngine;
@protocol OS_dispatch_queue, CHHapticPatternPlayer;


#import "AXMOutputComponent.h"

@interface AXMHapticComponent : AXMOutputComponent {
    NSObject<OS_dispatch_queue> *_queue;
    CHHapticEngine *_engine;
    id<CHHapticPatternPlayer> *_player;
    BOOL _supportsHaptics;
    BOOL _supportsAudio;
    CGFloat _autoShutdownTimeout;
    BOOL _usesHapticsOnly;
}


@property (retain, nonatomic) NSObject<CHHapticPatternPlayer> *_levelPlayer; // ivar: __levelPlayer
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled; // ivar: _autoShutdownEnabled
@property (nonatomic) CGFloat autoShutdownTimeout;
@property (nonatomic) BOOL usesHapticsOnly;


+(BOOL)isSupported;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)init;
-(void)handleRequest:(id)arg0 completion:(id)arg1 ;
-(void)stopCurrentHaptics;
-(void)transitionToState:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif