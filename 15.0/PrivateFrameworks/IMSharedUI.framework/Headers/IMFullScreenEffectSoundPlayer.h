// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFULLSCREENEFFECTSOUNDPLAYER_H
#define IMFULLSCREENEFFECTSOUNDPLAYER_H

@class NSString, NSURL;
@protocol IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer, IMFullScreenEffectSoundPlayerDelegate;

#import <Foundation/Foundation.h>

#import "IMAudioController.h"

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer>



@property (retain, nonatomic) IMAudioController *audioController; // ivar: _audioController
@property (nonatomic) float currentVolume; // ivar: _currentVolume
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMFullScreenEffectSoundPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasHapticTrack; // ivar: _hasHapticTrack
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *soundURL; // ivar: _soundURL
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;


-(BOOL)_supportsSoundEffects;
-(id)_ensureAudioPlayer;
-(id)initWithSoundURL:(id)arg0 hasHapticTrack:(BOOL)arg1 ;
-(void)_audioSessionOptionsWillChange:(id)arg0 ;
-(void)_didPrepare;
-(void)_didStart;
-(void)_didStop;
-(void)audioController:(id)arg0 didChangeProgressForContentAtURL:(id)arg1 currentTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)audioController:(id)arg0 didPrepareToPlayContentAtURL:(id)arg1 successfully:(BOOL)arg2 ;
-(void)prepareToPlaySound;
-(void)startPlayingSound;
-(void)stopPlayingSound;


@end


#endif