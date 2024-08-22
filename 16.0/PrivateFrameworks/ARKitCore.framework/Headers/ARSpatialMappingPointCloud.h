// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSPATIALMAPPINGPOINTCLOUD_H
#define ARSPATIALMAPPINGPOINTCLOUD_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARSpatialMappingPointCloud : NSObject <NSCopying>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _points;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _normals;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _colors;
    vector<unsigned char, std::allocator<unsigned char>> _semantics;
    vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> _semanticLabels;
    vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> _semanticVotes;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _pointsToWorld;
}


@property ? cameraPose; // ivar: _cameraPose
@property ? colors;
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property ? normals;
@property ? points;
@property ? pointsToWorld;
@property ? semanticLabels;
@property ? semanticVotes;
@property (readonly, nonatomic) char * semantics;
@property (readonly, nonatomic) NSUInteger semanticsBinSize; // ivar: _semanticsBinSize
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)dictionaryFromArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPointCloud:(struct CV3DReconPointCloud *)arg0 smTransform:(struct ? )arg1 identifier:(id)arg2 timestamp:(CGFloat)arg3 ;
-(id)initWithPointCloud:(struct CV3DReconPointCloud *)arg0 transform:(struct ? )arg1 identifier:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)updateTransform:(struct ? )arg0 ;


@end


#endif