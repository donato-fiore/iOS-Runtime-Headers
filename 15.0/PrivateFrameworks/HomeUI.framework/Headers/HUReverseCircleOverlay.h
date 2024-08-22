// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUREVERSECIRCLEOVERLAY_H
#define HUREVERSECIRCLEOVERLAY_H

@class MKCircle;



@interface HUReverseCircleOverlay : MKCircle

@property (nonatomic) ? boundingRect; // ivar: _boundingRect


+(id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 boundingMapRect:(struct ? )arg2 ;
-(struct ? )boundingMapRect;
-(struct ? )innerCircleBoundingMapRect;


@end


#endif