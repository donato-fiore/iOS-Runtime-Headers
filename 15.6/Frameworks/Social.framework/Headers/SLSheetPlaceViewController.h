// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSHEETPLACEVIEWCONTROLLER_H
#define SLSHEETPLACEVIEWCONTROLLER_H

@class UIViewController, NSArray, NSBundle, UITableView, UISearchBar, UISearchDisplayController, MKMapView, ACAccount, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate, SLPlaceDataSource, SLSheetPlaceViewControllerDelegate;


#import "SLPlace.h"
#import "SLSheetPlaceSearchController.h"

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate>

 {
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    BOOL _searchPresented;
    BOOL _searchAnimationComplete;
    CGFloat _mapHeight;
}


@property (retain) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource; // ivar: _placeDataSource
@property (retain) NSArray *places;
@property (nonatomic) BOOL searchEnabled; // ivar: _searchEnabled
@property (weak) NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;


-(BOOL)_forceSelectPlace:(id)arg0 setMapAnnotation:(BOOL)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)searchDisplayController:(id)arg0 shouldReloadTableForSearchString:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_mapHeightForInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_preferredViewHeight;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_placeForRow:(NSInteger)arg0 ;
-(id)initWithPlaceDataSource:(id)arg0 effectiveBundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct ? )_regionForPlaces:(id)arg0 ;
-(void)_calculatePreferredContentSize;
-(void)_centerMapForPlaces;
-(void)_centerMapWithSelectedPlace:(id)arg0 ;
-(void)_layoutForSearch;
-(void)_layoutNormal;
-(void)_presentSearch;
-(void)_restoreFromSearch;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)placeManager:(id)arg0 failedWithError:(id)arg1 ;
-(void)placeManager:(id)arg0 updatedPlaces:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg0 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg0 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg0 ;
-(void)setSelectedPlace:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif