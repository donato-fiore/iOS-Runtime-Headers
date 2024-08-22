// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSSYNCMANAGER_H
#define NMSSYNCMANAGER_H

@class ATSession, NSTimer, NSMutableDictionary, NSString;
@protocol ATSessionObserver;

#import <Foundation/Foundation.h>


@interface NMSSyncManager : NSObject <ATSessionObserver>

 {
    ATSession *_observedSession;
    NSTimer *_maskedPendingSyncStateRevealTimer;
    NSMutableDictionary *_syncProgressInfoByAssetType;
}


@property (retain, nonatomic) id *activeSyncSessionIdentifier; // ivar: _activeSyncSessionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)_syncStateForProgressInfo:(id)arg0 session:(id)arg1 ;
+(NSUInteger)_syncWaitingSubstateForProgressInfo:(id)arg0 ;
+(id)_gizmoSyncStates;
+(id)sharedManager;
+(unsigned int)_mediaTypeForAssetType:(id)arg0 ;
-(NSUInteger)_aggregateAssetItemBytesAddedForMediaType:(unsigned int)arg0 ;
-(NSUInteger)_estimatedAssetAggregateItemSizeInBytesWithQuery:(id)arg0 ;
-(NSUInteger)_numberOfItemsNeedingDownloadForAssetType:(id)arg0 ;
-(id)_addedTracksPredicateForMediaType:(unsigned int)arg0 ;
-(id)_addedTracksQueryForMediaType:(unsigned int)arg0 ;
-(id)_assetTypeForMediaType:(unsigned int)arg0 ;
-(id)_defaultProgressInfoDict;
-(id)_defaultSyncProgressInfoForAssetType:(id)arg0 ;
-(id)_syncProgressInfoByAssetType:(id)arg0 ;
-(id)_tracksPredicateWithPersistentIDs:(id)arg0 ;
-(id)_tracksQueryWithPredicate:(id)arg0 ;
-(id)_updateProgressInfoForAssetType:(id)arg0 assetItemsTotal:(NSInteger)arg1 assetItemsSyncedForSyncSession:(NSInteger)arg2 bytesToSyncTotal:(NSUInteger)arg3 bytesSyncedThisSyncSession:(NSUInteger)arg4 ;
-(id)audiobooksProgressInfo;
-(id)init;
-(id)musicProgressInfo;
-(id)podcastsProgressInfo;
-(id)progressInfoForMediaType:(unsigned int)arg0 ;
-(void)_handleSyncStateDidChangeNotification;
-(void)_invokeOnMainThread:(id)arg0 ;
-(void)_startObservingSyncSession;
-(void)_stopObservingSyncSession;
-(void)_updateObservedSyncSession;
-(void)_updateSyncProgress;
-(void)beginReceivingSyncProgressUpdates;
-(void)dealloc;
-(void)session:(id)arg0 didBeginSessionTask:(id)arg1 ;
-(void)session:(id)arg0 didFinishSessionTask:(id)arg1 ;
-(void)session:(id)arg0 didUpdateSessionTask:(id)arg1 ;
-(void)session:(id)arg0 willBeginSessionTask:(id)arg1 ;
-(void)sessionDidFinish:(id)arg0 ;
-(void)sessionWillBegin:(id)arg0 ;


@end


#endif