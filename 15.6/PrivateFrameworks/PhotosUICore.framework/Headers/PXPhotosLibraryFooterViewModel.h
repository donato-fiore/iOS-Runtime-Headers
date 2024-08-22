// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSLIBRARYFOOTERVIEWMODEL_H
#define PXPHOTOSLIBRARYFOOTERVIEWMODEL_H

@class NSString, NSArray;
@protocol PXCloudQuotaControllerHelperDelegate, PXAssetsDataSourceManagerObserver, PXPhotosLibraryFooterViewModelPresentationDelegate;


#import "PXFooterViewModel.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXCloudQuotaControllerHelper.h"
#import "PXCPLUIStatusProvider.h"

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerHelperDelegate, PXAssetsDataSourceManagerObserver>



@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (retain, nonatomic) PXCloudQuotaControllerHelper *cloudQuotaHelper; // ivar: _cloudQuotaHelper
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider; // ivar: _cplUIStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosLibraryFooterViewModelPresentationDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncProgressAlbums; // ivar: _syncProgressAlbums


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg0 ;
-(void)_updateExposedProperties;
-(void)cloudQuotaControllerHelper:(id)arg0 informationViewDidChange:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif