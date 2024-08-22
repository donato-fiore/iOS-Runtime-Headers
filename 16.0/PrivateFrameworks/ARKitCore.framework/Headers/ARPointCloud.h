// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPOINTCLOUD_H
#define ARPOINTCLOUD_H

@class ADJasperPointCloud;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPointCloud : NSObject <NSSecureCoding>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _pointsVector;
    vector<unsigned long long, std::allocator<unsigned long long>> _identifiersVector;
    vector<float, std::allocator<float>> _vergenceAngleCosinesVector;
    ? _centroid;
    ? _standardDeviation;
    ADJasperPointCloud *_depthPointCloud;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) *NSUInteger identifiers;
@property ? points;


+(id)concatPointClouds:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_hitTestPointFromOrigin:(float)arg0 withDirection:(struct ? )arg1 maximumAnglecameraToWorldTransform;
-(id)filterPointCloudFromellipsoid;
-(id)filterPointCloudWithIdentifiers:(struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> )arg0 ;
-(id)initWithCV3DPointData:(id)arg0 minVergenceAngleCosine:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDepthPointCloud:(id)arg0 ;
-(id)initWithPointData:(id)arg0 ;
-(id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )arg0 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> )arg1 ;
-(id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )arg0 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> )arg1 vergenceAngleCosinesVector:(struct vector<float, std::allocator<float>> )arg2 ;
-(id)pointCloudByApplyingTransform:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif