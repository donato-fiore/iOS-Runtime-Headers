// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPGEOMETRICCLUSTERLAYOUT_H
#define PXPLACESMAPGEOMETRICCLUSTERLAYOUT_H



#import "PXPlacesMapLayout.h"

@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout

@property (nonatomic) CGFloat clusteringDistance; // ivar: _clusteringDistance


-(BOOL)_shapeAtCoordinate:(struct CLLocationCoordinate2D )arg0 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D )arg1 forViewPort:(id)arg2 ;
-(id)_clusterGeotaggables:(id)arg0 forViewPort:(id)arg1 ;
-(id)_findClusterOverlappingGeotaggable:(id)arg0 fromClusters:(id)arg1 forViewPort:(id)arg2 ;
-(id)init;
-(id)layoutForViewPort:(id)arg0 andDataSourceChange:(id)arg1 ;


@end


#endif