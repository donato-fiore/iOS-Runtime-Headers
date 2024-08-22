// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATIONPICKERVIEWCONTROLLER_H
#define WFLOCATIONPICKERVIEWCONTROLLER_H

@class UIViewController, NSArray, CLLocation, NSString, UIView, HULocationTriggerEditorMapDragRadiusView, MKLocalSearch, CLLocationManager, NSLayoutConstraint, MKMapView, UISearchBar, NSIndexPath, UITableView, WFLocationValue;
@protocol UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HULocationTriggerEditorMapDragRadiusViewDelegate, CLLocationManagerDelegate, WFLocationPickerViewControllerDelegate;



@interface WFLocationPickerViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HULocationTriggerEditorMapDragRadiusViewDelegate, CLLocationManagerDelegate>



@property (nonatomic) BOOL allowsPickingCurrentLocation; // ivar: _allowsPickingCurrentLocation
@property (nonatomic) BOOL allowsTextOnlyLocation; // ivar: _allowsTextOnlyLocation
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) int currentAppLocationAuthorizationStatus; // ivar: _currentAppLocationAuthorizationStatus
@property (retain, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFLocationPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView; // ivar: _dragView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKLocalSearch *localSearch; // ivar: _localSearch
@property (copy, nonatomic) NSArray *localSearchResults; // ivar: _localSearchResults
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSLayoutConstraint *mapHeightConstraint; // ivar: _mapHeightConstraint
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly, nonatomic) NSUInteger pickerType; // ivar: _pickerType
@property (copy, nonatomic) NSArray *recents; // ivar: _recents
@property (nonatomic) NSUInteger regionCondition; // ivar: _regionCondition
@property (nonatomic) BOOL resolvesCurrentLocationToPlacemark; // ivar: _resolvesCurrentLocationToPlacemark
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) WFLocationValue *value; // ivar: _value


-(BOOL)hasLocation;
-(BOOL)hasSufficientLocationAuthorization;
-(BOOL)shouldShowCurrentLocationItem;
-(BOOL)showsMapView;
-(CGFloat)mapHeight;
-(NSInteger)firstLocalSearchResultRowIndex;
-(NSInteger)firstRecentRowIndex;
-(NSInteger)lastRecentRowIndex;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)proximityType;
-(id)circularRegion;
-(id)initWithPickerType:(NSUInteger)arg0 value:(id)arg1 ;
-(id)locationFromRecentContact:(id)arg0 ;
-(id)mapRadiusView:(id)arg0 overlayForRadius:(CGFloat)arg1 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)overlayWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct ? )mapRadiusView:(id)arg0 boundingMapRectForOverlay:(id)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)checkLocationAuthorization;
-(void)displayLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)done:(id)arg0 ;
-(void)getMapItemFromRecentContact:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPlacemarkFromLocation:(id)arg0 streetAddress:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadView;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)mapRadiusView:(id)arg0 radiusDidChange:(CGFloat)arg1 ;
-(void)mapView:(id)arg0 didDeselectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapView:(id)arg0 regionWillChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg0 ;
-(void)reloadData;
-(void)resetSearchResults;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)setLocationValueWithPlacemark:(id)arg0 ;
-(void)setRegionValueWithPlacemark:(id)arg0 radius:(CGFloat)arg1 ;
-(void)setupMap;
-(void)showMapRegionForCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMapHeight;
-(void)updateRecentsWithSearchText:(id)arg0 ;
-(void)updateUI;
-(void)updateUIWithValue:(id)arg0 ;
-(void)updateValueWithMapItem:(id)arg0 ;
-(void)updateValueWithRadius:(CGFloat)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif