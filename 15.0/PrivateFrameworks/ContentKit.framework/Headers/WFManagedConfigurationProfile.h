// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMANAGEDCONFIGURATIONPROFILE_H
#define WFMANAGEDCONFIGURATIONPROFILE_H

@class NSMutableDictionary, ACAccountStore, NSSet, ACAccount, MCProfileConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFManagedConfigurationProfile : NSObject

@property (readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass; // ivar: _accountIdentifiersByDataClass
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSMutableDictionary *accounts; // ivar: _accounts
@property (readonly) BOOL isBluetoothModificationAllowed;
@property (readonly) BOOL isOpenInRestrictionInEffect;
@property (readonly) BOOL isScreenShotAllowed;
@property (readonly) BOOL isWallpaperModificationAllowed;
@property (readonly) BOOL isWiFiPowerModificationAllowed;
@property (readonly, copy, nonatomic) NSSet *managedAppBundleIDs; // ivar: _managedAppBundleIDs
@property (readonly) BOOL mayOpenFromManagedToUnmanaged;
@property (readonly) BOOL mayOpenFromUnmanagedToManaged;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue; // ivar: _operatingQueue
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount; // ivar: _primaryAppleAccount
@property (readonly, copy, nonatomic) MCProfileConnection *profileConnection; // ivar: _profileConnection


+(id)defaultProfile;
-(BOOL)isAccountBasedSourceApp:(id)arg0 ;
-(BOOL)isAccountManaged:(id)arg0 ;
-(BOOL)isAppManaged:(id)arg0 ;
-(NSUInteger)managedLevelForContentOfURL:(id)arg0 ;
-(NSUInteger)managedLevelForContentOfURLs:(id)arg0 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg0 ;
-(id)accountWithIdentifier:(id)arg0 ;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg0 originatingAppBundleID:(id)arg1 originatingAccountIsManaged:(BOOL)arg2 ;
-(id)init;
-(id)initWithProfileConnection:(id)arg0 accountStore:(id)arg1 ;
-(void)handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)handleManagedAppDidChangeNotification:(id)arg0 ;
-(void)removeCachedChildrenAccountForAccount:(id)arg0 ;


@end


#endif