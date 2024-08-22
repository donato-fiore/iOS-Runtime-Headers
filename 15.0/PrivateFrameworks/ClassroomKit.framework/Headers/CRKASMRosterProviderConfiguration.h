// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMROSTERPROVIDERCONFIGURATION_H
#define CRKASMROSTERPROVIDERCONFIGURATION_H

@class NSMapTable, NSString;
@protocol CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>

#import "CRKASMCredentialStore.h"

@interface CRKASMRosterProviderConfiguration : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // ivar: _credentialStore
@property (readonly, nonatomic) NSInteger maxCourseTrustedUsersCount; // ivar: _maxCourseTrustedUsersCount
@property (readonly, nonatomic) NSInteger maxCourseUsersCount; // ivar: _maxCourseUsersCount
@property (readonly, nonatomic) CGFloat rosterMutationTimeout; // ivar: _rosterMutationTimeout
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *rosterRequirements; // ivar: _rosterRequirements
@property (readonly, nonatomic) NSMapTable *trustedUserCache; // ivar: _trustedUserCache
@property (readonly, copy, nonatomic) NSString *trustedUserCommonNamePrefix; // ivar: _trustedUserCommonNamePrefix
@property (readonly, nonatomic) NSMapTable *userCache; // ivar: _userCache
@property (readonly, copy, nonatomic) NSString *userCommonNamePrefix; // ivar: _userCommonNamePrefix


+(BOOL)currentPlatformRequiresPersonaAdoption;
+(BOOL)dataSeparationEnabled;
+(BOOL)userCachingEnabled;
+(id)instructorRosterConfiguration;
+(id)makeInstructorClassKitFacade;
+(id)makeStandardClassKitFacade;
+(id)makeStudentClassKitFacade;
+(id)studentRosterConfiguration;
-(id)initWithUserCommonNamePrefix:(id)arg0 trustedUserCommonNamePrefix:(id)arg1 rosterRequirements:(id)arg2 credentialStore:(id)arg3 maxCourseUsersCount:(NSInteger)arg4 maxCourseTrustedUsersCount:(NSInteger)arg5 rosterMutationTimeout:(CGFloat)arg6 userCachingEnabled:(BOOL)arg7 ;


@end


#endif