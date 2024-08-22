// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLSCENE_H
#define MDLSCENE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MDLScene : NSObject {
    *mutex _sceneMutex;
    vector<ModelIO::RTRenderable *, std::allocator<ModelIO::RTRenderable *>> _sceneObjects;
    vector<MDLLight *, std::allocator<MDLLight *>> _sceneLights;
    int _signature;
}


@property (readonly, retain, nonatomic) NSArray *objects; // ivar: _objects


-(BOOL)castRayFrom:(struct RTCamera *)arg0 withDirection:(struct RTIntersectionResult *)arg1 usingCameraresult;
-(id)hitTestRayFromwithDirectionusingCamera;
-(id)init;
-(id)raytraceSceneWithCamera:(struct RTCamera *)arg0 reflection:(id)arg1 irradiance:(id)arg2 size;
-(int)acquireLockGuard;
-(void)addObject:(id)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)releaseLockGuard:(int)arg0 ;


@end


#endif