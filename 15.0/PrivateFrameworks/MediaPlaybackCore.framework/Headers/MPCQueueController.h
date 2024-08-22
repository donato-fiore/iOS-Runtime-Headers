// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCQUEUECONTROLLER_H
#define MPCQUEUECONTROLLER_H

@class AVPlayerPlaybackCoordinator, MPSectionedIdentifierListPosition, MPSectionedIdentifierList, NSMutableDictionary, MPAVItem, NSString, MPShuffleableSectionedIdentifierList, MPIdentifierSet, NSArray, NSError;
@protocol MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCPlaybackEngineEventObserving, MPArtworkDataSource, MPCQueueItemProviding, MPAVQueueController, MSVSegmentedCoding, MPCQueueControllerCommandInterposingHost, MPAVQueueControllerDelegate, MPAVQueueCoordinating;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCQueueController : NSObject <MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCPlaybackEngineEventObserving, MPArtworkDataSource, MPCQueueItemProviding, MPAVQueueController, MSVSegmentedCoding, MPCQueueControllerCommandInterposingHost>

 {
    NSUInteger _stateHandle;
    AVPlayerPlaybackCoordinator *_playbackCoordinator;
}


@property (nonatomic) BOOL allowsQueueModifications; // ivar: _allowsQueueModifications
@property (nonatomic) BOOL autoPlayEnabled;
@property (retain, nonatomic) MPSectionedIdentifierListPosition *autoPlayEndPosition; // ivar: _autoPlayEndPosition
@property (retain, nonatomic) MPSectionedIdentifierList *autoPlayIdentifierList; // ivar: _autoPlayIdentifierList
@property (nonatomic) BOOL autoPlayIsTriggered; // ivar: _autoPlayIsTriggered
@property (nonatomic) NSInteger autoPlayState; // ivar: _autoPlayState
@property (readonly, nonatomic, getter=_autoplayMode) NSInteger autoplayMode;
@property (retain, nonatomic) NSMutableDictionary *coderVersions; // ivar: _coderVersions
@property (readonly, nonatomic) BOOL containsTransportableContent;
@property (retain, nonatomic) MPAVItem *currentItem; // ivar: _currentItem
@property (readonly, nonatomic, getter=isCurrentItemFromAutoPlay) BOOL currentItemFromAutoPlay;
@property (retain, nonatomic) NSMutableDictionary *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deferredNextContentItemAnchorID; // ivar: _deferredNextContentItemAnchorID
@property (weak, nonatomic) NSObject<MPAVQueueControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayCount;
@property (readonly, nonatomic) BOOL hasUserMutations; // ivar: _hasUserMutations
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPShuffleableSectionedIdentifierList *identifierList; // ivar: _identifierList
@property (nonatomic, getter=isInSharedListeningMode) BOOL inSharedListeningMode; // ivar: _inSharedListeningMode
@property (readonly, nonatomic) CGFloat lastSavedTime; // ivar: _lastSavedTime
@property (copy, nonatomic) MPIdentifierSet *missingIdentifierSetForDebugging; // ivar: _missingIdentifierSetForDebugging
@property (copy, nonatomic) NSString *nextContentItemID; // ivar: _nextContentItemID
@property (nonatomic) NSInteger nextContentItemIDReason; // ivar: _nextContentItemIDReason
@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, copy, nonatomic) NSString *preferredFirstContentItemID; // ivar: _preferredFirstContentItemID
@property (copy, nonatomic) NSArray *previousSectionIDsForDebugging; // ivar: _previousSectionIDsForDebugging
@property (retain, nonatomic) NSObject<MPAVQueueCoordinating> *queueCoordinator; // ivar: _queueCoordinator
@property (nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (copy, nonatomic) NSError *restorationError; // ivar: _restorationError
@property (copy, nonatomic) NSString *restoreLastStartTimePositionToContentItemID; // ivar: _restoreLastStartTimePositionToContentItemID
@property (readonly, copy, nonatomic) NSString *revisionString;
@property (retain, nonatomic) id *rtcSessionHierarchyToken; // ivar: _rtcSessionHierarchyToken
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedInsertionPositions;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;
@property (readonly, nonatomic) BOOL userCanEnableAutoPlay;


+(BOOL)supportsSecureCoding;
+(id)describePlayer:(id)arg0 ;
-(BOOL)_allDataSourcesSupportInsertionPositionLast;
-(BOOL)_isAutoPlayItem:(id)arg0 inSection:(id)arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)canSkipInDirection:(NSInteger)arg0 fromQueueItem:(id)arg1 ;
-(BOOL)canSkipItem:(id)arg0 ;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(NSInteger)_privateListeningSourceForContext:(id)arg0 ;
-(NSInteger)displayIndexForContentItemID:(id)arg0 ;
-(NSInteger)versionForSegment:(id)arg0 ;
-(id)_accountForAutoPlay;
-(id)_contentItemIDWithOffset:(NSInteger)arg0 fromItem:(id)arg1 mode:(NSInteger)arg2 didReachEnd:(*BOOL)arg3 ;
-(id)_firstContentItemID;
-(id)_firstContentItemIDInSection:(id)arg0 ;
-(id)_identifierListForSection:(id)arg0 ;
-(id)_identifierListIDPairForQueueIDPair:(id)arg0 ;
-(id)_itemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)_itemForPair:(id)arg0 ;
-(id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg0 wasInvalid:(*BOOL)arg1 ;
-(id)_queueIDPairForIdentifierListIDPair:(id)arg0 ;
-(id)_stateDictionaryIncludingIdentifierList:(BOOL)arg0 ;
-(id)contentItemIDAtIndex:(NSInteger)arg0 ;
-(id)contentItemIDWithCurrentItemOffset:(NSInteger)arg0 mode:(NSInteger)arg1 didReachEnd:(*BOOL)arg2 ;
-(id)contentItemIDsFromOffset:(NSInteger)arg0 toOffset:(NSInteger)arg1 nowPlayingIndex:(*NSInteger)arg2 ;
-(id)debugDescriptionForItem:(id)arg0 inSection:(id)arg1 ;
-(id)debugDescriptionForSection:(id)arg0 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)itemForContentItemID:(id)arg0 ;
-(id)itemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)itemToFollowItem:(id)arg0 direction:(NSInteger)arg1 distance:(NSInteger)arg2 jumpToItem:(BOOL)arg3 allowReuse:(BOOL)arg4 ;
-(id)queueCoordinator:(id)arg0 itemToFollowItem:(id)arg1 ;
-(id)queueReferencesWithMaxCount:(NSInteger)arg0 ;
-(id)requestedPropertySetForEvents;
-(id)segmentForCodingKey:(id)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_addAutoPlayPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 afterContentItemID:(id)arg2 sectionIdentifier:(id)arg3 actions:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)_addPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 afterContentItemID:(id)arg2 sectionIdentifier:(id)arg3 actions:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)_applyVolumeNormalizationForQueuedItems;
-(void)_currentItemDidChangeFromItem:(id)arg0 toItem:(id)arg1 ;
-(void)_emitEventsForAddingPlaybackContext:(id)arg0 sectionIdentifier:(id)arg1 sharedListeningContainerInfo:(id)arg2 ;
-(void)_emitEventsForItemChangeFromItem:(id)arg0 toCurrentItem:(id)arg1 ;
-(void)_emitEventsForPlaybackBehaviorChange;
-(void)_endSynchronizedPlayback;
-(void)_findDataSourceToLoadItemsAfterItem:(id)arg0 deletedItemsCount:(id)arg1 sectionIdentifier:(id)arg2 withLoadingBlock:(id)arg3 ;
-(void)_findDataSourceToLoadItemsAfterItem:(id)arg0 sectionIdentifier:(id)arg1 withLoadingBlock:(id)arg2 ;
-(void)_getSharedQueueTracklistWithCompletion:(id)arg0 ;
-(void)_highQualityMusicStreamingOnCellularDidChange:(id)arg0 ;
-(void)_loadAdditionalItemsIfNeededForDataSourceState:(id)arg0 preferredItemCount:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_loadAdditionalItemsIfNeededForDataSourceState:(id)arg0 withCount:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)_loadItemsAfterItemsDeletedIfNeededDeletedItemsCount:(NSInteger)arg0 ;
-(void)_soundCheckEnabledChangedNotification:(id)arg0 ;
-(void)_transitionToAutoPlayState:(NSInteger)arg0 ;
-(void)addPlaybackContext:(id)arg0 afterContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)addPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 jumpToIt:(BOOL)arg2 completion:(id)arg3 ;
-(void)addPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 jumpToIt:(BOOL)arg2 userModification:(BOOL)arg3 completion:(id)arg4 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)clearUpNext;
-(void)dealloc;
-(void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg0 ;
-(void)didRestoreVersion:(NSInteger)arg0 forSegment:(id)arg1 ;
-(void)emitEventsForAddedSharedListeningContainerInfo:(id)arg0 ;
-(void)emitEventsForParticipants:(id)arg0 localUserIdentifier:(id)arg1 ;
-(void)emitSharedListeningEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)engine:(id)arg0 didChangeItemElapsedTime:(CGFloat)arg1 rate:(float)arg2 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 didReachEndOfQueueWithReason:(id)arg1 ;
-(void)explicitContentStateDidChange:(NSInteger)arg0 ;
-(void)finalizeStateRestorationWithCompletion:(id)arg0 ;
-(void)incrementVersionForSegment:(id)arg0 ;
-(void)jumpToContentItemID:(id)arg0 ;
-(void)jumpToContentItemID:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)jumpToFirstContentItem;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveContentItemID:(id)arg0 afterContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)moveContentItemID:(id)arg0 beforeContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)player:(id)arg0 currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)playerItemDidBecomeCurrent:(id)arg0 ;
-(void)playerItemDidResignCurrent:(id)arg0 ;
-(void)queueCoordinator:(id)arg0 didLoadItem:(id)arg1 ;
-(void)queueCoordinator:(id)arg0 failedToLoadItem:(id)arg1 ;
-(void)queueCoordinator:(id)arg0 willLoadItem:(id)arg1 ;
-(void)queueCoordinatorDidChangeItems:(id)arg0 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg0 ;
-(void)reloadWithPlaybackContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)resetWithIdentifier:(id)arg0 ;
-(void)reshuffle;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidAddItems:(id)arg1 toSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidChangeItems:(id)arg1 inSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidMoveItems:(id)arg1 inSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidRemoveItems:(id)arg1 fromSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidUpdateSection:(id)arg1 ;
-(void)sessionDidEnd;
-(void)sharedCurrentItemChangedToItem:(id)arg0 inSection:(id)arg1 byParticipant:(id)arg2 ;
-(void)updateLocationDependentPropertiesForItem:(id)arg0 ;
-(void)updatePlayerPlaybackCoordinator:(id)arg0 ;


@end


#endif