// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSIC2_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSIC2_H

@class MPSectionedIdentifierListPosition, MPSectionedIdentifierList, NSString, MPShuffleableSectionedIdentifierList;
@protocol MPArtworkDataSource, MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCQueueControllerBehaviorMusic, MPCQueueControllerBehaviorDynamicLoadingImplementation, MPCQueueControllerBehaviorTransportableImplementation, MPCQueueControllerBehaviorRestorableImplementation, MPCQueueControllerBehaviorUpNextImplementation, MPCQueueControllerBehaviorHost, MPCQueueControllerBehaviorMusicDelegate;

#import <Foundation/Foundation.h>

#import "_MPCQueueControllerBehaviorMusic_Swift.h"

@interface _MPCQueueControllerBehaviorMusic2 : NSObject <MPArtworkDataSource, MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCQueueControllerBehaviorMusic, MPCQueueControllerBehaviorDynamicLoadingImplementation, MPCQueueControllerBehaviorTransportableImplementation, MPCQueueControllerBehaviorRestorableImplementation, MPCQueueControllerBehaviorUpNextImplementation>

 {
    unsigned short _activeItemFlags;
    id *_loadAdditionalItemsCompletion;
}


@property (nonatomic) BOOL allowsQueueModifications;
@property (readonly, nonatomic) BOOL autoPlayEnabled;
@property (retain, nonatomic) MPSectionedIdentifierListPosition *autoPlayEndPosition; // ivar: _autoPlayEndPosition
@property (retain, nonatomic) MPSectionedIdentifierList *autoPlayIdentifierList; // ivar: _autoPlayIdentifierList
@property (nonatomic) BOOL autoPlayIsTriggered; // ivar: _autoPlayIsTriggered
@property (nonatomic) NSInteger autoPlayState; // ivar: _autoPlayState
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUserMutations; // ivar: _hasUserMutations
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerBehaviorHost> *host; // ivar: _host
@property (retain, nonatomic) MPShuffleableSectionedIdentifierList *identifierList; // ivar: _identifierList
@property (weak, nonatomic) NSObject<MPCQueueControllerBehaviorMusicDelegate> *musicBehaviorDelegate; // ivar: _musicBehaviorDelegate
@property (readonly, nonatomic) NSInteger preferredUpcomingItemCount;
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) _MPCQueueControllerBehaviorMusic_Swift *swift; // ivar: _swift


+(BOOL)canLoadQueue:(id)arg0 reason:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)makeExtensionWithInvalidatable:(id)arg0 ;
-(BOOL)_allDataSourcesSupportInsertionPositionLast;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)canJumpToContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canNextItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canPreviousItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canRemoveContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canUserChangeRepeatTypeWithReason:(*id)arg0 ;
-(BOOL)canUserChangeShuffleModeWithReason:(*id)arg0 ;
-(BOOL)canUserEnableAutoPlayWithReason:(*id)arg0 ;
-(BOOL)isAutoPlayContentItemID:(id)arg0 ;
-(BOOL)isExportableSessionType:(id)arg0 forContentItemID:(id)arg1 extension:(id)arg2 reason:(*id)arg3 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)isSupportedInsertionPosition:(NSInteger)arg0 fromContentItemID:(id)arg1 reason:(*id)arg2 ;
-(BOOL)itemExistsForContentItemID:(id)arg0 ;
-(NSInteger)_autoplayMode;
-(NSInteger)_countOfItemsWithinSection:(id)arg0 maxCount:(NSInteger)arg1 ;
-(NSInteger)_privateListeningSourceForContext:(id)arg0 ;
-(NSInteger)displayItemCount;
-(id)_componentsForContentItemID:(id)arg0 ;
-(id)_identifierListForSection:(id)arg0 ;
-(id)_itemForComponents:(id)arg0 ;
-(id)_itemForContentItemID:(id)arg0 ;
-(id)_stateDictionaryIncludingQueue:(BOOL)arg0 ;
-(id)componentsForContentItemID:(id)arg0 ;
-(id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)contentItemIDWithoutRepeatIteration:(id)arg0 ;
-(id)debugDescriptionForItem:(id)arg0 inSection:(id)arg1 ;
-(id)debugDescriptionForSection:(id)arg0 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)finalizeStateRestorationWithTargetContentItemID:(id)arg0 completion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;
-(id)performLoadCommand:(id)arg0 completion:(id)arg1 ;
-(id)queueReferencesWithMaxCount:(NSInteger)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_emitEventsForAddingPlaybackContext:(id)arg0 sectionIdentifier:(id)arg1 ;
-(void)_emitEventsForPlaybackBehaviorChange;
-(void)_evaluateLoadingDataSourceItemThresholds;
-(void)_initializeWithCoder:(id)arg0 ;
-(void)_transitionToAutoPlayState:(NSInteger)arg0 ;
-(void)activeItemFlagsDidChange:(unsigned short)arg0 ;
-(void)canReuseQueue:(id)arg0 completion:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)clearAllItemsAfterContentItemID:(id)arg0 ;
-(void)connectToHost:(id)arg0 ;
-(void)currentItemDidChangeFromContentItemID:(id)arg0 toContentItemID:(id)arg1 ;
-(void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg0 ;
-(void)didReachEndOfQueueWithReason:(id)arg0 ;
-(void)disconnectFromHost:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)findFirstContentItemIDForItemIntersectingIdentifierSet:(id)arg0 completion:(id)arg1 ;
-(void)getSharedQueueTracklistWithStartingContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)loadAdditionalUpcomingItems:(NSInteger)arg0 completion:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveContentItemID:(id)arg0 afterContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)moveContentItemID:(id)arg0 beforeContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)performInsertCommand:(id)arg0 targetContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)removeContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)reshuffleWithTargetContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)restoreWithSharedCoder:(id)arg0 block:(id)arg1 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidAddItems:(id)arg1 toSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidMoveItems:(id)arg1 inSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidRemoveItems:(id)arg1 fromSection:(id)arg2 ;
-(void)sectionedIdentifierList:(id)arg0 dataSourceDidUpdateItems:(id)arg1 inSection:(id)arg2 ;


@end


#endif