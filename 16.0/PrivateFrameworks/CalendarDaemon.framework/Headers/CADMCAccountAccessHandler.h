// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADMCACCOUNTACCESSHANDLER_H
#define CADMCACCOUNTACCESSHANDLER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol CADACAccountsProvider, CADManagedConfigurationHandler, CADPermissionValidator;


#import "CADAccountAccessHandler.h"

@interface CADMCAccountAccessHandler : CADAccountAccessHandler {
    os_unfair_lock_s _lock;
    NSArray *_cachedAccounts;
    NSMutableDictionary *_allowedAccountIdentifiersByAction;
    NSArray *_localAccountRestrictionsByAction;
}


@property (readonly, nonatomic) NSUInteger accountManagement; // ivar: _accountManagement
@property (readonly, nonatomic) NSObject<CADACAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<CADManagedConfigurationHandler> *managedConfigHandler; // ivar: _managedConfigHandler
@property (readonly, nonatomic) NSObject<CADPermissionValidator> *permissionValidator; // ivar: _permissionValidator


-(?)gatherRestrictedCalendarRowIDs:(?)arg0 forActioninDatabase;
-(?)isActionAllowed:(?)arg0 forStoreinDatabase;
-(BOOL)_areLocalStoresRestrictedForAction:(NSUInteger)arg0 ;
-(BOOL)_isAccount:(id)arg0 restrictedForAction:(NSUInteger)arg1 ;
-(BOOL)_isDisabledForAction:(NSUInteger)arg0 ;
-(BOOL)_mayShowLocalAccountsForAction:(NSUInteger)arg0 ;
-(id)_cachedAccounts;
-(id)_filteredAccountsForAction:(NSUInteger)arg0 withUnfilteredAccounts:(id)arg1 ;
-(id)_loadAllowedAccountIdentifiersForAction:(NSUInteger)arg0 ;
-(id)initWithDatabaseDataProvider:(id)arg0 accountsProvider:(id)arg1 permissionValidator:(id)arg2 managedConfigHandler:(id)arg3 accountManagement:(NSUInteger)arg4 bundleIdentifier:(id)arg5 ;
-(void)reset;


@end


#endif