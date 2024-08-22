// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPFETCHRESULTVIEWCONTROLLER_H
#define PXPLACESMAPFETCHRESULTVIEWCONTROLLER_H

@class UIViewController, NSString, UIBarButtonItem, PXPlacesMapFetchResultController, PHAsset<PXPlacesGeotaggable>;
@protocol PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate, PXPlacesMapFetchResultControllerAccess, PXPlacesAssetsSelectionDelegate, PXPlacesMapBarButtonsDelegate, PXPlacesMapLocationEditDelegate, PXPlacesMapGeotaggableInfoDelegate;


#import "PXPhotoKitAssetsDataSourceManager.h"

@interface PXPlacesMapFetchResultViewController : UIViewController <PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate, PXPlacesMapFetchResultControllerAccess>



@property (weak, nonatomic) NSObject<PXPlacesAssetsSelectionDelegate> *assetSelectionDelegate; // ivar: _assetSelectionDelegate
@property BOOL autoRefocusOnDataChange; // ivar: _autoRefocusOnDataChange
@property (weak, nonatomic) NSObject<PXPlacesMapBarButtonsDelegate> *barButtonsDelegate; // ivar: _barButtonsDelegate
@property BOOL canEditLocation; // ivar: _canEditLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXPlacesMapLocationEditDelegate> *editLocationDelegate; // ivar: _editLocationDelegate
@property (retain, nonatomic) UIBarButtonItem *filterAssetsBtn; // ivar: _filterAssetsBtn
@property (retain, nonatomic) NSObject<PXPlacesMapGeotaggableInfoDelegate> *geotaggableInfoDelegate; // ivar: _geotaggableInfoDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController; // ivar: _mapFetchResultsController
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *oneUpDataSourceManager; // ivar: _oneUpDataSourceManager
@property (weak, nonatomic) UIViewController *pxOneUpPresentationViewController; // ivar: _pxOneUpPresentationViewController
@property (retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable; // ivar: _selectedGeotaggable
@property (nonatomic) BOOL showNavigationBar; // ivar: _showNavigationBar
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)pu_shouldOptOutFromChromelessBars;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)_fetchHydratedAssetForPlacesAsset:(id)arg0 ;
-(id)dataSourceForAssets:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(void)_commonInit;
-(void)_editDidPress;
-(void)_placeNavigationBarItems:(id)arg0 ;
-(void)_placeToolbarItems:(id)arg0 ;
-(void)_reloadContentModeDisplay:(NSUInteger)arg0 ;
-(void)_selectedGeotaggables:(id)arg0 ;
-(void)dataSourceDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didEnterForeground:(id)arg0 ;
-(void)didSelectGeotaggableItems:(id)arg0 fromMapView:(id)arg1 ;
-(void)loadView;
-(void)locationServiceAuthorizationChanged;
-(void)mapRegionDidChange:(id)arg0 ;
-(void)ppt_performPlacesScrollTest:(id)arg0 iterations:(NSInteger)arg1 screenDelta:(NSInteger)arg2 delay:(CGFloat)arg3 completion:(id)arg4 ;
-(void)ppt_performPlacesZoomTest:(id)arg0 iterations:(NSInteger)arg1 delay:(CGFloat)arg2 completion:(id)arg3 ;
-(void)reloadStyle;
-(void)tapCountToolbarButton:(id)arg0 ;
-(void)tapFilterAssetsBtn:(id)arg0 ;
-(void)tapInfoToolbarButton:(id)arg0 ;
-(void)tapShowAll:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif