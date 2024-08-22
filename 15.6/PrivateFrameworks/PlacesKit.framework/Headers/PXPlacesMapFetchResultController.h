// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPFETCHRESULTCONTROLLER_H
#define PXPLACESMAPFETCHRESULTCONTROLLER_H

@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapControllerAccess, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXPlacesPhotoAssetsStore.h"
#import "PXPlacesMapPipeline.h"
#import "PXPlacesMapController.h"
#import "PXPlacesMapView.h"

@interface PXPlacesMapFetchResultController : NSObject

@property (retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore; // ivar: _albumAssetStore
@property (retain, nonatomic) PXPlacesMapPipeline *albumPipeline; // ivar: _albumPipeline
@property (nonatomic) NSUInteger contentMode; // ivar: _contentMode
@property (retain, nonatomic) PXPlacesMapPipeline *currentPipeline; // ivar: _currentPipeline
@property (weak, nonatomic) NSObject<PXPlacesMapGeotaggableInfoDelegate> *geotaggableInfoDelegate; // ivar: _geotaggableInfoDelegate
@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (retain, nonatomic) NSObject<PXPlacesMapControllerAccess> *mapViewController; // ivar: _mapViewController
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore; // ivar: _providedAssetStore
@property (retain) PXPlacesMapPipeline *providedPipeline; // ivar: _providedPipeline
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)currentAssetStore;
-(id)initWithGeotaggableInfoDelegate:(id)arg0 andMapViewController:(id)arg1 ;
-(id)visibleGeotaggables;
-(void)focusOnGeotaggablesAnimated:(BOOL)arg0 ;
-(void)focusOnMapRect:(struct ? )arg0 animated:(BOOL)arg1 ;
-(void)focusOnProvidedAssetsAnimated:(BOOL)arg0 ;
-(void)focusOnProvidedAssetsImmediately;
-(void)loadFetchResult:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadFetchResults:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadProvidedAssetStoreWithCompletion:(id)arg0 ;
-(void)reloadContentModeWithCompletion:(id)arg0 ;
-(void)resumeWithCompletion:(id)arg0 ;


@end


#endif