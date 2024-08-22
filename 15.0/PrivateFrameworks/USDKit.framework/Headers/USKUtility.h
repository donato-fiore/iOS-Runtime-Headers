// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USKUTILITY_H
#define USKUTILITY_H


#import <Foundation/Foundation.h>


@interface USKUtility : NSObject



+(BOOL)isSceneGraphNode:(id)arg0 ;
+(BOOL)isShaderOutputProperty:(id)arg0 ;
+(BOOL)isTransformNode:(id)arg0 ;
+(id)USDPreviewSurfaceDefaults;
+(id)bufferMaterialPropertiesWithMaterial:(id)arg0 ;
+(id)constantMaterialPropertiesWithMaterial:(id)arg0 ;
+(id)firstUVMeshAttributeNameInMaterial:(id)arg0 ;
+(id)meshGroupsWithNode:(id)arg0 ;
+(id)meshUniqueAndTriangulate:(id)arg0 names:(id)arg1 ;
+(id)shaderNodeType:(id)arg0 ;
+(id)targetPropertyWithProperty:(id)arg0 ;
+(id)textureMaterialPropertiesWithMaterial:(id)arg0 ;
+(id)transformKeyTimesWithNode:(id)arg0 ;
+(struct ? )localTransformWithNode:(id)arg0 time:(CGFloat)arg1 ;
+(void)setLocalTransformWithNode:(id)arg0 transform:(struct ? )arg1 time:(CGFloat)arg2 ;


@end


#endif