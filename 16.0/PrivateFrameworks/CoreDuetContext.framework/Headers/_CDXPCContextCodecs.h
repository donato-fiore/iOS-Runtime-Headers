// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDXPCCONTEXTCODECS_H
#define _CDXPCCONTEXTCODECS_H

@class CDXPCCodecs;



@interface _CDXPCContextCodecs : CDXPCCodecs



+(BOOL)addKeyPaths:(id)arg0 toDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)addRegistration:(id)arg0 toDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)parseSubscribeToContextValueNotificationsEvent:(id)arg0 registration:(*id)arg1 deviceIDs:(*id)arg2 error:(*id)arg3 ;
+(BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg0 registration:(*id)arg1 deviceIDs:(*id)arg2 error:(*id)arg3 ;
+(id)commonContextValueNotificationsEventWithType:(char *)arg0 registration:(id)arg1 deviceIDs:(id)arg2 error:(*id)arg3 ;
+(id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg0 error:(*id)arg1 ;
+(id)keyPathsFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)keyPathsFromFetchPropertiesEvent:(id)arg0 error:(*id)arg1 ;
+(id)registrationFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg0 deviceIDs:(id)arg1 error:(*id)arg2 ;
+(id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg0 error:(id)arg1 ;
+(id)supportedClassesToUnarchive;
+(id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg0 deviceIDs:(id)arg1 error:(*id)arg2 ;
+(id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg0 error:(id)arg1 ;


@end


#endif