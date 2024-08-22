// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVNOWPLAYINGINFOCONTROLLER_H
#define AVNOWPLAYINGINFOCONTROLLER_H

@class NSString, NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPlayerController.h"

@interface AVNowPlayingInfoController : NSObject {
    id *_playerControllerCurrentTimeJumpedObserver;
    BOOL _nowPlayingInfoNeedsUpdate;
    BOOL _enabled;
    *void _commandHandlerIdentifier;
    AVObservationController *_keyValueObservationController;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}


@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // ivar: _overrideParentApplicationDisplayIdentifier
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (weak, nonatomic) AVPlayerController *playerControllerToActivateAfterDelay; // ivar: _playerControllerToActivateAfterDelay
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (weak, nonatomic) NSTimer *startNowPlayingUpdatesTimer; // ivar: _startNowPlayingUpdatesTimer
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(*void)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg0 ;
+(*void)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg0 ;
+(id)_avMediaCharacteristics;
+(id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg0 ;
+(id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg0 ;
+(void)sharedNowPlayingInfoControllerWithCompletion:(id)arg0 ;
-(id)_availableLanguageOptions;
-(id)_createNowPlayingInfoFromPlaybackInfo:(id)arg0 ;
-(id)_currentLanguageOptions;
-(id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg0 ;
-(id)_makePlaybackInfoDictionary;
-(id)init;
-(unsigned int)_handleRemoteCommand:(unsigned int)arg0 options:(id)arg1 ;
-(void)_setNowPlayingInfoNeedsUpdate;
-(void)_updateNowPlayingInfo:(id)arg0 commandsAndStates:(id)arg1 ;
-(void)_updateNowPlayingInfoIfNeeded;
-(void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg0 ;
-(void)dealloc;
-(void)startNowPlayingUpdatesForPlayerController:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)stopNowPlayingUpdatesForPlayerController:(id)arg0 ;


@end


#endif