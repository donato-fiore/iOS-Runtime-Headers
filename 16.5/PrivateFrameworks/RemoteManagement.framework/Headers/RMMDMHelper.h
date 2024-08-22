// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMDMHELPER_H
#define RMMDMHELPER_H


#import <Foundation/Foundation.h>


@interface RMMDMHelper : NSObject



+(BOOL)_unenrollDDMChannelWithController:(id)arg0 enrollmentURL:(id)arg1 enrollmentType:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)isActiveForScope:(NSInteger)arg0 ;
+(BOOL)processDeclarativeManagementCommandWithProfileIdentifier:(id)arg0 channelType:(NSInteger)arg1 username:(id)arg2 personaID:(id)arg3 request:(id)arg4 error:(*id)arg5 ;
+(BOOL)processDeclarativeManagementCommandWithProfileIdentifier:(id)arg0 enrollmentType:(NSInteger)arg1 scope:(NSInteger)arg2 username:(id)arg3 personaID:(id)arg4 request:(id)arg5 error:(*id)arg6 ;
+(BOOL)unenrollWithProfileIdentifier:(id)arg0 channelType:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)unenrollWithProfileIdentifier:(id)arg0 enrollmentType:(NSInteger)arg1 scope:(NSInteger)arg2 error:(*id)arg3 ;
+(id)_enrollDDMChannelIfNeededWithController:(id)arg0 profileIdentifier:(id)arg1 enrollmentType:(NSInteger)arg2 scope:(NSInteger)arg3 username:(id)arg4 personaID:(id)arg5 error:(*id)arg6 ;
+(id)_enrolledDDMChannelWithController:(id)arg0 profileIdentifier:(id)arg1 enrollmentType:(NSInteger)arg2 scope:(NSInteger)arg3 username:(id)arg4 personaID:(id)arg5 error:(*id)arg6 ;
+(id)_managementChannelForEnrollmentURL:(id)arg0 controller:(id)arg1 error:(*id)arg2 ;
+(void)_setActive:(BOOL)arg0 scope:(NSInteger)arg1 ;


@end


#endif