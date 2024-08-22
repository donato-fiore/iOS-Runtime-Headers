// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UMUSERMANAGER_H
#define UMUSERMANAGER_H

@class NSArray, NSString;
@protocol UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning, UMUserListUpdateObserver, UMUserPersonaUpdateObserver;

#import <Foundation/Foundation.h>

#import "UMUserPersona.h"
#import "UMUser.h"

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning>

 {
    NSArray *_allUsers;
}


@property (readonly, copy, nonatomic) UMUserPersona *currentPersona;
@property (readonly, copy, nonatomic) UMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLoginSession;
@property (readonly, nonatomic) BOOL isMultiUser;
@property (readonly, nonatomic) BOOL isSharedIPad;
@property (readonly, copy, nonatomic) UMUser *loginUser;
@property (readonly, nonatomic) NSUInteger maxNumberOfUsers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchIsOccurring; // ivar: _switchIsOccurring
@property (weak, nonatomic) NSObject<UMUserListUpdateObserver> *userListUpdateObserver; // ivar: _userListUpdateObserver
@property (weak, nonatomic) NSObject<UMUserPersonaUpdateObserver> *userPersonaUpdateObserver; // ivar: _userPersonaUpdateObserver
@property (readonly, nonatomic) NSUInteger userQuotaSize;


+(id)sharedManager;
-(BOOL)canAccessUserProperties;
-(BOOL)haveValidPersonaContextForIDString:(id)arg0 ;
-(BOOL)haveValidPersonaContextForPersonaUniqueString:(id)arg0 ;
-(BOOL)personaLoginWithUserODuuid:(id)arg0 withUid:(unsigned int)arg1 WithError:(*id)arg2 ;
-(BOOL)personaLogoutWithUserODuuid:(id)arg0 withUid:(unsigned int)arg1 WithError:(*id)arg2 ;
-(BOOL)userExists:(id)arg0 ;
-(NSUInteger)personaGenerationIdentifierWithError:(*id)arg0 ;
-(id)allUsers;
-(id)allUsersUnfiltered;
-(id)init;
-(id)listAllPersonaAttributesWithError:(*id)arg0 ;
-(id)listAllPersonaWithAttributes;
-(void)_allUsersDidChange;
-(void)createUser:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)createUserPersona:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)createUserPersona:(id)arg0 passcodeData:(id)arg1 passcodeDataType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteUserPersonaWithIDString:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteUserPersonaWithPersonaUniqueString:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteUserPersonaWithProfileInfo:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteUserPersonaWithType:(int)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)directSwitchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 preferences:(id)arg3 completionHandler:(id)arg4 ;
-(void)disableUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)disableUserPersonaWithProfileInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllPersonasForAllUsersWithCompletionHandler:(id)arg0 ;
-(void)fetchAllPersonasWithCompletionHandler:(id)arg0 ;
-(void)fetchAsidMapOfAllUsersWithCompletionHandler:(id)arg0 ;
-(void)fetchBundleIdentifierForPersonaWithIDString:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchBundleIdentifierForType:(int)arg0 completionHandler:(id)arg1 ;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id)arg0 ;
-(void)fetchPersonaWithIDString:(id)arg0 CompletionHandler:(id)arg1 ;
-(void)fetchPersonaWithPersonaUniqueString:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchPersonaWithType:(int)arg0 CompletionHandler:(id)arg1 ;
-(void)loadUser:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)loginUICheckInWithCompletionHandler:(id)arg0 ;
-(void)logoutToLoginSessionWithCompletionHandler:(id)arg0 ;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg0 ;
-(void)registerPersonaListUpdateObserver:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerPersonaListUpdateObserver:(id)arg0 withMachService:(id)arg1 completionHandler:(id)arg2 ;
-(void)registerUserListUpdateObserver:(id)arg0 ;
-(void)registerUserSwitchStakeHolder:(id)arg0 ;
-(void)registerUserSwitchStakeHolder:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerUserSyncStakeholder:(id)arg0 withMachServiceName:(id)arg1 ;
-(void)resumeQuotas;
-(void)resumeSync;
-(void)setBundlesIdentifiers:(id)arg0 forPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(id)arg2 ;
-(void)setBundlesIdentifiers:(id)arg0 forUniquePersonaType:(int)arg1 completionHandler:(id)arg2 ;
-(void)setBundlesIdentifiers:(id)arg0 forUniquePersonaWithIDString:(id)arg1 completionHandler:(id)arg2 ;
-(void)setMultiPersonaBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupUMUserSessionProvisioning:(id)arg0 WithCompletionHandler:(id)arg1 ;
-(void)suspendQuotasWithCompletionHandler:(id)arg0 ;
-(void)switchToLoginUserWithCompletionHandler:(id)arg0 ;
-(void)switchToLoginUserWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)switchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)switchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 preferences:(id)arg3 completionHandler:(id)arg4 ;
-(void)terminateSyncWithCompletionHandler:(id)arg0 ;
-(void)unregisterStakeHolder:(id)arg0 status:(NSUInteger)arg1 reason:(id)arg2 ;
-(void)userInteractionIsEnabled;
-(void)userListDidUpdate;


@end


#endif