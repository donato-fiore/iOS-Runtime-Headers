// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBEDR_H
#define CBEDR_H


#import <Foundation/Foundation.h>


@interface CBEDR : NSObject {
    NSUInteger _rampPolicy;
    float _maxHeadroom;
    float _requestedHeadroom;
    float _currentMaxBrightness;
    float _currentHeadroom;
    float _referenceHeadroom;
}


@property float appliedCompensation; // ivar: _appliedCompensation
@property float brightnessCap; // ivar: _brightnessCap
@property float panelMax; // ivar: _panelMax
@property float sdrBrightness; // ivar: _sdrBrightness
@property float secondsPerStop; // ivar: _secondsPerStop


+(float)animatedHeadroomForOrigin:(float)arg0 target:(float)arg1 andProgress:(float)arg2 ;
-(BOOL)shouldUpdateEDRForRequestedHeadroom:(float)arg0 targetHeadroom:(*float)arg1 rampTime:(*CGFloat)arg2 ;
-(float)availableHeadroom;
-(float)cappedHeadroomFromUncapped:(float)arg0 ;
-(float)maxHeadroom;
-(float)referenceHeadroom;
-(float)stopsFromHeadroomRatio:(float)arg0 ;
-(id)copyStatusInfo;
-(id)description;
-(id)initWithRampPolicy:(NSUInteger)arg0 potentialHeadroom:(float)arg1 andReferenceHeadroom:(float)arg2 ;
-(void)sanityCheck;


@end


#endif