// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPROXIMITYESTIMATOR_H
#define SFPROXIMITYESTIMATOR_H


#import <Foundation/Foundation.h>


@interface SFProximityEstimator : NSObject {
    int _rssiEnter;
    int _rssiExit;
    int _rssiImmediate;
    int _rssiNear;
    int _rssiFar;
}


@property (readonly, nonatomic) int estimatedRSSI; // ivar: _estimatedRSSI


+(id)proximityEstimatorWithProximityInfo:(id)arg0 ;
-(id)description;
-(id)descriptionParams;
-(id)initWithProximityInfo:(id)arg0 ;
-(int)_estimateRSSIForSFBLEDevice:(id)arg0 ;
-(unsigned int)updateWithSFBLEDevice:(id)arg0 ;


@end


#endif