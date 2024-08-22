// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYFOOTERVIEWMODEL_H
#define PXCURATEDLIBRARYFOOTERVIEWMODEL_H

@class NSString, NSArray;
@protocol PXCloudQuotaControllerHelperDelegate, PXChangeObserver, PXSettingsKeyObserver, PXCuratedLibraryFooterViewModelPresentationDelegate;


#import "PXFooterViewModel.h"
#import "PXCPLUIStatusProvider.h"
#import "PXCloudQuotaControllerHelper.h"
#import "PXCuratedLibraryViewModel.h"
#import "PXFilterFooterController.h"
#import "PXCuratedLibraryAnalysisStatus.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXFooterSettings.h"

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerHelperDelegate, PXChangeObserver, PXSettingsKeyObserver>

 {
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXCuratedLibraryViewModel *_curatedLibraryViewModel;
    PXFilterFooterController *_filterFooterController;
    NSInteger _animatedGridCycleIndex;
}


@property (readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus; // ivar: _analysisStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasImportantInformation; // ivar: _hasImportantInformation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFooterShown; // ivar: _isFooterShown
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // ivar: _itemCountsController
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (weak, nonatomic) NSObject<PXCuratedLibraryFooterViewModelPresentationDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (readonly, nonatomic) PXFooterSettings *settings; // ivar: _settings
@property (readonly, nonatomic) BOOL shouldAlternateTitleWithAnimatedGridCycle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncProgressAlbums; // ivar: _syncProgressAlbums


+(BOOL)hasAnalysisProgressForMode:(NSInteger)arg0 analysisStatus:(id)arg1 cplUIStatus:(id)arg2 userDefaults:(id)arg3 outAnimatedIconMode:(*NSInteger)arg4 outProgress:(*float)arg5 outTitle:(*id)arg6 outDescription:(*id)arg7 ;
+(id)_titleWithOptionalDescription:(*id)arg0 progress:(*float)arg1 forMode:(NSInteger)arg2 itemCountsController:(id)arg3 analysisStatus:(id)arg4 cplUIStatus:(id)arg5 inRebuild:(BOOL)arg6 ;
-(id)init;
-(id)initWithItemCountsController:(id)arg0 cplUIStatusProvider:(id)arg1 analysisStatus:(id)arg2 mode:(NSInteger)arg3 viewModel:(id)arg4 ;
-(id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg0 ;
-(void)_updateExposedProperties;
-(void)_updateHasImportantInformation;
-(void)cloudQuotaControllerHelper:(id)arg0 informationViewDidChange:(id)arg1 ;
-(void)didHideFooter;
-(void)didShowFooter;
-(void)footerAnimationCrossedGridCycleBoundary;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif