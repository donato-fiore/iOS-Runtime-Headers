// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBROWSINGIRISPLAYERCHANGE_H
#define PUBROWSINGIRISPLAYERCHANGE_H



#import "PUViewModelChange.h"

@interface PUBrowsingIrisPlayerChange : PUViewModelChange

@property (nonatomic) BOOL activatedDidChange; // ivar: _activatedDidChange
@property (nonatomic) BOOL currentlyDisplayedTimesDidChange; // ivar: _currentlyDisplayedTimesDidChange
@property (nonatomic) BOOL isLivePhotoLoadingAllowedDidChange; // ivar: _isLivePhotoLoadingAllowedDidChange
@property (nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange; // ivar: _isLivePhotoPlaybackAllowedDidChange
@property (nonatomic) BOOL livePhotoDidChange; // ivar: _livePhotoDidChange
@property (nonatomic) BOOL playbackStateDidChange; // ivar: _playbackStateDidChange
@property (nonatomic) BOOL playerDidChange; // ivar: _playerDidChange
@property (nonatomic) BOOL playingDidChange; // ivar: _playingDidChange
@property (nonatomic) BOOL scrubbingPhotoTimeDidChange; // ivar: _scrubbingPhotoTimeDidChange
@property (nonatomic) BOOL vitalityTransformDidChange; // ivar: _vitalityTransformDidChange


-(BOOL)hasChanges;


@end


#endif