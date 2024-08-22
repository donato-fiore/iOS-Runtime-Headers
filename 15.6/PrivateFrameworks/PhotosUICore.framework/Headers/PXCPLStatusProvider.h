// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCPLSTATUSPROVIDER_H
#define PXCPLSTATUSPROVIDER_H

@class CPLStatus, NSProgress, PHPhotoLibrary, PLPhotoLibrary, NSString;
@protocol CPLStatusDelegate, PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXCPLSyncActivity.h"
#import "PXFetchResultCountObserver.h"
#import "PXCloudQuotaOfferProvider.h"
#import "PXCloudQuotaPremiumOfferProvider.h"
#import "PXCPLStatus.h"

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider>

 {
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    PXCPLSyncActivity *_syncActivity;
    NSUInteger _syncProgressState;
    id *_syncProgressSubscriber;
    NSProgress *_syncProgress;
    PXFetchResultCountObserver *_numberOfReferencedItemsObserver;
    NSUInteger _numberOfReferencedItems;
    PXCloudQuotaOfferProvider *_offerProvider;
    PXCloudQuotaPremiumOfferProvider *_premiumOfferProvider;
    BOOL _hasCloudQuotaOffer;
    BOOL _cloudQuotaOfferHasAssetCounts;
    PHPhotoLibrary *_ph_photoLibrary;
    PLPhotoLibrary *_pl_photoLibrary;
    NSUInteger _needsUpdate;
    CGFloat _lastUpdate;
    BOOL _isUpdating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXCPLStatus *status; // ivar: _status
@property (readonly) Class superclass;


+(id)currentStatusProvider;
-(CGFloat)nextOverrideResumeTimeInterval;
-(id)_initWithInitialSynchronousUpdateType:(NSUInteger)arg0 ;
-(id)_initWithInitialUpdateType:(NSUInteger)arg0 isSynchronous:(BOOL)arg1 ;
-(id)_updateStatus:(id)arg0 requestedTypes:(NSUInteger)arg1 ;
-(id)init;
-(void)_performUpdate;
-(void)_schedulePendingUpdates;
-(void)_scheduleUpdateForType:(NSUInteger)arg0 ;
-(void)fetchResultCountObserver:(id)arg0 didChangeFetchResultCount:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)statusDidChange:(id)arg0 ;


@end


#endif