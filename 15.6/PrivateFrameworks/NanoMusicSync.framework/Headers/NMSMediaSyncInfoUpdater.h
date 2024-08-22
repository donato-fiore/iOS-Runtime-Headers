// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASYNCINFOUPDATER_H
#define NMSMEDIASYNCINFOUPDATER_H

@class NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, ATAssetLinkController, NSString, NSPersistentHistoryToken;
@protocol MTDBExtensionAccessObserver, ATAssetLinkControllerObserver, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NMSMediaSyncInfoUpdater : NSObject <MTDBExtensionAccessObserver, ATAssetLinkControllerObserver>

 {
    NSMutableDictionary *_syncInfo;
    NSMutableOrderedSet *_targetsNeedingSyncInfoSynchronize;
    NSObject<OS_dispatch_source> *_currentSyncInfoSynchronizeTimer;
    NSOperationQueue *_queue;
    BOOL _observing;
    ATAssetLinkController *_assetLinkController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPersistentHistoryToken *lastToken; // ivar: _lastToken
@property (readonly) Class superclass;


+(id)sharedMediaSyncInfoUpdater;
-(BOOL)_changeContainsRelevantEpisodeChanges:(id)arg0 ;
-(BOOL)_didFindRelevantChangesForTransaction:(id)arg0 ;
-(id)_relevantEpisodeProperties;
-(id)init;
-(void)_applyUpdatesFromAsset:(id)arg0 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg0 ;
-(void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMusicRecommendationsDidUpdateNotification:(id)arg0 ;
-(void)_handlePersistentStoreRemoteChangeNotification:(id)arg0 ;
-(void)_resetPersistentHistoryTokenAndNotifyObservers;
-(void)_setNeedsMediaSyncInfoUpdate;
-(void)assetLinkController:(id)arg0 didEnqueueAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didFinishAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAssetState:(id)arg1 ;
-(void)beginUpdatingSyncInfo;
-(void)endUpdatingSyncInfo;
-(void)extensionAccessDidChange;


@end


#endif