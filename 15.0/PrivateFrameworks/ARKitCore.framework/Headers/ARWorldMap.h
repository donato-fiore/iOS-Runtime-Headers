// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARWORLDMAP_H
#define ARWORLDMAP_H

@class NSArray, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ARPointCloud.h"

@interface ARWorldMap : NSObject <NSCopying, NSSecureCoding>

 {
    ? _center;
    ? _extent;
}


@property (copy, nonatomic) NSArray *anchors; // ivar: _anchors
@property ? center;
@property ? extent;
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints; // ivar: _rawFeaturePoints
@property (readonly, nonatomic) ? referenceOriginTransform; // ivar: _referenceOriginTransform
@property (copy, nonatomic) NSData *surfaceData; // ivar: _surfaceData
@property (readonly, copy, nonatomic) NSData *trackingData; // ivar: _trackingData
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)featurePointsForTrackingData:(id)arg0 referenceOriginTransform:(struct ? )arg1 ;
+(id)keyframesForTrackingData:(id)arg0 withFeaturePoints:(id)arg1 referenceOriginTransform:(struct ? )arg2 ;
+(struct ? )boundsForTrackingData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)extractReferenceObjectWithTransform:(struct ? )arg0 center:(*id)arg1 extenterror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrackingData:(id)arg0 referenceOriginTransform:(struct ? )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif