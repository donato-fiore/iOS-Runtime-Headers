// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFINSTANCECONTEXTHOST_H
#define AFINSTANCECONTEXTHOST_H



#import "AFInstanceContext.h"
#import "AFInstanceInfo.h"

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}




+(id)effectiveMachServiceName:(id)arg0 ;
-(BOOL)isCurrent;
-(BOOL)isDefault;
-(BOOL)supportsAudioPowerUpdate;
-(BOOL)supportsProxyGroupPlayer;
-(BOOL)supportsTelephony;
-(id)audioDeviceIdentifier;
-(id)createXPCConnectionForMachService:(char *)arg0 targetQueue:(id)arg1 flags:(NSUInteger)arg2 ;
-(id)createXPCConnectionWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)createXPCListenerForMachService:(char *)arg0 targetQueue:(id)arg1 flags:(NSUInteger)arg2 ;
-(id)createXPCListenerWithMachServiceName:(id)arg0 ;
-(id)description;
-(id)info;
-(id)init;
-(id)mediaRouteIdentifier;
-(id)preferencesSubdomain;


@end


#endif