// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPLAYPAUSEBARITEMSCONTROLLERCHANGE_H
#define PUPLAYPAUSEBARITEMSCONTROLLERCHANGE_H


#import <Foundation/Foundation.h>


@interface PUPlayPauseBarItemsControllerChange : NSObject

@property (nonatomic, setter=_setCurrentPlaybackTimeDidChange:) BOOL currentPlaybackTimeDidChange; // ivar: _currentPlaybackTimeDidChange
@property (readonly, nonatomic) BOOL hasChanges;
@property (nonatomic, setter=_setPlayPauseStateDidChange:) BOOL playPauseStateDidChange; // ivar: _playPauseStateDidChange
@property (nonatomic, setter=_setPlaybackDurationDidChange:) BOOL playbackDurationDidChange; // ivar: _playbackDurationDidChange




@end


#endif