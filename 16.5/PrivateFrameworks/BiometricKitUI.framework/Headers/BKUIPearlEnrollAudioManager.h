// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPEARLENROLLAUDIOMANAGER_H
#define BKUIPEARLENROLLAUDIOMANAGER_H

@class CHHapticEngine;
@protocol BKUIPearlAudioStateDelegate;

#import <Foundation/Foundation.h>

#import "BKUIPearlAudioSession.h"
#import "BKUIPearlEnrollControllerPreloadedState.h"

@interface BKUIPearlEnrollAudioManager : NSObject {
    BKUIPearlAudioSession *_audioSession;
}


@property (retain, nonatomic) CHHapticEngine *hapticsEngine; // ivar: _hapticsEngine
@property (retain, nonatomic) BKUIPearlEnrollControllerPreloadedState *preloadedState; // ivar: _preloadedState
@property (weak, nonatomic) NSObject<BKUIPearlAudioStateDelegate> *stateDelegate; // ivar: _stateDelegate


-(id)createEngine;
-(id)hapticEventWithEventType:(NSUInteger)arg0 withDelay:(CGFloat)arg1 ;
-(void)cleanupHaptics;
-(void)cleanupHapticsAndSound;
-(void)cleanupSound;
-(void)dealloc;
-(void)fadeCurrentSound:(CGFloat)arg0 completion:(id)arg1 ;
-(void)playHaptic:(NSUInteger)arg0 withDelay:(CGFloat)arg1 ;
-(void)playHapticWithEvents:(id)arg0 ;
-(void)setUpHaptics;
-(void)setupSound;
-(void)triggerSoundHapticForTransitionToState:(int)arg0 fromState:(int)arg1 ;
-(void)triggerSoundHapticForTransitionToSubstate:(int)arg0 fromSubstate:(int)arg1 ;


@end


#endif