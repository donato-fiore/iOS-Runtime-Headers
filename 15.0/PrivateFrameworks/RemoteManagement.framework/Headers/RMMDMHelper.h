// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMDMHELPER_H
#define RMMDMHELPER_H


#import <Foundation/Foundation.h>


@interface RMMDMHelper : NSObject



+(BOOL)_isActive;
+(BOOL)_unenrollDeviceChannelWithController:(id)arg0 enrollmentURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)_unenrollUserChannelWithController:(id)arg0 enrollmentURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)processDeclarativeManagementCommandWithProfileIdentifier:(id)arg0 channelType:(NSInteger)arg1 username:(id)arg2 personaID:(id)arg3 request:(id)arg4 error:(*id)arg5 ;
+(BOOL)unenrollWithProfileIdentifier:(id)arg0 channelType:(NSInteger)arg1 error:(*id)arg2 ;
+(id)_enrollDeviceChannelIfNeededWithController:(id)arg0 profileIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)_enrollUserChannelIfNeededWithController:(id)arg0 profileIdentifier:(id)arg1 username:(id)arg2 personaID:(id)arg3 error:(*id)arg4 ;
+(id)_enrolledDeviceChannelWithController:(id)arg0 profileIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)_enrolledUserChannelWithController:(id)arg0 profileIdentifier:(id)arg1 username:(id)arg2 personaID:(id)arg3 error:(*id)arg4 ;
+(id)_managementChannelForAccountIdentifier:(id)arg0 controller:(id)arg1 error:(*id)arg2 ;
+(id)_managementChannelForEnrollmentURL:(id)arg0 controller:(id)arg1 error:(*id)arg2 ;
+(void)_setActive:(BOOL)arg0 ;


@end


#endif