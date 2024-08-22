// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSGRIDFOOTERSTATUSCONTROLLER_H
#define PXPHOTOSGRIDFOOTERSTATUSCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate, PXAssetsSharingHelperDelegate, PXPhotosGridFooterStatusControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXPhotosViewModel.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXCPLUIStatusProvider.h"
#import "PXCloudQuotaControllerHelper.h"
#import "PXFilterFooterController.h"
#import "PXFetchResultCountObserver.h"

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate, PXAssetsSharingHelperDelegate>

 {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    Class _cplActionManagerClass;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXFilterFooterController *_filterFooterController;
    PXFetchResultCountObserver *_renderingCountObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosGridFooterStatusControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(id)_createCPLUIStatusProvider;
-(id)init;
-(id)initWithViewModel:(id)arg0 itemsCountsController:(id)arg1 ;
-(id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg0 ;
-(void)_refreshCPLUIStatusProvider;
-(void)_systemPhotoLibraryDidChange;
-(void)_updateFooterIfNeeded;
-(void)_updateFooterViewModel;
-(void)_updateHasImportantInformation;
-(void)cloudQuotaControllerHelper:(id)arg0 informationViewDidChange:(id)arg1 ;
-(void)fetchResultCountObserver:(id)arg0 didChangeFetchResultCount:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setCplUIStatusProvider:(id)arg0 ;
-(void)viewDidAppear;
-(void)viewWillAppear;


@end


#endif