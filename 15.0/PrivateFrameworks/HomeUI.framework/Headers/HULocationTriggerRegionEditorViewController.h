// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONTRIGGERREGIONEDITORVIEWCONTROLLER_H
#define HULOCATIONTRIGGERREGIONEDITORVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UIView, HMHome, MKLocalSearch, GEOLocationShifter, NSLayoutConstraint, MKMapView, UISearchBar, NSIndexPath, UITableView;
@protocol UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController, HULocationTriggerRegionEditorViewControllerDelegate;


#import "HULocationTriggerEditorMapDragRadiusView.h"
#import "HULocationTriggerRegion.h"

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HULocationTriggerRegionEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView; // ivar: _dragView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) MKLocalSearch *localSearch; // ivar: _localSearch
@property (retain, nonatomic) NSArray *localSearchResults; // ivar: _localSearchResults
@property (retain, nonatomic) GEOLocationShifter *locationShifter; // ivar: _locationShifter
@property (retain, nonatomic) NSLayoutConstraint *mapHeightConstraint; // ivar: _mapHeightConstraint
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (retain, nonatomic) NSArray *recents; // ivar: _recents
@property (retain, nonatomic) HULocationTriggerRegion *region; // ivar: _region
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)_pinImage;
-(BOOL)_hasLocation;
-(CGFloat)_mapHeight;
-(NSInteger)_firstLocalSearchResultRowIndex;
-(NSInteger)_firstRecentRowIndex;
-(NSInteger)_lastRecentRowIndex;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_proximityType;
-(id)_locationForRecentMetadataDictionary:(id)arg0 ;
-(id)_overlayWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(id)_shiftLocationIfNeeded:(id)arg0 ;
-(id)_shiftLocationIfNeeded:(id)arg0 isRetry:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRegion:(id)arg0 home:(id)arg1 delegate:(id)arg2 ;
-(id)mapRadiusView:(id)arg0 overlayForRadius:(CGFloat)arg1 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)showLocationRegionInvalidAlert;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct ? )mapRadiusView:(id)arg0 boundingMapRectForOverlay:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_displayLocation:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_reloadData;
-(void)_resetSearchResults;
-(void)_setupMap;
-(void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(void)_updateMapHeight;
-(void)_updateRecentsWithSearchText:(id)arg0 ;
-(void)_updateUI;
-(void)_updateUIWithRegion:(id)arg0 ;
-(void)loadView;
-(void)mapRadiusView:(id)arg0 radiusDidChange:(CGFloat)arg1 ;
-(void)mapView:(id)arg0 didDeselectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapView:(id)arg0 regionWillChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif