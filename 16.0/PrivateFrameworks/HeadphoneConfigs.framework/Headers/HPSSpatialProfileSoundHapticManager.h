// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSSPATIALPROFILESOUNDHAPTICMANAGER_H
#define HPSSPATIALPROFILESOUNDHAPTICMANAGER_H

@class CHHapticEngine;
@protocol CHHapticAdvancedPatternPlayer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HPSSpatialProfileSoundHapticManager : NSObject {
    CHHapticEngine *_engine;
    id<CHHapticAdvancedPatternPlayer> *_scanLockPlayer;
    id<CHHapticAdvancedPatternPlayer> *_scanInProgressPlayer;
    id<CHHapticAdvancedPatternPlayer> *_scanFirstTickPlayer;
    id<CHHapticAdvancedPatternPlayer> *_scanSecondTickPlayer;
    id<CHHapticAdvancedPatternPlayer> *_scanCompletedPlayer;
    id<CHHapticAdvancedPatternPlayer> *_scanErrorPlayer;
    id<CHHapticAdvancedPatternPlayer> *_enrollmentCompletedPlayer;
    NSObject<OS_dispatch_queue> *_soundHapticSerialQueue;
}




-(id)init;
-(id)initPlayerWithFileName:(id)arg0 ;
-(void)pauseProgressPlayer;
-(void)playProgressPlayer:(int)arg0 ;
-(void)setProgressPlayerPitch:(float)arg0 ;
-(void)setupPlayers;
-(void)start;
-(void)stop;
-(void)triggerSoundHapticForEarCaptureState:(int)arg0 completion:(id)arg1 ;
-(void)triggerSoundHapticForEnrollmentState:(int)arg0 completion:(id)arg1 ;


@end


#endif