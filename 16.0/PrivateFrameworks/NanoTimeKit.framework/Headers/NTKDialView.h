// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDIALVIEW_H
#define NTKDIALVIEW_H

@class UIView, CLKDevice, NSNumber, NSMutableArray, NSIndexSet;



@interface NTKDialView : UIView

@property (nonatomic) CGFloat angleOffset; // ivar: _angleOffset
@property (copy, nonatomic) id *angleProvider; // ivar: _angleProvider
@property (nonatomic) CGFloat contentDiameter; // ivar: _contentDiameter
@property (nonatomic) CGFloat contentInset; // ivar: _contentInset
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (nonatomic) BOOL disableLayout; // ivar: _disableLayout
@property (retain, nonatomic) NSNumber *hidingMaskEndAngle; // ivar: _hidingMaskEndAngle
@property (retain, nonatomic) NSNumber *hidingMaskStartAngle; // ivar: _hidingMaskStartAngle
@property (copy, nonatomic) id *markerRotationProvider; // ivar: _markerRotationProvider
@property (retain, nonatomic) NSMutableArray *markers; // ivar: _markers
@property (copy, nonatomic) id *markersFactory; // ivar: _markersFactory
@property (retain, nonatomic) NSIndexSet *markersToRotateIndexSet; // ivar: _markersToRotateIndexSet
@property (nonatomic) BOOL needsLayoutMarkers; // ivar: _needsLayoutMarkers
@property (nonatomic) NSUInteger numberOfMarkers; // ivar: _numberOfMarkers
@property (nonatomic) BOOL shouldPixelAlignCenterPoints; // ivar: _shouldPixelAlignCenterPoints
@property (nonatomic) BOOL shouldRotateMarkers; // ivar: _shouldRotateMarkers


-(BOOL)shouldHideMarkerAtIndex:(NSInteger)arg0 ;
-(CGFloat)angleForIndex:(CGFloat)arg0 ;
-(CGFloat)searchForClosestMarkerAngleAtAngle:(CGFloat)arg0 ;
-(CGFloat)totalDiameter;
-(NSUInteger)searchForClosestIndexAtAngle:(CGFloat)arg0 ;
-(id)initWithNumberOfMarkers:(NSUInteger)arg0 markersFactory:(id)arg1 ;
// -(id)initWithNumberOfMarkers:(NSUInteger)arg0 markersFactory:(id)arg1 angleProvider:(unk)arg2  ;
-(id)markerAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )centerPointForAngle:(CGFloat)arg0 radius:(NSInteger)arg1 ;
-(struct CGPoint )positionForMarkerAtIndex:(NSUInteger)arg0 ;
-(void)_layoutCurvedLabel:(id)arg0 rotationAngle:(CGFloat)arg1 ;
-(void)enumerateMarkers:(id)arg0 ;
-(void)layoutMarkers;
-(void)layoutSubviews;
-(void)reloadMarkers;
-(void)replaceMarker:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)updateMarkersVisibility;


@end


#endif