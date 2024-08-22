// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMUTABLEUSERMESSAGEPOLICY_H
#define HMDMUTABLEUSERMESSAGEPOLICY_H



#import "HMDUserMessagePolicy.h"

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property BOOL requiresCameraStreamingAccess;
@property BOOL requiresRemoteAccess;
@property NSUInteger userPrivilege;


+(id)userMessagePolicyWithHome:(id)arg0 userPrivilege:(NSUInteger)arg1 remoteAccessRequired:(BOOL)arg2 ;
+(id)userMessagePolicyWithHome:(id)arg0 userPrivilege:(NSUInteger)arg1 remoteAccessRequired:(BOOL)arg2 requiresCameraStreamingAccess:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif