// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUPLANETRACKERANNOTATIONLAYER_H
#define FUPLANETRACKERANNOTATIONLAYER_H

@class CALayer;



@interface FUPlaneTrackerAnnotationLayer : CALayer

@property (readonly) CLLocationCoordinate2D currentLocation;
@property (nonatomic) CGFloat currentProgress;
@property (nonatomic) CLLocationCoordinate2D endLocation; // ivar: _endLocation
@property (weak, nonatomic) CALayer *planeImageLayer; // ivar: _planeImageLayer
@property (nonatomic) CLLocationCoordinate2D startLocation; // ivar: _startLocation


-(CGFloat)defaultHeadingForStartPosition:(struct CLLocationCoordinate2D )arg0 endPosition:(struct CLLocationCoordinate2D )arg1 positionPercentage:(CGFloat)arg2 ;
-(id)init;
-(struct CLLocationCoordinate2D )geodesicLocationForStartPosition:(struct CLLocationCoordinate2D )arg0 endPosition:(struct CLLocationCoordinate2D )arg1 positionPercentage:(CGFloat)arg2 ;
-(void)setPlaneImage:(id)arg0 ;
-(void)updatePlaneStateForProgress:(CGFloat)arg0 ;


@end


#endif