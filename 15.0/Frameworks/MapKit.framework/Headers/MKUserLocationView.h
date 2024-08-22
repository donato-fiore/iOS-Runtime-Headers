// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKUSERLOCATIONVIEW_H
#define MKUSERLOCATIONVIEW_H



#import "MKAnnotationView.h"
#import "_MKUserLocationView.h"

@interface MKUserLocationView : MKAnnotationView {
    BOOL _selected;
}


@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView; // ivar: _mkUserLocationView


-(BOOL)_allowedToShowCallout;
-(BOOL)_allowsAccuracyRing;
-(BOOL)_allowsPulse;
-(BOOL)_canShowHeadingIndicator;
-(BOOL)_isStale;
-(BOOL)_rotateInnerImageToMatchCourse;
-(BOOL)_shouldDisplayHeading;
-(BOOL)_shouldInnerPulse;
-(BOOL)_shouldShowOuterRing;
-(BOOL)canShowCallout;
-(BOOL)isDraggable;
-(BOOL)isSelected;
-(CGFloat)_accuracyRingAlpha;
-(CGFloat)_heading;
-(CGFloat)_maxRadiusToShowAccuracyRing;
-(CGFloat)_puckAlpha;
-(NSInteger)_headingIndicatorStyle;
-(float)_selectionPriority;
-(id)_innerImageMask;
-(id)_lastLocation;
-(id)detailCalloutAccessoryView;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)leftCalloutAccessoryView;
-(id)rightCalloutAccessoryView;
-(struct CGPoint )calloutOffset;
-(struct CGPoint )centerOffset;
-(struct CGPoint )leftCalloutOffset;
-(struct CGPoint )rightCalloutOffset;
-(struct CGRect )_mapkit_visibleRect;
-(struct UIEdgeInsets )_annotationTrackingInsets;
-(void)_locationManagerFailedToUpdateLocation;
-(void)_setAccuracyRingAlpha:(CGFloat)arg0 ;
-(void)_setAllowsAccuracyRing:(BOOL)arg0 ;
-(void)_setAllowsPulse:(BOOL)arg0 ;
-(void)_setCanShowHeadingIndicator:(BOOL)arg0 ;
-(void)_setHeading:(CGFloat)arg0 ;
-(void)_setHeadingIndicatorStyle:(NSInteger)arg0 ;
-(void)_setInnerImageMask:(id)arg0 ;
-(void)_setMapDisplayStyle:(struct ? )arg0 ;
-(void)_setMapPitchRadians:(CGFloat)arg0 ;
-(void)_setMapRotationRadians:(CGFloat)arg0 ;
-(void)_setMapType:(NSUInteger)arg0 ;
-(void)_setMaxRadiusToShowAccuracyRing:(CGFloat)arg0 ;
-(void)_setPuckAlpha:(CGFloat)arg0 ;
-(void)_setPuckScale:(CGFloat)arg0 ;
-(void)_setRotateInnerImageToMatchCourse:(BOOL)arg0 ;
-(void)_setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setSelectionPriority:(float)arg0 ;
-(void)_setShouldDisplayHeading:(BOOL)arg0 ;
-(void)_setShouldInnerPulse:(BOOL)arg0 ;
-(void)_setShouldShowOuterRing:(BOOL)arg0 ;
-(void)_updateFromMap;
-(void)_updateStateFromLocation:(id)arg0 duration:(CGFloat)arg1 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setAnnotation:(id)arg0 ;
-(void)setCalloutOffset:(struct CGPoint )arg0 ;
-(void)setCanShowCallout:(BOOL)arg0 ;
-(void)setCenterOffset:(struct CGPoint )arg0 ;
-(void)setDetailCalloutAccessoryView:(id)arg0 ;
-(void)setLeftCalloutAccessoryView:(id)arg0 ;
-(void)setLeftCalloutOffset:(struct CGPoint )arg0 ;
-(void)setRightCalloutAccessoryView:(id)arg0 ;
-(void)setRightCalloutOffset:(struct CGPoint )arg0 ;


@end


#endif