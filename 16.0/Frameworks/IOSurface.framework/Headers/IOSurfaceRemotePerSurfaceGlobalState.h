// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACEREMOTEPERSURFACEGLOBALSTATE_H
#define IOSURFACEREMOTEPERSURFACEGLOBALSTATE_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IOSurfaceRemotePerSurfaceGlobalState : NSObject {
    os_unfair_lock_s _lock;
    unsigned int _csid;
    *void _mapped_address;
    NSUInteger _mapped_size;
    NSObject<OS_xpc_object> *_extraData;
}




+(id)globalStateForSurface:(struct __IOSurfaceClient *)arg0 mappedAddress:(*void)arg1 mappedSize:(NSUInteger)arg2 extraData:(id)arg3 ;
-(id)initWithSurfaceID:(unsigned int)arg0 mappedAddress:(*void)arg1 mappedSize:(NSUInteger)arg2 extraData:(id)arg3 ;
-(id)mergeExtraData:(id)arg0 ;
-(void)dealloc;


@end


#endif