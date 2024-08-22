// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMMIGRATOR_H
#define MDMMIGRATOR_H


#import <Foundation/Foundation.h>


@interface MDMMigrator : NSObject



+(id)sharedMigrator;
-(void)_createRMAccountWithPersonaID:(id)arg0 managedAppleID:(id)arg1 profileIdentifier:(id)arg2 organizationName:(id)arg3 ;
-(void)_moveNonStoreManagedBooksToSystemGroupContainer;
-(void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)arg0 ;
-(void)_resetManagedAppRemovability;
-(void)_resetManagedAppTapToPayScreenLock;
-(void)_updateNonStoreBooksManifestForSystemGroupContainer;
-(void)_updateSkipBackupKeyForNonStoreBooksDirectory;
-(void)_updateToMDMPropertiesForDDMActiveState;
-(void)_updateUnlockTokenSecretToClassDIfNeeded;
-(void)_updateUserEnrollmentToUseRMAccount;
-(void)migrateMDMWithContext:(int)arg0 ;


@end


#endif