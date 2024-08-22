// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDXPCCODECS_H
#define _CDXPCCODECS_H


#import <Foundation/Foundation.h>


@interface _CDXPCCodecs : NSObject



+(BOOL)addDeviceIDs:(id)arg0 toDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)keepAliveFromKeepAliveEvent:(id)arg0 error:(*id)arg1 ;
+(BOOL)parseNotificationEvent:(id)arg0 registrationIdentifier:(*id)arg1 info:(*id)arg2 error:(*id)arg3 ;
+(NSInteger)eventTypeWithEvent:(id)arg0 ;
+(id)_log;
+(id)deviceIDsFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)errorFromReply:(id)arg0 ;
+(id)fetchPropertiesReplyWithEvent:(id)arg0 error:(id)arg1 ;
+(id)fetchProxySourceDeviceUUIDEvent;
+(id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg0 sourceDeviceUUID:(id)arg1 error:(id)arg2 ;
+(id)keepAliveEventWithKeepAlive:(BOOL)arg0 error:(*id)arg1 ;
+(id)keepAliveReplyWithEvent:(id)arg0 error:(id)arg1 ;
+(id)messageTypeFromEvent:(id)arg0 ;
+(id)notificationEventWithRegistrationIdentifier:(id)arg0 info:(id)arg1 error:(*id)arg2 ;
+(id)parseProxySourceDeviceUUIDEvent:(id)arg0 error:(*id)arg1 ;
+(id)requestActivateDevicesEvent;
+(id)requestActivateDevicesReplyWithEvent:(id)arg0 error:(id)arg1 ;
+(id)supportedClassesToUnarchive;
+(void)addError:(id)arg0 toReply:(id)arg1 ;


@end


#endif