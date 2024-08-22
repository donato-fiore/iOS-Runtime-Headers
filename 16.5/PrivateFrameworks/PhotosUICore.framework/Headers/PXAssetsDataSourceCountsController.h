// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETSDATASOURCECOUNTSCONTROLLER_H
#define PXASSETSDATASOURCECOUNTSCONTROLLER_H

@class NSString;
@protocol PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXAssetsDataSourceManager.h"

@interface PXAssetsDataSourceCountsController : PXObservable <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver>

 {
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;
}


@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (readonly, nonatomic) ? counts; // ivar: _counts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? guestCounts; // ivar: _guestCounts
@property (nonatomic) BOOL hasUsableCounts; // ivar: _hasUsableCounts
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPreparingAssetTypeCounts; // ivar: _isPreparingAssetTypeCounts
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitingToPrepare; // ivar: _waitingToPrepare


-(id)init;
-(id)initWithAssetsDataSourceManager:(id)arg0 ;
-(void)_dataSourceManagerDidChange;
-(void)_handlePreparationCompletion;
-(void)_prepareCounts;
-(void)_prepareDataSource:(id)arg0 ;
-(void)_updateCounts;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareCountsIfNeeded;


@end


#endif