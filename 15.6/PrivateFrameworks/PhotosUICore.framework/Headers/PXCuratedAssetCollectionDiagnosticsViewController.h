// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDASSETCOLLECTIONDIAGNOSTICSVIEWCONTROLLER_H
#define PXCURATEDASSETCOLLECTIONDIAGNOSTICSVIEWCONTROLLER_H

@class UIViewController, UIView, UISegmentedControl, UICollectionView, UITableView, NSArray, NSDictionary, PHCachingImageManager, PHImageRequestOptions, NSMutableArray, PHFetchResult, NSString, NSURL, UIActivityIndicatorView;
@protocol UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PXDiagnosticsHighlightCurationSettingsViewControllerDelegate, OS_dispatch_queue;


#import "PXDiagnosticsHighlightCurationSettingsViewController.h"

@interface PXCuratedAssetCollectionDiagnosticsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PXDiagnosticsHighlightCurationSettingsViewControllerDelegate>

 {
    UIView *_contentView;
    UISegmentedControl *_segmentedControl;
    UICollectionView *_collectionView;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    PHCachingImageManager *_imageManager;
    CGSize _thumbnailSize;
    NSInteger _thumbnailContentMode;
    PHImageRequestOptions *_thumbnailOptions;
    CGRect _previousPreheatRect;
    NSMutableArray *_addedAssets;
    NSMutableArray *_removedAssets;
    NSArray *_visibleAssets;
    PHFetchResult *_allAssets;
    NSString *_keyAssetUUID;
    NSDictionary *_assetByUUID;
    NSArray *_sortedVisibleAssetUUIDs;
    NSDictionary *_curationDebugInformation;
    BOOL _curationComparisonEnabled;
    NSObject<OS_dispatch_queue> *_curationDebugFetchQueue;
    BOOL _isReady;
    UIView *_curationSettingsView;
    UIView *_curationTypeView;
    UIView *_itemDetailsView;
    NSDictionary *_dedupedSymbolIndexByItemIdentifier;
    NSURL *_screenshotURL;
    PXDiagnosticsHighlightCurationSettingsViewController *_editSettingsViewController;
    UIActivityIndicatorView *_progressView;
}


@property (nonatomic) NSInteger currentCurationType; // ivar: _currentCurationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostLayoutDiagnosticDescription; // ivar: _hostLayoutDiagnosticDescription
@property (copy, nonatomic) NSString *hostViewDiagnosticDescription; // ivar: _hostViewDiagnosticDescription
@property (nonatomic) BOOL initiallyShowCuration; // ivar: _initiallyShowCuration
@property (nonatomic) BOOL shouldPresentTapToRadar; // ivar: _shouldPresentTapToRadar
@property (readonly) Class superclass;


-(BOOL)generateSectionTitles:(*id)arg0 andTableContent:(*id)arg1 forIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_curationTypeKeys;
-(id)_tapToRadarViewControllerWithScreenshot:(BOOL)arg0 ;
-(id)assetsForCurationType:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)curationDebugInformationForCurationType:(NSInteger)arg0 ;
-(id)curationDebugInformationWithOptions:(id)arg0 ;
-(id)fullCurationDebugInformation;
-(id)init;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg0 ;
-(id)radarDescriptionTemplate;
-(id)radarRoutes;
-(id)radarTitleTemplate;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(void)_closeAction:(id)arg0 ;
-(void)_editSettings:(id)arg0 ;
-(void)_enumerateDifferencesBetweenRect:(struct CGRect )arg0 andRect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)_switchLogsAction:(id)arg0 ;
-(void)_tapToRadar:(id)arg0 ;
-(void)_updateCachedAssets;
-(void)_updateUIElementsVisibility;
-(void)addAssetUUIDsTo:(id)arg0 from:(id)arg1 ;
-(void)applySettings:(id)arg0 globally:(BOOL)arg1 ;
-(void)changeCurationType:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)displayCurrentCurationType;
-(void)hideCurationSettings:(id)arg0 ;
-(void)hideItemDetails:(id)arg0 ;
-(void)hideToolbarItems;
-(void)presentTapToRadarIfNeeded;
-(void)reloadCuration;
-(void)requestCurationDebugInfoWithOptions:(id)arg0 setGlobally:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showCurationSettings:(id)arg0 ;
-(void)showInfo:(id)arg0 ;
-(void)showItemDetailsWithDebugInfo:(id)arg0 ;
-(void)showToolbarItems;
-(void)toggleCurationComparison:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif