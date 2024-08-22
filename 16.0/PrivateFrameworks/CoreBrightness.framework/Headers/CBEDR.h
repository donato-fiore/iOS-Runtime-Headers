// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBEDR_H
#define CBEDR_H


#import <Foundation/Foundation.h>


@interface CBEDR : NSObject {
    NSUInteger _rampPolicy;
    float _requestedHeadroom;
    float _currentMaxBrightness;
    float _currentHeadroom;
}


@property float appliedCompensation; // ivar: _appliedCompensation
@property float brightnessCap; // ivar: _brightnessCap
@property float maxHeadroom; // ivar: _maxHeadroom
@property float minHeadroom; // ivar: _minHeadroom
@property float panelMax; // ivar: _panelMax
@property float referenceHeadroom; // ivar: _referenceHeadroom
@property float sdrBrightness; // ivar: _sdrBrightness
@property float secondsPerStop; // ivar: _secondsPerStop


+(float)animatedHeadroomForOrigin:(float)arg0 target:(float)arg1 andProgress:(float)arg2 ;
+(float)headroomToScalingFactor:(float)arg0 ;
+(float)headroomToStops:(float)arg0 ;
+(float)overallRampDuration:(float)arg0 target:(float)arg1 durationPerStop:(float)arg2 ;
+(float)scalingFactorToHeadroom:(float)arg0 ;
+(float)stopsToHeadroom:(float)arg0 ;
-(BOOL)shouldUpdateEDRForRequestedHeadroom:(float)arg0 targetHeadroom:(*float)arg1 rampTime:(*CGFloat)arg2 ;
-(float)availableHeadroom;
-(float)cappedHeadroomFromUncapped:(float)arg0 ;
-(float)clampHeadroom:(float)arg0 ;
-(id)copyStatusInfo;
-(id)description;
-(id)initWithRampPolicy:(NSUInteger)arg0 potentialHeadroom:(float)arg1 andReferenceHeadroom:(float)arg2 ;
-(void)resetRequestedHeadroom;
-(void)sanityCheck;


@end


#endif