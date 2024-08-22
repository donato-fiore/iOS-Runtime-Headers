// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOSURFACEREMOTEPERSURFACEPERCLIENTSTATE_H
#define IOSURFACEREMOTEPERSURFACEPERCLIENTSTATE_H


#import <Foundation/Foundation.h>

#import "IOSurfaceRemotePerSurfaceGlobalState.h"

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {
    *__IOSurfaceClient _surface;
    unsigned int _refcount;
}


@property (readonly, nonatomic) unsigned int debugRefCount;
@property (retain, nonatomic) IOSurfaceRemotePerSurfaceGlobalState *globalState; // ivar: _globalState
@property (readonly, nonatomic) *__IOSurfaceClient surface;


-(BOOL)removeClientReferenceToSurface;
-(id)initWithSurface:(struct __IOSurfaceClient *)arg0 mappedAddress:(*void)arg1 mappedSize:(NSUInteger)arg2 extraData:(id)arg3 ;
-(id)mergeExtraData:(id)arg0 ;
-(void)addClientReferenceToSurfaceWithExtraData:(id)arg0 ;
-(void)dealloc;


@end


#endif