// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCONTOUR_H
#define VNCONTOUR_H

@class NSArray, NSIndexPath;
@protocol NSCopying, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNContoursObservation.h"

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding>

 {
    VNContoursObservation *_observation;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _contourPoints;
    os_unfair_lock_s _pathLock;
    *CGPath _normalizedPath;
}


@property (readonly) float aspectRatio; // ivar: _aspectRatio
@property (readonly) NSInteger childContourCount;
@property (readonly) NSArray *childContours;
@property (readonly) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly) *CGPath normalizedPath;
@property ? normalizedPoints;
@property (readonly) NSInteger pointCount;
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly) NSUInteger topLevelIndex; // ivar: _topLevelIndex


-(BOOL)isEqual:(id)arg0 ;
-(id)childContourAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPoints:(*void)arg0 topLevelIndex:(NSUInteger)arg1 indexPath:(id)arg2 aspectRatio:(float)arg3 ;
-(id)polygonApproximationWithEpsilon:(float)arg0 error:(*id)arg1 ;


@end


#endif