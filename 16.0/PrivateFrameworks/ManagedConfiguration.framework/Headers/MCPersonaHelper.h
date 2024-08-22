// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPERSONAHELPER_H
#define MCPERSONAHELPER_H


#import <Foundation/Foundation.h>


@interface MCPersonaHelper : NSObject



+(BOOL)adoptPersona:(id)arg0 error:(*id)arg1 ;
+(BOOL)isCurrentPersonaEnterprise;
+(BOOL)personaWithUniqueIdentifierExists:(id)arg0 ;
+(id)accountIdentifierForAppleAccountWithPersonaID:(id)arg0 ;
+(id)appleAccountWithPersonaID:(id)arg0 ;
+(id)createEnterprisePersona:(*id)arg0 passcode:(id)arg1 ;
+(id)currentPersonaID;
+(id)fetchDirtyPersonaIDs;
+(id)managedAppleIDNameWithPersonaID:(id)arg0 ;
+(id)performBlockUnderPersona:(id)arg0 block:(id)arg1 ;
+(id)performBlockUnderPersonalPersona:(id)arg0 ;
+(id)updateManagementInformationForAppleAccountWithPersonaID:(id)arg0 descriptionName:(id)arg1 managingSourceName:(id)arg2 ;
+(void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+(void)removePersona:(id)arg0 ;
+(void)removePersonaAndAccountsWithPersonaID:(id)arg0 ;
+(void)signOutEnterpriseAccountWithPersonaID:(id)arg0 ;
+(void)trackDirtyPersona:(id)arg0 ;
+(void)untrackAllDirtyPersonas;
+(void)untrackDirtyPersona:(id)arg0 ;


@end


#endif