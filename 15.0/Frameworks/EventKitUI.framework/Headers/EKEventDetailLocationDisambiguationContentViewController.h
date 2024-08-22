// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDETAILLOCATIONDISAMBIGUATIONCONTENTVIEWCONTROLLER_H
#define EKEVENTDETAILLOCATIONDISAMBIGUATIONCONTENTVIEWCONTROLLER_H

@class UIViewController, EKStructuredLocation, NSMutableArray, UISearchBar, MKMapView, UIView, UITableView, MKPointAnnotation, MKCircleRenderer, NSCache, NSSet, NSString;
@protocol UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource, OS_dispatch_queue;



@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    EKStructuredLocation *_location;
    NSMutableArray *_pois;
    id *_completionBlock;
    UISearchBar *_searchBar;
    MKMapView *_mapView;
    UIView *_separatorLine;
    UITableView *_tableView;
    MKPointAnnotation *_pin;
    MKCircleRenderer *_circleRenderer;
    BOOL _textChanged;
    BOOL _geocoding;
    BOOL _done;
    NSObject<OS_dispatch_queue> *_iconRenderQueue;
    NSCache *_iconCache;
    BOOL _rowSelectionInitialized;
    NSUInteger _currentLayoutParadigm;
    NSSet *_tallConstraints;
    NSSet *_iPadConstraints;
    NSSet *_splitConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldEnableAddButton;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_constraintsForParadigm:(NSUInteger)arg0 ;
-(id)initWithLocation:(id)arg0 pois:(id)arg1 completionBlock:(id)arg2 ;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_createConstraints;
-(void)_deselectCircle;
-(void)_selectCircle;
-(void)_selectRow:(NSUInteger)arg0 ;
-(void)_updateMapRegion;
-(void)cancelTapped:(id)arg0 ;
-(void)doneTapped:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif