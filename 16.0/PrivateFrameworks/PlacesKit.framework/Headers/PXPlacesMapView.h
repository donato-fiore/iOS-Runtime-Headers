// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPVIEW_H
#define PXPLACESMAPVIEW_H

@class MKMapView;



@interface PXPlacesMapView : MKMapView {
    CGFloat _currentScale;
}


@property CGFloat pitch;


+(id)mapViewWithMarkedLocation:(id)arg0 regionRadius:(CGFloat)arg1 frame:(struct CGRect )arg2 ;
+(struct ? )MKMapRectForCoordinateRegion:(struct ? )arg0 ;
+(struct ? )canonicalMapRect:(struct ? )arg0 ;
+(struct ? )mapRectForNearbyQueriesFromRect:(struct ? )arg0 atScale:(CGFloat)arg1 targetViewSize:(struct CGSize )arg2 ;
-(CGFloat)_radiansFromDegrees:(CGFloat)arg0 ;
-(CGFloat)_sampleMapDistanceFromViewPoint:(struct CGPoint )arg0 toViewPoint:(struct CGPoint )arg1 ;
-(CGFloat)zoomLevel;
-(id)currentViewPort;
-(id)currentViewPortWithThumbnailOverscan;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)ppt_visibleMapRectBlockForQueue:(SEL)arg0 delay:(id)arg1 ;
-(struct ? )ppt_cityMapRect;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)deselectAllAnnotationsAnimated:(BOOL)arg0 ;
-(void)ppt_performPlacesScrollTest:(id)arg0 iterations:(NSInteger)arg1 screenDelta:(NSInteger)arg2 delay:(CGFloat)arg3 completion:(id)arg4 ;
-(void)ppt_performPlacesZoomTest:(id)arg0 iterations:(NSInteger)arg1 delay:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif