// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITCOUNTSCONTROLLER_H
#define PXCONTENTSYNDICATIONPHOTOKITCOUNTSCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PXFetchResultCountObserverDelegate;


#import "PXContentSyndicationCountsController.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXFetchResultCountObserver.h"

@interface PXContentSyndicationPhotoKitCountsController : PXContentSyndicationCountsController <PXChangeObserver, PXFetchResultCountObserverDelegate>

 {
    PXAssetsDataSourceCountsController *_assetsCountsController;
    PXFetchResultCountObserver *_fetchResultCountObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_updateDetailedCounts;
-(void)_updateSavedCount;
-(void)didSetAssetCollection:(id)arg0 ;
-(void)fetchResultCountObserver:(id)arg0 didChangeFetchResultCount:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif