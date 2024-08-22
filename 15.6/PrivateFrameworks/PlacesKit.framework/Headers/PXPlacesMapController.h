// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPCONTROLLER_H
#define PXPLACESMAPCONTROLLER_H

@class NSMapTable, NSOrderedSet, NSSet, NSString, CLLocationManager, NSMutableDictionary;
@protocol MKMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate, OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerChangeDelegate, MKAnnotation, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerSelectionDelegate, PXPlacesMapControllerLoadingStateDelegate;

#import <Foundation/Foundation.h>

#import "PXPlacesImageCache.h"
#import "PXPlacesMapPipelineExecutionContext.h"
#import "PXPlacesMapView.h"

@interface PXPlacesMapController : NSObject <MKMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate>

 {
    NSObject<OS_dispatch_queue> *_pipelinesQueue;
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;
    NSObject<OS_dispatch_queue> *_executionContextQueue;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    NSMapTable *_dataSourceExecutionContexts;
    NSMapTable *_pendingDataSourceChanges;
}


@property (retain) PXPlacesImageCache *cache; // ivar: _cache
@property (weak) NSObject<PXPlacesMapControllerChangeDelegate> *changeDelegate; // ivar: _changeDelegate
@property (retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext; // ivar: _currentExecutionContext
@property (nonatomic) int currentLocationAuthorizationStatus; // ivar: _currentLocationAuthorizationStatus
@property (readonly, nonatomic) NSOrderedSet *currentSelectedGeotaggables;
@property (retain, nonatomic) NSObject<MKAnnotation> *currentSelection; // ivar: _currentSelection
@property (retain) NSMapTable *dataSourceToPipelineMap; // ivar: _dataSourceToPipelineMap
@property (retain) NSSet *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<PXPlacesMapControllerFocusDelegate> *focusDelegate; // ivar: _focusDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) CLLocationCoordinate2D initialCenterCoordinate; // ivar: _initialCenterCoordinate
@property (nonatomic) UIEdgeInsets initialEdgePadding; // ivar: _initialEdgePadding
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) PXPlacesMapView *mapView; // ivar: _mapView
@property BOOL mapViewIsVisible; // ivar: _mapViewIsVisible
@property BOOL pipelineExecutionAllowed; // ivar: _pipelineExecutionAllowed
@property (weak) NSObject<PXPlacesMapControllerSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (retain, nonatomic) NSMutableDictionary *showDebugMapRectColors; // ivar: _showDebugMapRectColors
@property (nonatomic) ? signalFocusMapRect; // ivar: _signalFocusMapRect
@property (nonatomic) BOOL signalFocusWhenMapViewBecomesVisible; // ivar: _signalFocusWhenMapViewBecomesVisible
@property (weak) NSObject<PXPlacesMapControllerLoadingStateDelegate> *stateDelegate; // ivar: _stateDelegate
@property (readonly) Class superclass;


+(void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D )arg0 withTitle:(id)arg1 ;
-(CGFloat)_defaultAnimationDuration;
-(CGFloat)_fadeInAnimationDuration;
-(CGFloat)_fadeOutAnimationDuration;
-(CGFloat)_zPositionForAnnotationIndex:(NSInteger)arg0 ;
-(id)createTrackingBarButtonItem;
-(id)executePipeline:(id)arg0 dataSourceChange:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)visibleGeotaggableFromDataSource:(id)arg0 ;
-(struct ? )_ensureMinimumSize:(struct ? )arg0 ;
-(struct ? )_mapRectForGeotaggablesFromPipeline:(id)arg0 fitAdjusted:(*BOOL)arg1 ;
-(struct ? )mapRectForGeotaggablesFromDataSource:(id)arg0 renderer:(id)arg1 mapViewSize:(struct CGSize )arg2 fitAdjusted:(*BOOL)arg3 ;
-(struct ? )mapRectForNearbyQueriesFromRect:(struct ? )arg0 atScale:(CGFloat)arg1 targetViewSize:(struct CGSize )arg2 ;
-(void)_executeUpdatePlanResults:(id)arg0 ;
-(void)_setVisibleMapRect:(struct ? )arg0 edgePadding:(struct UIEdgeInsets )arg1 animated:(BOOL)arg2 ;
-(void)_showDebugMapRect:(struct ? )arg0 color:(id)arg1 ;
-(void)_updateMapWithAllDataSources:(id)arg0 ;
-(void)_updateMapWithDataSource:(id)arg0 dataSourceChange:(id)arg1 completion:(id)arg2 ;
-(void)_updateMapWithDataSources:(id)arg0 dataSourceChangeTable:(id)arg1 completion:(id)arg2 ;
-(void)addPipeline:(id)arg0 ;
-(void)dataSource:(id)arg0 didChange:(id)arg1 ;
-(void)dealloc;
-(void)focusOnGeotaggablesFromPipeline:(id)arg0 animated:(BOOL)arg1 ;
-(void)focusOnGeotaggablesFromPipelineImmediately:(id)arg0 ;
-(void)loadView;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)mapContainerViewDidAppear;
-(void)mapContainerViewDidDisappear;
-(void)mapContainerViewWillAppear;
-(void)mapContainerViewWillDisappear;
-(void)mapView:(id)arg0 didAddAnnotationViews:(id)arg1 ;
-(void)mapView:(id)arg0 didSelectAnnotationView:(id)arg1 ;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg0 fullyRendered:(BOOL)arg1 ;
-(void)mapViewWillStartLocatingUser:(id)arg0 ;
-(void)removeDataSource:(id)arg0 ;
-(void)removePipeline:(id)arg0 ;
-(void)resumePipelines:(id)arg0 ;
-(void)runPipelines;
-(void)setVisibleMapRect:(struct ? )arg0 forPipeline:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMapRect:(struct ? )arg0 forRenderer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMapRelativeToViewPort:(id)arg0 andViewSize:(struct CGSize )arg1 forRenderer:(id)arg2 ;
-(void)suspendPipelines;


@end


#endif