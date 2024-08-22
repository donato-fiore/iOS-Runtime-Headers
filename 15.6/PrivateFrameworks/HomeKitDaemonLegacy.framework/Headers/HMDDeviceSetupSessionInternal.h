// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICESETUPSESSIONINTERNAL_H
#define HMDDEVICESETUPSESSIONINTERNAL_H

@class HMFObject, NSData, NSDictionary;


#import "HMDHomeManager.h"

@interface HMDDeviceSetupSessionInternal : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSData *sessionData; // ivar: _sessionData
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)isSupported;
+(NSInteger)role;
+(id)allowedClasses;
-(BOOL)processSessionData:(id)arg0 fromBundle:(id)arg1 outAccessoryUUID:(*id)arg2 error:(*id)arg3 ;
-(id)initWithHomeManager:(id)arg0 ;


@end


#endif