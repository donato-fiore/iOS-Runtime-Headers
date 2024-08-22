// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMEDIAREMOTEMIDDLEWARE_H
#define MPCMEDIAREMOTEMIDDLEWARE_H

@class NSString, NSArray, NSIndexPath, MPSectionedCollection;
@protocol MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, MPMiddleware, MPCSupportedCommands;

#import <Foundation/Foundation.h>

#import "MPCMediaRemoteController.h"
#import "MPCFuture.h"

@interface MPCMediaRemoteMiddleware : NSObject <MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, MPMiddleware>



@property (retain, nonatomic) MPCMediaRemoteController *controller; // ivar: _controller
@property (retain, nonatomic) MPCFuture *controllerFuture; // ivar: _controllerFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (nonatomic) NSInteger playerState; // ivar: _playerState
@property (copy, nonatomic) NSIndexPath *playingIndexPath; // ivar: _playingIndexPath
@property (retain, nonatomic) MPSectionedCollection *queueContentItems; // ivar: _queueContentItems
@property (copy, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (retain, nonatomic) MPSectionedCollection *queueModelObjects; // ivar: _queueModelObjects
@property (readonly, nonatomic) BOOL skippedMetadata; // ivar: _skippedMetadata
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MPCSupportedCommands> *supportedCommands; // ivar: _supportedCommands


-(BOOL)playerCommandEnabled:(BOOL)arg0 command:(unsigned int)arg1 chain:(id)arg2 ;
-(BOOL)playerCommandSupported:(BOOL)arg0 command:(unsigned int)arg1 chain:(id)arg2 ;
-(BOOL)playerIsSharedListeningSession:(BOOL)arg0 chain:(id)arg1 ;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(BOOL)playerItemShouldDisableJumpToItem:(BOOL)arg0 atIndexPath:(id)arg1 boundsCheck:(BOOL)arg2 chain:(id)arg3 ;
-(BOOL)sectionIsAutoPlaySection:(BOOL)arg0 atIndex:(NSInteger)arg1 chain:(id)arg2 ;
-(NSInteger)activeAudioFormatJustification:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerExplicitContentState:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerGlobalItemCount:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerItemEditingStyleFlags:(NSInteger)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(NSInteger)playerLastChangeDirection:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerPlayingItemGlobalIndex:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerQueueEndAction:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerRepeatType:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerShuffleType:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerState:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)playerUpNextItemCount:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)sessionNumberOfPlayerPaths:(NSInteger)arg0 chain:(id)arg1 ;
-(NSInteger)sessionNumberOfSessions:(NSInteger)arg0 forPlayerPathAtIndex:(NSInteger)arg1 chain:(id)arg2 ;
-(NSUInteger)audioFormatPreference:(NSUInteger)arg0 chain:(id)arg1 ;
-(NSUInteger)playerNumberOfItems:(NSUInteger)arg0 inSection:(NSUInteger)arg1 chain:(id)arg2 ;
-(NSUInteger)playerNumberOfSections:(NSUInteger)arg0 chain:(id)arg1 ;
-(float)_playbackRateForContentItem:(id)arg0 ;
-(id)_stateDumpObject;
-(id)_supportedCommands:(unsigned int)arg0 infoValueForKey:(id)arg1 ;
-(id)activeAudioFormat:(id)arg0 chain:(id)arg1 ;
-(id)alternateAudioFormats:(id)arg0 chain:(id)arg1 ;
-(id)audioRoute:(id)arg0 chain:(id)arg1 ;
-(id)controller:(id)arg0 chain:(id)arg1 ;
-(id)operationsForPlayerRequest:(id)arg0 ;
-(id)operationsForRequest:(id)arg0 ;
-(id)operationsForSessionRequest:(id)arg0 ;
-(id)playerCommandOptionValue:(id)arg0 forKey:(id)arg1 command:(unsigned int)arg2 chain:(id)arg3 ;
-(id)playerItemCurrentLanguageOptions:(id)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(id)playerItemExplicitBadge:(id)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(id)playerItemLanguageOptionGroups:(id)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(id)playerItemLocalizedDurationString:(id)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(id)playerModelObject:(id)arg0 propertySet:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerPlayingItemIndexPath:(id)arg0 chain:(id)arg1 ;
-(id)preferredAudioFormat:(id)arg0 chain:(id)arg1 ;
-(id)sessionMetadataObject:(id)arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;
-(id)sessionPlayerPath:(id)arg0 atIndex:(NSInteger)arg1 chain:(id)arg2 ;
-(id)tracklistUniqueIdentifier:(id)arg0 chain:(id)arg1 ;
-(struct ? )playerItemDuration:(struct ? )arg0 atIndexPath:(id)arg1 chain:(id)arg2 ;


@end


#endif