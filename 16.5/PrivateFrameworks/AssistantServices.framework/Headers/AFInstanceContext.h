// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFINSTANCECONTEXT_H
#define AFINSTANCECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AFInstanceInfo.h"

@interface AFInstanceContext : NSObject

@property (readonly, copy, nonatomic) NSString *audioDeviceIdentifier;
@property (readonly, nonatomic) AFInstanceInfo *info;
@property (readonly, nonatomic) BOOL isCurrent;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *preferencesSubdomain;
@property (readonly, nonatomic) BOOL supportsAudioPowerUpdate;
@property (readonly, nonatomic) BOOL supportsProxyGroupPlayer;
@property (readonly, nonatomic) BOOL supportsTelephony;


+(id)currentContext;
+(id)defaultContext;
+(id)effectiveMachServiceName:(id)arg0 ;
-(id)createXPCConnectionForMachService:(char *)arg0 targetQueue:(id)arg1 flags:(NSUInteger)arg2 ;
-(id)createXPCConnectionWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)createXPCListenerForMachService:(char *)arg0 targetQueue:(id)arg1 flags:(NSUInteger)arg2 ;
-(id)createXPCListenerWithMachServiceName:(id)arg0 ;


@end


#endif