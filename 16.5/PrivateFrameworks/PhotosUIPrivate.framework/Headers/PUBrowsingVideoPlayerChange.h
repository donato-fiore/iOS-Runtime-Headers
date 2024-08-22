// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBROWSINGVIDEOPLAYERCHANGE_H
#define PUBROWSINGVIDEOPLAYERCHANGE_H



#import "PUViewModelChange.h"

@interface PUBrowsingVideoPlayerChange : PUViewModelChange

@property (nonatomic, setter=_setAudioSessionVolumeIncreaseDidOccur:) BOOL audioSessionVolumeIncreaseDidOccur; // ivar: _audioSessionVolumeIncreaseDidOccur
@property (nonatomic, setter=_setAudioStatusDidChange:) BOOL audioStatusDidChange; // ivar: _audioStatusDidChange
@property (nonatomic, setter=_setAVPlayerDidChange:) BOOL avPlayerDidChange; // ivar: _avPlayerDidChange
@property (nonatomic, setter=_setDesiredPlayStateDidChange:) BOOL desiredPlayStateDidChange; // ivar: _desiredPlayStateDidChange
@property (nonatomic, setter=_setErrorDidChange:) BOOL errorDidChange; // ivar: _errorDidChange
@property (nonatomic, setter=_setActivatedDidChange:) BOOL isActivatedDidChange; // ivar: _isActivatedDidChange
@property (nonatomic, setter=_setAtBeginningDidChange:) BOOL isAtBeginningDidChange; // ivar: _isAtBeginningDidChange
@property (nonatomic, setter=_setAtEndDidChange:) BOOL isAtEndDidChange; // ivar: _isAtEndDidChange
@property (nonatomic, setter=_setIsMutedDidChange:) BOOL isMutedDidChange; // ivar: _isMutedDidChange
@property (nonatomic, setter=_setPlayableDidChange:) BOOL isPlayableDidChange; // ivar: _isPlayableDidChange
@property (nonatomic, setter=_setPlayerLoadingAllowedDidChange:) BOOL isPlayerLoadingAllowedDidChange; // ivar: _isPlayerLoadingAllowedDidChange
@property (nonatomic, setter=_setPlayingAllowedDidChange:) BOOL isPlayingAllowedDidChange; // ivar: _isPlayingAllowedDidChange
@property (nonatomic, setter=_setStalledDidChange:) BOOL isStalledDidChange; // ivar: _isStalledDidChange
@property (nonatomic, setter=_setPlayStateDidChange:) BOOL playStateDidChange; // ivar: _playStateDidChange
@property (nonatomic, setter=_setPlayerItemDidChange:) BOOL playerItemDidChange; // ivar: _playerItemDidChange


-(BOOL)hasChanges;


@end


#endif