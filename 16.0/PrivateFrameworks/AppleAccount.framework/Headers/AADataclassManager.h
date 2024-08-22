// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AADATACLASSMANAGER_H
#define AADATACLASSMANAGER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface AADataclassManager : NSObject {
    ACAccountStore *_store;
}




+(id)appBundleIdentifierDictionary;
+(id)sharedManager;
-(BOOL)_hideDataclassWhenAppRemoved:(id)arg0 ;
-(BOOL)_isRestrictedForDataclass:(id)arg0 ;
-(BOOL)_shouldProvisionNotesForAccount:(id)arg0 ;
-(BOOL)_shouldProvisionRemindersForAccount:(id)arg0 ;
-(BOOL)canAutoEnableDataclass:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)isDataclassActionSafeForAutoEnablement:(id)arg0 ;
-(BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg0 ;
-(BOOL)shouldProvisionDataclass:(id)arg0 forAccount:(id)arg1 ;
-(id)_filteredDataclassesForAccountClass:(id)arg0 ;
-(id)_nonVisibleServiceDataclass;
-(id)_userVisibleDataclasses;
-(id)appBundleIdentifierForDataclass:(id)arg0 ;
-(id)blackListedMacOSDataclasses;
-(id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg0 dataclassesForEnablement:(id)arg1 ;
-(id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg0 ;
-(id)filteredServerProvidedFeatures:(id)arg0 forAccount:(id)arg1 ;
-(id)init;
-(id)initWithAccountStore:(id)arg0 ;
-(id)whitelistedDataclassesForAppleAccountClassBasic;
-(id)whitelistedDataclassesForAppleAccountClassFull;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg0 completion:(id)arg1 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg0 fromAccount:(id)arg1 completion:(id)arg2 ;


@end


#endif