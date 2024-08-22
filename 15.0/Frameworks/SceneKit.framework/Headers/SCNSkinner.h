// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNSKINNER_H
#define SCNSKINNER_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNGeometry.h"
#import "SCNNode.h"
#import "SCNGeometrySource.h"

@interface SCNSkinner : NSObject <NSSecureCoding>

 {
    *__C3DSkinner _skinner;
    SCNGeometry *_baseGeometry;
    BOOL _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}


@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) SCNMatrix4 baseGeometryBindTransform;
@property (readonly, nonatomic) SCNGeometrySource *boneIndices;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) SCNGeometrySource *boneWeights;
@property (readonly, nonatomic) NSArray *bones;
@property (weak, nonatomic) SCNNode *skeleton;


+(BOOL)supportsSecureCoding;
+(id)_skinnerWithBaseGeometry:(id)arg0 skinnableGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 bindMatrix:(struct SCNMatrix4 )arg4 ;
+(id)skinnerWithBaseGeometry:(id)arg0 bones:(id)arg1 boneInverseBindTransforms:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 ;
+(id)skinnerWithSkinnerRef:(struct __C3DSkinner *)arg0 ;
+(struct __C3DSkinner *)_createSkinnerWithCompressedData:(id)arg0 bonesCount:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
+(struct __C3DSkinner *)_createSkinnerWithVertexCount:(NSInteger)arg0 bones:(id)arg1 boneWeights:(id)arg2 boneIndices:(id)arg3 baseGeometry:(id)arg4 ;
+(struct __C3DSkinner *)createSkinnerWithBaseGeometry:(id)arg0 bones:(id)arg1 boneWeights:(id)arg2 boneIndices:(id)arg3 ;
-(*void)__CFObject;
-(BOOL)wantsCPUSkinning;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSkinnerRef:(struct __C3DSkinner *)arg0 ;
-(id)joints;
-(id)scene;
-(struct __C3DScene *)sceneRef;
-(struct __C3DSkinner *)skinnerRef;
-(void)_syncObjCModel;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setWantsCPUSkinning:(BOOL)arg0 ;
-(void)set_bonesAndIndicesCompression:(BOOL)arg0 ;


@end


#endif