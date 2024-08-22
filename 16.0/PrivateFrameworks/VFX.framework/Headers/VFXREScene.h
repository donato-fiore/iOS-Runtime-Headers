// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VFXRESCENE_H
#define VFXRESCENE_H


#import <Foundation/Foundation.h>

#import "_TtC3VFX9VFXEffect.h"
#import "_TtC3VFX8VFXScene.h"

@interface VFXREScene : NSObject {
    ? rootEntity;
    ? cameraEntity;
    ? device;
    ? cancellables;
    ? sceneTransform;
    ? reloadBlock;
    ? remappingTable;
}


@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect; // ivar: effect
@property (nonatomic, readonly) BOOL needsCollisionPlanes;
@property (nonatomic, readonly) *void opaqueECS;
@property (nonatomic, copy) id *reloadBlock;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene; // ivar: scene
@property (nonatomic, readonly) BOOL shouldUseDrawCallHandler;
@property (nonatomic, retain) id *transientDrawCall; // ivar: transientDrawCall
@property (nonatomic) NSInteger uuid; // ivar: uuid


-(NSInteger)addCollisionPlaneWithCenter:(struct ? )arg0 extentstransform;
-(NSInteger)fetchClientTextureIDWithNamed:(id)arg0 ;
-(id)REMeshAssetBindings;
-(id)createREMeshDataBinding;
-(id)generateMaterialsAndReturnError:(*id)arg0 ;
-(id)getREMeshAssetPath:(id)arg0 ;
-(id)init;
-(id)initWithDevice:(id)arg0 contentsOf:(id)arg1 error:(*id)arg2 ;
-(id)initWithDevice:(id)arg0 model:(id)arg1 ;
-(id)initWithDevice:(id)arg0 model:(id)arg1 options:(id)arg2 ;
-(id)neededModelsAndReturnError:(*id)arg0 ;
-(id)recycleBuffersGetCompletion:(SEL)arg0 ;
-(void)clear;
-(void)copyBindingValueWithObjectName:(id)arg0 bindingName:(id)arg1 action:(NSInteger)arg2 storageGetterBlock:(id)arg3 ;
-(void)removeCollisionPlaneWithId:(NSInteger)arg0 ;
-(void)setCameraEntityTransformProjection;
-(void)setClientTextureWithId:(NSInteger)arg0 texture:(id)arg1 ;
-(void)setREMeshDataBinding:(id)arg0 positionData:(id)arg1 normalData:(id)arg2 colorData:(id)arg3 ;
-(void)setRootEntityTransform;
-(void)tick;
-(void)tickWithDeltaTime:(CGFloat)arg0 ;
-(void)updateCollisionPlaneWithId:(NSInteger)arg0 center:(struct ? )arg1 extentstransform;


@end


#endif