// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPREMOTECOMMANDCENTER_H
#define MPREMOTECOMMANDCENTER_H

@class NSMutableArray, NSString, MRPlayerPath;
@protocol MPRemoteCommandDelegate_Internal, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPFeedbackCommand.h"
#import "MPAdvanceRepeatModeCommand.h"
#import "MPAdvanceShuffleModeCommand.h"
#import "MPChangePlaybackPositionCommand.h"
#import "MPChangePlaybackRateCommand.h"
#import "MPChangeQueueEndActionCommand.h"
#import "MPChangeRepeatModeCommand.h"
#import "MPChangeShuffleModeCommand.h"
#import "MPRemoteCommand.h"
#import "MPInsertIntoPlaybackQueueCommand.h"
#import "MPPreloadPlaybackSessionCommand.h"
#import "MPRatingCommand.h"
#import "MPReorderQueueCommand.h"
#import "MPSetPlaybackQueueCommand.h"
#import "MPSetPlaybackSessionCommand.h"
#import "MPSetPriorityForPlaybackSessionCommand.h"
#import "MPSkipIntervalCommand.h"

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal>

 {
    NSMutableArray *_activeCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id *_mediaRemoteCommandHandler;
    BOOL _scheduledSupportedCommandsChangedNotification;
    BOOL _commandHandlersRegistered;
    BOOL _canBeNowPlayingApplication;
    BOOL _invalidated;
    BOOL _processingEvent;
    NSMutableArray *_eventQueue;
    NSUInteger _stateHandler;
}


@property (readonly, nonatomic) MPFeedbackCommand *addItemToLibraryCommand; // ivar: _addItemToLibraryCommand
@property (readonly, nonatomic) MPFeedbackCommand *addNowPlayingItemToLibraryCommand; // ivar: _addNowPlayingItemToLibraryCommand
@property (readonly, nonatomic) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand; // ivar: _advanceRepeatModeCommand
@property (readonly, nonatomic) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand; // ivar: _advanceShuffleModeCommand
@property (readonly, nonatomic) MPFeedbackCommand *bookmarkCommand; // ivar: _bookmarkCommand
@property (readonly, nonatomic) BOOL canBeNowPlayingApplication;
@property (readonly, nonatomic) MPChangePlaybackPositionCommand *changePlaybackPositionCommand; // ivar: _changePlaybackPositionCommand
@property (readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand; // ivar: _changePlaybackRateCommand
@property (readonly, nonatomic) MPChangeQueueEndActionCommand *changeQueueEndActionCommand; // ivar: _changeQueueEndActionCommand
@property (readonly, nonatomic) MPChangeRepeatModeCommand *changeRepeatModeCommand; // ivar: _changeRepeatModeCommand
@property (readonly, nonatomic) MPChangeShuffleModeCommand *changeShuffleModeCommand; // ivar: _changeShuffleModeCommand
@property (readonly, nonatomic) BOOL commandHandlersRegistered;
@property (readonly, nonatomic) MPRemoteCommand *createRadioStationCommand; // ivar: _createRadioStationCommand
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAutomaticCanBeNowPlaying; // ivar: _disableAutomaticCanBeNowPlaying
@property (readonly, nonatomic) MPRemoteCommand *disableLanguageOptionCommand; // ivar: _disableLanguageOptionCommand
@property (readonly, nonatomic) MPRemoteCommand *discardPlaybackSessionCommand; // ivar: _discardPlaybackSessionCommand
@property (readonly, nonatomic) MPFeedbackCommand *dislikeCommand; // ivar: _dislikeCommand
@property (readonly, nonatomic) MPRemoteCommand *enableLanguageOptionCommand; // ivar: _enableLanguageOptionCommand
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand; // ivar: _insertIntoPlaybackQueueCommand
@property (readonly, nonatomic) MPRemoteCommand *leaveSharedPlaybackSessionCommand; // ivar: _leaveSharedPlaybackSessionCommand
@property (readonly, nonatomic) MPFeedbackCommand *likeCommand; // ivar: _likeCommand
@property (readonly, nonatomic) MPRemoteCommand *nextTrackCommand; // ivar: _nextTrackCommand
@property (readonly, nonatomic) MPRemoteCommand *pauseCommand; // ivar: _pauseCommand
@property (readonly, nonatomic) MPRemoteCommand *playCommand; // ivar: _playCommand
@property (readonly, nonatomic) MPRemoteCommand *playItemInQueueCommand; // ivar: _playItemInQueueCommand
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) MPRemoteCommand *postEventNoticeCommand; // ivar: _postEventNoticeCommand
@property (readonly, nonatomic) MPPreloadPlaybackSessionCommand *preloadPlaybackSessionCommand; // ivar: _preloadPlaybackSessionCommand
@property (readonly, nonatomic) MPRemoteCommand *prepareForSetPlaybackQueueCommand; // ivar: _prepareForSetPlaybackQueueCommand
@property (readonly, nonatomic) MPRemoteCommand *previousTrackCommand; // ivar: _previousTrackCommand
@property (readonly, nonatomic) MPRatingCommand *ratingCommand; // ivar: _ratingCommand
@property (readonly, nonatomic) MPRemoteCommand *removeFromPlaybackQueueCommand; // ivar: _removeFromPlaybackQueueCommand
@property (readonly, nonatomic) MPReorderQueueCommand *reorderQueueCommand; // ivar: _reorderQueueCommand
@property (readonly, nonatomic) MPRemoteCommand *reshuffleCommand; // ivar: _reshuffleCommand
@property (readonly, nonatomic) MPRemoteCommand *seekBackwardCommand; // ivar: _seekBackwardCommand
@property (readonly, nonatomic) MPRemoteCommand *seekForwardCommand; // ivar: _seekForwardCommand
@property (readonly, nonatomic) MPSetPlaybackQueueCommand *setPlaybackQueueCommand; // ivar: _setPlaybackQueueCommand
@property (readonly, nonatomic) MPSetPlaybackSessionCommand *setPlaybackSessionCommand; // ivar: _setPlaybackSessionCommand
@property (readonly, nonatomic) MPSetPriorityForPlaybackSessionCommand *setPriorityForPlaybackSessionCommand; // ivar: _setPriorityForPlaybackSessionCommand
@property (readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand; // ivar: _skipBackwardCommand
@property (readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand; // ivar: _skipForwardCommand
@property (readonly, nonatomic) MPRemoteCommand *specialSeekBackwardCommand; // ivar: _specialSeekBackwardCommand
@property (readonly, nonatomic) MPRemoteCommand *specialSeekForwardCommand; // ivar: _specialSeekForwardCommand
@property (readonly, nonatomic) MPRemoteCommand *stopCommand; // ivar: _stopCommand
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand; // ivar: _togglePlayPauseCommand
@property (nonatomic) BOOL wantsSerializedEventDelivery; // ivar: _wantsSerializedEventDelivery


+(NSInteger)_numberOfCommandCentersWithTargets;
+(id)commandCenterForPlayerID:(id)arg0 ;
+(id)commandCenterForPlayerPath:(id)arg0 ;
+(id)sharedCommandCenter;
+(void)getPendingCommandTypesWithCompletion:(id)arg0 ;
+(void)updateLaunchCommandsWithConfigurationHandler:(id)arg0 ;
-(BOOL)containsCommand:(id)arg0 ;
-(BOOL)isInvalidated;
-(id)_activeCommands;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg0 mediaRemoteType:(unsigned int)arg1 ;
-(id)_onQueue_stateDictionary;
-(id)initWithPlayerID:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(void)_commandTargetsDidChangeNotification:(id)arg0 ;
-(void)_flushEventQueue;
-(void)_pushMediaRemoteCommand:(unsigned int)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)_scheduleSupportedCommandsChanged;
-(void)_startMediaRemoteSync;
-(void)_stopMediaRemoteSync;
-(void)_updateCanBeNowPlayingApplicationIfNeeded;
-(void)dealloc;
-(void)dispatchCommandEvent:(id)arg0 completion:(id)arg1 ;
-(void)getPendingCommandTypesWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg0 ;


@end


#endif