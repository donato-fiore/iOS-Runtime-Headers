// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACELANDMARKREGION2D_H
#define VNFACELANDMARKREGION2D_H

@class NSMutableDictionary, NSArray;


#import "VNFaceLandmarkRegion.h"

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {
    NSMutableDictionary *_sizedPointsCache;
    os_unfair_lock_s _pointsCalculatorLock;
    ? _points;
}


@property (readonly) *CGPoint normalizedPoints;
@property ? points;
@property (readonly) NSArray *precisionEstimatesPerPoint; // ivar: _precisionEstimatesPerPoint


+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 faceBoundingBox:(struct CGRect )arg1 pointCount:(NSUInteger)arg2 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 faceBoundingBox:(struct CGRect )arg1 points:(*NSUInteger)arg2 pointCount:(id)arg3 precisionEstimatesPerPoint;
-(id)pointAtIndex;
-(struct CGPoint *)pointsInImageOfSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif