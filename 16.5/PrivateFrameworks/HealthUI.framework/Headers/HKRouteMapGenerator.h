// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKROUTEMAPGENERATOR_H
#define HKROUTEMAPGENERATOR_H

@class UIColor, MKMapSnapshotter;

#import <Foundation/Foundation.h>

#import "HKLocationReadings.h"

@interface HKRouteMapGenerator : NSObject

@property (retain, nonatomic) UIColor *endPointColor; // ivar: _endPointColor
@property (retain, nonatomic) HKLocationReadings *locationReadings; // ivar: _locationReadings
@property (retain, nonatomic) MKMapSnapshotter *runningSnapshotter; // ivar: _runningSnapshotter
@property (retain, nonatomic) UIColor *startPointColor; // ivar: _startPointColor
@property (nonatomic) BOOL useMarkerAnnotations; // ivar: _useMarkerAnnotations
@property (nonatomic) BOOL useRelativeColorForSpeed; // ivar: _useRelativeColorForSpeed


-(id)_annotationViewWithIsStartPoint:(BOOL)arg0 ;
-(id)_imageWithPolyline:(id)arg0 lineWidth:(CGFloat)arg1 mapRect:(struct ? )arg2 onSnapshot:(id)arg3 ;
-(id)init;
-(id)relativeColorForSpeed:(CGFloat)arg0 ;
-(struct ? )_adjustRectForPolyline:(id)arg0 withSize:(struct CGSize )arg1 ;
-(struct ? )_adjustedMapRectForPolyline:(id)arg0 size:(struct CGSize )arg1 ;
-(struct ? )_adjustedMapRectForPolyline:(id)arg0 size:(struct CGSize )arg1 offsets:(struct CGRect )arg2 ;
-(void)_drawLineFromPointA:(struct CGPoint )arg0 toPointB:(struct CGPoint )arg1 atSpeed:(CGFloat)arg2 context:(struct CGContext *)arg3 drawDashes:(BOOL)arg4 lineWidth:(CGFloat)arg5 ;
-(void)_overlayAnnotationView:(id)arg0 point:(struct ? )arg1 onSnapshot:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawLinesWithPolyline:(id)arg0 lineWidth:(CGFloat)arg1 mapRect:(struct ? )arg2 context:(struct CGContext *)arg3 pointFromMapPoint:(id)arg4 ;
-(void)snapshotWithSize:(struct CGSize )arg0 lineWidth:(CGFloat)arg1 traitCollection:(id)arg2 completion:(id)arg3 ;
-(void)snapshotWithSize:(struct CGSize )arg0 lineWidth:(CGFloat)arg1 traitCollection:(id)arg2 offsets:(struct CGRect )arg3 completion:(id)arg4 ;


@end


#endif