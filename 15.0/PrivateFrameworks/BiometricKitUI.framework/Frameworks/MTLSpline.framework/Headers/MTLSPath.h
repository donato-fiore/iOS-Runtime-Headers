// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSPATH_H
#define MTLSPATH_H


#import <Foundation/Foundation.h>


@interface MTLSPath : NSObject {
    float _strokeWeight;
    vector<ControlPoint, std::allocator<ControlPoint>> _controlPointsVector;
    vector<PatchInfo, std::allocator<PatchInfo>> _patchInfoVector;
    vector<unsigned short, std::allocator<unsigned short>> _indicesVector;
    vector<InstanceInfo, std::allocator<InstanceInfo>> _instancesVector;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _collapsedTransforms;
}


@property (readonly) *ControlPoint controlPoints;
@property (readonly) NSUInteger controlPointsCount;
@property (readonly) *unsigned short indices;
@property (readonly) NSUInteger indicesCount;
@property (readonly) NSUInteger instanceCount;
@property (readonly) *InstanceInfo instances;
@property (readonly) *PatchInfo patchInfo;
@property (readonly) NSUInteger patchInfoCount;


-(NSUInteger)instanceInfoVectorCount;
-(id)init;
-(id)initWithPoints:(**NSUInteger)arg0 colors:(float)arg1 count:(NSUInteger)arg2 strokeWeight:(struct AxisAngle )arg3 patternrotationscaletranslation;
-(id)initWithPoints:(*NSUInteger)arg0 count:(float)arg1 strokeWeight:(NSUInteger)arg2 pattern:(struct AxisAngle )arg3 rotationscaletranslation;
-(id)interpolateTangentWithPointst;
-(id)interpolateWithPointst;
-(struct InstanceInfo *)instanceInfoVectorData;
-(void)appendControlPoints:(struct ControlPoint *)arg0 count:(NSUInteger)arg1 ;
-(void)appendIndices:(*unsigned short)arg0 count:(NSUInteger)arg1 ;
-(void)appendInstances:(struct InstanceInfo *)arg0 count:(NSUInteger)arg1 ;
-(void)appendPatchInfo:(struct PatchInfo *)arg0 count:(NSUInteger)arg1 ;
-(void)clearInstances;
-(void)collapseTransform:(struct ? )arg0 ;
-(void)genIndicesWithPattern:(NSUInteger)arg0 ;
-(void)genLeftCapWithWidth:(float)arg0 ;
-(void)genRightCapWithWidth:(float)arg0 ;


@end


#endif