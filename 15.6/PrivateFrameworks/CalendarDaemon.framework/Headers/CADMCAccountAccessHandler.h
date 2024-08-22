// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADMCACCOUNTACCESSHANDLER_H
#define CADMCACCOUNTACCESSHANDLER_H

@class NSString, NSArray, NSMutableDictionary;
@protocol CADAccountAccessHandler, CADACAccountsProvider, OS_dispatch_queue, CADCalCalendarInfoProvider, CADCalStoreInfoProvider, CADManagedConfigurationHandler, CADPermissionValidator;

#import <Foundation/Foundation.h>


@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler>



@property (readonly, nonatomic) NSUInteger accountManagement; // ivar: _accountManagement
@property (readonly, nonatomic) NSObject<CADACAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (retain, nonatomic) NSArray *cachedAccounts; // ivar: _cachedAccounts
@property (retain, nonatomic) NSMutableDictionary *cachedRestrictedStoreInfos; // ivar: _cachedRestrictedStoreInfos
@property (readonly, nonatomic) NSObject<CADCalCalendarInfoProvider> *calCalendarInfoProvider; // ivar: _calCalendarInfoProvider
@property (readonly, nonatomic) NSObject<CADCalStoreInfoProvider> *calStoreInfoProvider; // ivar: _calStoreInfoProvider
@property (readonly, nonatomic) NSObject<CADManagedConfigurationHandler> *managedConfigHandler; // ivar: _managedConfigHandler
@property (readonly, nonatomic) NSObject<CADPermissionValidator> *permissionValidator; // ivar: _permissionValidator


-(BOOL)_existingCalStoreMapsToAccountIdentifier:(id)arg0 ;
-(BOOL)_isDisabledForAction:(NSUInteger)arg0 ;
-(BOOL)_mayShowLocalAccountsForAction:(NSUInteger)arg0 ;
-(BOOL)isAccountManaged:(id)arg0 ;
-(BOOL)isActionAllowed:(NSUInteger)arg0 forAccountIdentifier:(id)arg1 ;
-(id)_filteredAccountsForAction:(NSUInteger)arg0 withUnfilteredAccounts:(id)arg1 ;
-(id)_restrictedCalStoreInfosForAction:(NSUInteger)arg0 ;
-(id)_restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(id)initWithCalStoreInfoProvider:(id)arg0 calendarInfoProvider:(id)arg1 accountsProvider:(id)arg2 permissionValidator:(id)arg3 managedConfigHandler:(id)arg4 accountManagement:(NSUInteger)arg5 bundleIdentifier:(id)arg6 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(void)_validateAction:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif