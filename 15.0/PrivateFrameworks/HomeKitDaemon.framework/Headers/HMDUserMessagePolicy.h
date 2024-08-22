// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERMESSAGEPOLICY_H
#define HMDUSERMESSAGEPOLICY_H

@class HMFMessagePolicy, NSUUID;
@protocol NSMutableCopying;


#import "HMDHome.h"

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>

 {
    NSUUID *_homeUUID;
}


@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) BOOL requiresCameraStreamingAccess; // ivar: _requiresCameraStreamingAccess
@property (readonly) BOOL requiresRemoteAccess; // ivar: _requiresRemoteAccess
@property (readonly) NSUInteger userPrivilege; // ivar: _userPrivilege


+(id)userMessagePolicyWithHome:(id)arg0 userPrivilege:(NSUInteger)arg1 remoteAccessRequired:(BOOL)arg2 ;
+(id)userMessagePolicyWithHome:(id)arg0 userPrivilege:(NSUInteger)arg1 remoteAccessRequired:(BOOL)arg2 requiresCameraStreamingAccess:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__initWithHome:(id)arg0 userPrivilege:(NSUInteger)arg1 remoteAccessRequired:(BOOL)arg2 requiresCameraStreamingAccess:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif