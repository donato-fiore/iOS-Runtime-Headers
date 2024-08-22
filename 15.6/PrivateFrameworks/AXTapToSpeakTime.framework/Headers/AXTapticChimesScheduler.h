// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXTAPTICCHIMESSCHEDULER_H
#define AXTAPTICCHIMESSCHEDULER_H

@class NSString, PCSimpleTimer, AVAudioPlayer, NSDate;
@protocol AVAudioPlayerDelegate;

#import <Foundation/Foundation.h>

#import "AXTapticChimeAsset.h"

@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate>

 {
    NSString *_pcServiceIdentifier;
    PCSimpleTimer *_chimeTimer;
    AVAudioPlayer *_audioPlayer;
    NSString *_previousAudioSessionCategory;
    AXTapticChimeAsset *_currentChimeAsset;
    unsigned int _audioPlaybackPowerAssertionID;
    NSDate *_lastExpectedWakeTime;
    NSDate *_lastActualWakeTime;
    NSDate *_lastExpectedChimeTime;
    NSDate *_lastActualChimeTime;
    float _lastMediaVolume;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initializeIfNeeded;
-(BOOL)_outputTapticChime:(id)arg0 atDate:(id)arg1 ;
-(BOOL)canPlayScheduledTapticChime;
-(BOOL)canPlayTapticChime;
-(BOOL)canScheduleTapticChimes;
-(BOOL)processIsAllowedToInterfaceWithNanoMediaRemote;
-(BOOL)processIsAllowedToScheduleChimes;
-(CGFloat)_prePlayAudioTimeInterval;
-(CGFloat)_preWakeTimeInterval;
-(id)_currentDate;
-(id)_init;
-(id)nextChimeAssetForStartDate:(id)arg0 frequency:(NSInteger)arg1 soundType:(NSInteger)arg2 timeIntervalUntilChime:(*CGFloat)arg3 ;
-(unsigned int)_createPowerAssertionWithName:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_chimeDidFinishPlaying;
-(void)_chimeWakeTimerFired:(id)arg0 ;
-(void)_clearChimeTimer;
-(void)_denormalizeVolumeIfNecessary;
-(void)_normalizeVolumeIfNecessary;
-(void)_previewChimes;
-(void)_previewChimesForStartDate:(id)arg0 chimeDate:(id)arg1 frequency:(NSInteger)arg2 soundType:(NSInteger)arg3 ;
-(void)_registerForNotifications;
-(void)_releasePowerAssertionIfPossible:(unsigned int)arg0 ;
-(void)_scheduleChimeTimer;
-(void)_tapticChimesStateDidChange:(BOOL)arg0 ;
-(void)_unregisterForNotifications;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif