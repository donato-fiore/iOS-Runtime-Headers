// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTRAJECTORYOBSERVATION_H
#define VNTRAJECTORYOBSERVATION_H

@class NSUUID, NSArray;


#import "VNObservation.h"

@interface VNTrajectoryObservation : VNObservation {
    NSUUID *_requestUUID;
    ? _equationCoefficients;
}


@property (readonly, copy, nonatomic) NSArray *detectedPoints; // ivar: _detectedPoints
@property ? equationCoefficients;
@property (readonly, nonatomic) CGFloat movingAverageRadius; // ivar: _movingAverageRadius
@property (readonly, copy, nonatomic) NSArray *projectedPoints; // ivar: _projectedPoints


-(BOOL)isEqual:(id)arg0 ;
-(id)detectedPointsInTopLeftOrigin:(BOOL)arg0 orientation:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)projectedPointsInTopLeftOrigin:(BOOL)arg0 orientation:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif