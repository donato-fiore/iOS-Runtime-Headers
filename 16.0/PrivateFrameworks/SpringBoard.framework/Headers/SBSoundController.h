// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOUNDCONTROLLER_H
#define SBSOUNDCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, UINotificationFeedbackGenerator, NSMapTable, NSHashTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBSoundController : NSObject {
    NSMutableDictionary *_soundsBySystemSoundIDs;
    NSMutableSet *_usedNotificationTypes;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    NSUInteger _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}




+(id)sharedInstance;
-(BOOL)_playFeedback:(id)arg0 ;
-(BOOL)_playSystemSound:(id)arg0 ;
-(BOOL)_playToneAlert:(id)arg0 ;
-(BOOL)handleVolumeButtonDownEvent;
-(BOOL)isPlaying:(id)arg0 ;
-(BOOL)isPlayingAnySound;
-(BOOL)playSound:(id)arg0 environments:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)playSoundWithDefaultEnvironment:(id)arg0 ;
-(BOOL)stopAllSounds;
-(BOOL)stopSound:(id)arg0 ;
-(id)init;
-(void)_beginPendingCallbacksBlock;
-(void)_cleanupSystemSound:(unsigned int)arg0 andKill:(BOOL)arg1 ;
-(void)_cleanupToneAlertForSound:(id)arg0 andKill:(BOOL)arg1 ;
-(void)_endPendingCallbacksBlock;
-(void)_enqueueCallback:(id)arg0 ;
-(void)_ringerStateChanged:(id)arg0 ;
-(void)_soundDidFinishPlaying:(id)arg0 ;
-(void)_soundDidStartPlaying:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif