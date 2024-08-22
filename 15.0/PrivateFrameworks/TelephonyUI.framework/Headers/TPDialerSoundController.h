// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPDIALERSOUNDCONTROLLER_H
#define TPDIALERSOUNDCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPDialerSoundController : NSObject {
    *__CFSet _inflightSounds;
    BOOL _soundsActivated;
}


@property NSUInteger incompleteSoundCount; // ivar: _incompleteSoundCount


+(void)_delayedDeactivate;
-(id)init;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg0 ;
-(void)applicationResumedNotification:(id)arg0 ;
-(void)applicationSuspendedNotification:(id)arg0 ;
-(void)dealloc;
-(void)playSoundForDialerCharacter:(NSInteger)arg0 ;
-(void)setSoundsActivated:(BOOL)arg0 ;
-(void)soundCompletedPlaying:(unsigned int)arg0 ;
-(void)stopSoundForDialerCharacter:(NSInteger)arg0 ;


@end


#endif