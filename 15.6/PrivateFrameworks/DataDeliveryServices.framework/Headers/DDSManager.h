// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSMANAGER_H
#define DDSMANAGER_H

@class NSString, NSMutableSet, DDSScheduledTimer;
@protocol DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging, DDSAssetObserving, DDSManagingDelegate, OS_dispatch_queue, DDSAssetProviding, DDSAssetTracking;

#import <Foundation/Foundation.h>

#import "DDSRemoteSyncState.h"

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging>



@property (readonly, nonatomic) NSObject<DDSAssetObserving> *assetObserver; // ivar: _assetObserver
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<DDSManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pendingAssertionsQueue; // ivar: _pendingAssertionsQueue
@property (retain, nonatomic) NSMutableSet *pendingAssertionsToUpdate; // ivar: _pendingAssertionsToUpdate
@property (readonly, nonatomic) NSObject<DDSAssetProviding> *provider; // ivar: _provider
@property (readonly, nonatomic) DDSRemoteSyncState *remoteSyncState; // ivar: _remoteSyncState
@property (readonly) Class superclass;
@property (readonly, nonatomic) DDSScheduledTimer *timer; // ivar: _timer
@property (readonly, nonatomic) NSObject<DDSAssetTracking> *tracker; // ivar: _tracker


-(id)init;
-(id)initWithProvider:(id)arg0 tracker:(id)arg1 ;
-(void)addAssertionForQuery:(id)arg0 policy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)assertionIDsForClientID:(id)arg0 reply:(id)arg1 ;
-(void)beginUpdateCycleForced:(BOOL)arg0 discretionaryDownload:(BOOL)arg1 ;
-(void)deleteV1AssetsIfNecessary;
-(void)didBeginUpdateCatalog;
-(void)didChangeDownloadState:(NSUInteger)arg0 forAsset:(id)arg1 ;
-(void)didCompleteDownloadForAssertion:(id)arg0 error:(id)arg1 ;
-(void)didCompleteDownloadForAssertions:(id)arg0 error:(id)arg1 ;
-(void)didEndUpdateCycleWithError:(id)arg0 ;
-(void)didStartUpdateCycle;
-(void)didUpdateCatalogWithError:(id)arg0 ;
-(void)handleNewAssertions:(id)arg0 ;
-(void)handleRemovedAssertions:(id)arg0 ;
-(void)removeAssertionWithID:(id)arg0 ;
-(void)serverDidUpdateAssetsWithType:(id)arg0 ;
-(void)triggerDump;
-(void)triggerUpdate;
-(void)willRetryUpdateCycle;


@end


#endif