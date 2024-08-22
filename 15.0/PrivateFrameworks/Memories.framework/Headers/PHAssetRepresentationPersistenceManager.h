// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETREPRESENTATIONPERSISTENCEMANAGER_H
#define PHASSETREPRESENTATIONPERSISTENCEMANAGER_H

@class NSMapTable, NSString, NSMutableSet, NSOperationQueue, NSRecursiveLock, NSMutableArray, NSMutableDictionary, NSHashTable;
@protocol PHPhotoLibraryChangeObserver, PHAssetRepresentationDownloadOperationDelegate;


#import "VEiOSSharedObject.h"
#import "VEKReachability.h"
#import "PHAssetRepresentation.h"

@interface PHAssetRepresentationPersistenceManager : VEiOSSharedObject <PHPhotoLibraryChangeObserver, PHAssetRepresentationDownloadOperationDelegate>



@property (retain, nonatomic) NSMapTable *assetRepresentationToPersistenceObserverMap; // ivar: _assetRepresentationToPersistenceObserverMap
@property (nonatomic) BOOL bulkAssetRegistrationRequestCount; // ivar: _bulkAssetRegistrationRequestCount
@property (nonatomic) NSUInteger cellularAuthorization; // ivar: _cellularAuthorization
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *deletedLocalIdentifiers; // ivar: _deletedLocalIdentifiers
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSOperationQueue *downloadQueue; // ivar: _downloadQueue
@property (retain, nonatomic) NSRecursiveLock *downloadsLock; // ivar: _downloadsLock
@property (retain, nonatomic) NSMutableArray *fetchResults; // ivar: _fetchResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VEKReachability *hostReachability; // ivar: _hostReachability
@property (retain, nonatomic) VEKReachability *internetReachability; // ivar: _internetReachability
@property (retain, nonatomic) NSMapTable *localIdentifierToAssetRepresentationMap; // ivar: _localIdentifierToAssetRepresentationMap
@property (retain, nonatomic) NSRecursiveLock *observerLock; // ivar: _observerLock
@property (nonatomic, getter=isOnline) BOOL online; // ivar: _online
@property (retain, nonatomic) PHAssetRepresentation *pendingAssetRepresentation; // ivar: _pendingAssetRepresentation
@property (retain, nonatomic) NSMutableArray *pendingRegistrationLocalIDs; // ivar: _pendingRegistrationLocalIDs
@property (nonatomic) NSUInteger reachabilityStatus; // ivar: _reachabilityStatus
@property (retain, nonatomic) NSMutableSet *recentDownloads; // ivar: _recentDownloads
@property (retain, nonatomic) NSMutableDictionary *recentDownloadsDict; // ivar: _recentDownloadsDict
@property (retain, nonatomic) NSMutableDictionary *requestedDownloadsDict; // ivar: _requestedDownloadsDict
@property (readonly) Class superclass;
@property (retain, nonatomic) NSHashTable *universalPersistenceObservers; // ivar: _universalPersistenceObservers
@property (retain, nonatomic) NSMutableSet *unreadDownloads; // ivar: _unreadDownloads
@property (retain, nonatomic) VEKReachability *wifiReachability; // ivar: _wifiReachability


+(id)sharedManager;
+(void)clearStaticCache;
+(void)purgeSharedInstance;
-(NSUInteger)numberOfRequestedDownloads;
-(NSUInteger)numberOfUnreadDownloads;
-(id)init;
-(id)recentlyDownloadedAssetRepresentations;
-(id)requestedDownloadsPath;
-(id)unreadDownloadedAssetRepresentations;
-(void)beginBulkAssetRegistration;
-(void)cancelAllDownloads;
-(void)cancelDownloadOfAssetRepresentation:(id)arg0 ;
-(void)clearStaticCaches;
-(void)dealloc;
-(void)downloadOperation:(id)arg0 didProgess:(CGFloat)arg1 ;
-(void)downloadOperationDidFinish:(id)arg0 ;
-(void)downloadOperationDidStart:(id)arg0 ;
-(void)endBulkAssetRegistration;
-(void)enumerateObserversOfAssetRepresentation:(id)arg0 withBlock:(id)arg1 ;
-(void)issueRequestedDownloads;
-(void)loadRecentDownloads;
-(void)loadRequestedDownloads;
-(void)markAssetRepresentationAsRecent:(id)arg0 ;
-(void)markAssetRepresentationAsRequested:(id)arg0 ;
-(void)markAssetRepresentationAsUnread:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)reachabilityChanged:(id)arg0 ;
-(void)registerAssetRepresentation:(id)arg0 ;
-(void)registerObserver:(id)arg0 forAssetRepresentation:(id)arg1 ;
-(void)requestDownloadOfAssetRepresentation:(id)arg0 ;
-(void)requestDownloadOfAssetRepresentation:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)saveRecentDownloads;
-(void)saveRequestedDownloads;
-(void)setPersistenceState:(NSUInteger)arg0 ofAssetRepresentation:(id)arg1 ;
-(void)submitDownloadOperationForAssetRepresentation:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)unmarkAssetRepresentationAsRecent:(id)arg0 ;
-(void)unmarkAssetRepresentationAsRequested:(id)arg0 ;
-(void)unregisterAssetRepresentation:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 forAssetRepresentation:(id)arg1 ;
-(void)updateOnlineStatus;


@end


#endif