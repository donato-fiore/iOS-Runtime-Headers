// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPOINTANNOTATION_H
#define MKPOINTANNOTATION_H

@class VKCustomFeature, NSString, CLLocation;
@protocol MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate;


#import "MKShape.h"

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate>

 {
    VKCustomFeature *_customFeature;
}


@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (nonatomic) CGFloat course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSInteger representation; // ivar: _representation
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(BOOL)_isPendingSelectionAnimated;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isPersistent;
-(BOOL)shouldRepresentSelf;
-(id)_initWithGeoJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)annotation;
-(id)feature;
-(id)init;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(id)reuseIdentifier;
-(id)viewRepresentation;
-(void)_invalidateCachedCoordinate;
-(void)_setHiddenForOffscreen:(BOOL)arg0 ;
-(void)prepareForReuse;


@end


#endif