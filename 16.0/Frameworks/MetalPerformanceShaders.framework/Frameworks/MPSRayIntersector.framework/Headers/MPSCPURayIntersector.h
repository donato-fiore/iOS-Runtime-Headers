// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCPURAYINTERSECTOR_H
#define MPSCPURAYINTERSECTOR_H


#import <Foundation/Foundation.h>


@interface MPSCPURayIntersector : NSObject

@property (nonatomic) NSUInteger intersectionDataType; // ivar: _intersectionDataType
@property (nonatomic) NSUInteger intersectionStride; // ivar: _intersectionStride
@property (nonatomic) NSUInteger rayDataType; // ivar: _rayDataType
@property (nonatomic) NSUInteger rayStride; // ivar: _rayStride


-(id)init;
-(void)getIntersectionsOfType:(NSUInteger)arg0 rays:(*void)arg1 intersections:(*void)arg2 rayCount:(NSUInteger)arg3 accelerationStructure:(id)arg4 ;


@end


#endif