// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CINEMATICTRACK_H
#define CINEMATICTRACK_H



#import "BaseTrack.h"
#import "MovementStateEstimator.h"

@interface CinematicTrack : BaseTrack {
    MovementStateEstimator *_mseX;
    MovementStateEstimator *_mseY;
    CGRect _afterImageBoundingBox;
    ? _afterImageExpirationTimestamp;
    CGRect _lastMeasuredFaceBoundingBox;
}


@property (nonatomic) CGRect boundingBoxForFraming; // ivar: _boundingBoxForFraming
@property (readonly, nonatomic) BOOL isOutsideOfView; // ivar: _isOutsideOfView
@property (readonly, nonatomic) BOOL isStationary; // ivar: _isStationary
@property (nonatomic) BOOL isTrackedByDirector; // ivar: isTrackedByDirector
@property (readonly, nonatomic) CGRect lastStationaryRect; // ivar: _lastStationaryRect
@property (readonly, nonatomic) BOOL wasStationaryBefore; // ivar: _wasStationaryBefore
@property (readonly, nonatomic) ? withinFrameLastTimestamp; // ivar: _withinFrameLastTimestamp


-(id)initWithObservation:(id)arg0 identifier:(NSInteger)arg1 options:(id)arg2 atTime:(struct ? )arg3 ;
-(struct CGRect )afterImageBoundingBoxAtTime:(struct ? )arg0 ;
-(struct CGRect )faceBoundingBoxForFramingAtTime:(struct ? )arg0 ;
-(void)resetProperties;
-(void)setAfterImage:(struct CGRect )arg0 forDuration:(float)arg1 atTime:(struct ? )arg2 ;
-(void)updatePropertiesWithMetadata:(id)arg0 inView:(struct CGRect )arg1 ;


@end


#endif