// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPTHUMBNAILCLUSTERLAYOUT_H
#define PXPLACESMAPTHUMBNAILCLUSTERLAYOUT_H

@class NSArray;
@protocol PXPlacesMapLayoutResult;


#import "PXPlacesMapLayout.h"

@interface PXPlacesMapThumbnailClusterLayout : PXPlacesMapLayout

@property (nonatomic) NSUInteger currentChangeType; // ivar: _currentChangeType
@property (retain, nonatomic) NSObject<PXPlacesMapLayoutResult> *currentMapLayoutResult; // ivar: _currentMapLayoutResult
@property (retain, nonatomic) NSArray *geotaggablesSortDescriptors; // ivar: _geotaggablesSortDescriptors
@property (nonatomic) CGFloat horizontalClusteringDistancePixels; // ivar: _horizontalClusteringDistancePixels
@property (nonatomic) CGFloat verticalClusteringDistancePixels; // ivar: _verticalClusteringDistancePixels


-(BOOL)_zoom:(CGFloat)arg0 isEqualToZoom:(CGFloat)arg1 ;
-(NSInteger)_divideRectsOf:(id)arg0 from:(id)arg1 into:(struct ? *)arg2 ;
-(NSInteger)_substractRect:(struct ? )arg0 from:(struct ? )arg1 into:(struct ? *)arg2 ;
-(NSUInteger)_viewPortChangeTypeFrom:(id)arg0 to:(id)arg1 ;
-(id)_clusterGeotaggables:(id)arg0 fromMapRect:(struct ? )arg1 viewPort:(id)arg2 ;
-(id)_clusterGeotaggables:(id)arg0 usingHorizontalClusteringDistance:(CGFloat)arg1 verticalClusteringDistance:(CGFloat)arg2 viewPort:(id)arg3 dataSource:(id)arg4 primaryLayoutGeotaggables:(id)arg5 maskToMapRect:(struct ? )arg6 ;
-(id)_clusterGeotaggablesInRect:(struct ? )arg0 forViewPort:(id)arg1 ;
-(id)_clusterGeotaggablesInViewPort:(id)arg0 ;
-(id)_copyLayoutItem:(id)arg0 ;
-(id)_createIncrementalClusterForViewport:(id)arg0 fromViewPort:(id)arg1 appendLayoutItems:(id)arg2 ;
-(id)_createIncrementalClusterForViewport:(id)arg0 relativeToLayoutResult:(id)arg1 dataSourceChange:(id)arg2 ;
-(id)_handlePanToViewPort:(id)arg0 dataSourceChange:(id)arg1 ;
-(id)_handlePitchChangeToViewPort:(id)arg0 dataSourceChange:(id)arg1 ;
-(id)_handleZoomInToViewPort:(id)arg0 ;
-(id)_handleZoomOutToViewPort:(id)arg0 ;
-(id)_mutableSortedOrderdGeotaggablesSetFromSet:(id)arg0 ;
-(id)_primaryGeotaggleInLayoutItem:(id)arg0 ;
-(id)layoutForViewPort:(id)arg0 andDataSourceChange:(id)arg1 ;
-(struct ? )_minimalRectAtCoordinate:(struct CLLocationCoordinate2D )arg0 atScale:(CGFloat)arg1 ;
-(struct ? )_minimalRectForGeotaggable:(id)arg0 atScale:(CGFloat)arg1 ;
-(struct ? )_minimalRectForLayoutItem:(id)arg0 atScale:(CGFloat)arg1 ;
-(void)_sortGeotaggables:(id)arg0 ;
-(void)_sortLayoutItems:(id)arg0 ;


@end


#endif