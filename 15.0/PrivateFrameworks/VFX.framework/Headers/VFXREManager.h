// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VFXREMANAGER_H
#define VFXREMANAGER_H


#import <Foundation/Foundation.h>


@interface VFXREManager : NSObject {
    ? entityManager;
    ? rootEntity;
    ? cameraEntity;
    ? device;
    ? lock;
    ? remappingTable;
    ? registeredBindings;
    ? transientDrawCall;
}


@property (nonatomic, readonly) float deltaTime;


-(BOOL)loadWithUrl:(id)arg0 loadScriptSymbols:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)registerBindingWithPath:(id)arg0 type:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(id)generateMaterialsAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithDevice:(id)arg0 modelManager:(id)arg1 ;
-(id)recycleBuffersGetCompletion:(SEL)arg0 ;
-(void)clear;
-(void)forEachDrawCall:(id)arg0 ;
-(void)setCameraEntityTransformProjection;
-(void)setRootEntityTransform;
-(void)tick:(*void)arg0 ;
-(void)unregisterBindingWithPath:(id)arg0 ;
-(void)withPointerToValueAtPath:(id)arg0 block:(id)arg1 ;


@end


#endif