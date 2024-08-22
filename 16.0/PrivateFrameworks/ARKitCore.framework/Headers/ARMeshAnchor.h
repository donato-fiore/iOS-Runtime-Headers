// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARMESHANCHOR_H
#define ARMESHANCHOR_H



#import "ARAnchor.h"
#import "ARMeshGeometry.h"

@interface ARMeshAnchor : ARAnchor {
    ? _corner;
    ? _extent;
}


@property ? corner;
@property ? extent;
@property (readonly, nonatomic) ARMeshGeometry *geometry; // ivar: _geometry
@property (nonatomic) CGFloat maxExtentError; // ivar: _maxExtentError
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) ? visionTransform; // ivar: _visionTransform


-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeometry:(id)arg0 atTimestamp:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initWithGeometry:(id)arg0 atTimestamp:(CGFloat)arg1 identifier:(id)arg2 referenceOriginTransform:(struct ? )arg3 ;
-(id)initWithGeometry:(id)arg0 atTimestamp:(CGFloat)arg1 identifier:(id)arg2 transform:(struct ? )arg3 ;
-(id)initWithGeometry:(id)arg0 atTimestamp:(CGFloat)arg1 identifier:(id)arg2 transform:(struct ? )arg3 voxelSize:(CGFloat)arg4 ;
-(id)initWithGeometry:(id)arg0 atTimestamp:(CGFloat)arg1 identifier:(id)arg2 visionTransform:(struct ? )arg3 referenceOriginTransform:(struct ? )arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif