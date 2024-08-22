// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCMANAGEDPERMISSION_H
#define DOCMANAGEDPERMISSION_H

@class ACAccountStore, NSCache, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface DOCManagedPermission : NSObject {
    BOOL _mayOpenFromManagedToUnmanaged;
    BOOL _mayOpenFromUnmanagedToManaged;
    BOOL _isManagedAppsCloudSyncDisallowed;
    BOOL _hasOpenInRestrictions;
    BOOL _isUSBAccessAllowed;
    BOOL _isNetworkDriveAccessInFilesAllowed;
    BOOL _isLocalStorageAllowed;
    BOOL _didLoadSharedConnectionValues;
}


@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSCache *appContainerIDCache; // ivar: _appContainerIDCache
@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (readonly, nonatomic) BOOL hasOpenInRestrictions;
@property (nonatomic) NSUInteger hostAccountDataOwnerState; // ivar: _hostAccountDataOwnerState
@property (copy, nonatomic) NSString *hostIdentifier; // ivar: _hostIdentifier
@property (readonly, nonatomic) BOOL isNetworkDriveAllowed;
@property (readonly, nonatomic) BOOL isUSBAccessAllowed;
@property (copy, nonatomic) NSDictionary *personaStringForDomainID; // ivar: _personaStringForDomainID


+(id)defaultPermission;
-(BOOL)adoptPersona:(id)arg0 andPerformBlock:(id)arg1 ;
-(BOOL)adoptPersonaFromDomain:(id)arg0 andPerformBlock:(id)arg1 ;
-(BOOL)adoptPersonaFromItem:(id)arg0 andPerformBlock:(id)arg1 ;
-(BOOL)adoptPersonaFromItems:(id)arg0 andPerformBlock:(id)arg1 ;
-(BOOL)adoptPersonaliCloudPersonaAndPerformBlock:(id)arg0 ;
-(BOOL)canAppWithBundleIdentifier:(id)arg0 performAction:(NSUInteger)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)canAppWithBundleIdentifier:(id)arg0 performAction:(NSUInteger)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)canAppWithBundleIdentifier:(id)arg0 performAction:(NSUInteger)arg1 item:(id)arg2 ;
-(BOOL)canAppWithConfiguration:(id)arg0 handleNode:(id)arg1 ;
-(BOOL)canAppWithDataOwnerState:(NSUInteger)arg0 performAction:(NSUInteger)arg1 dataOwnerState:(NSUInteger)arg2 ;
-(BOOL)canAppWithDataOwnerState:(NSUInteger)arg0 performAction:(NSUInteger)arg1 node:(id)arg2 ;
-(BOOL)canCopyItems:(id)arg0 ;
-(BOOL)canCopySourceIsContentManaged:(BOOL)arg0 ;
-(BOOL)canCopyfromContainingBundleIdentifer:(id)arg0 ;
-(BOOL)canHostAppPerformAction:(NSUInteger)arg0 accountIdentifier:(id)arg1 ;
-(BOOL)canHostAppPerformAction:(NSUInteger)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)canHostAppPerformAction:(NSUInteger)arg0 fileProviderDomain:(id)arg1 ;
-(BOOL)canHostAppPerformAction:(NSUInteger)arg0 legacyPickerExtension:(id)arg1 ;
-(BOOL)canHostAppPerformAction:(NSUInteger)arg0 targetNode:(id)arg1 ;
-(BOOL)canItem:(id)arg0 performAction:(NSUInteger)arg1 item:(id)arg2 ;
-(BOOL)canItems:(id)arg0 performAction:(NSUInteger)arg1 fileProviderDomain:(id)arg2 ;
-(BOOL)hasAnyEffectiveRestrictions;
-(BOOL)isCurrentPersonaEnterprise;
-(BOOL)isLocalStorageAllowed;
-(BOOL)isManagedAppsCloudSyncAllowed;
-(BOOL)isManagedAppsCloudSyncDisallowed;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(NSUInteger)dataOwnerStateForAccountIdentifier:(id)arg0 ;
-(NSUInteger)dataOwnerStateForBundleIdentifier:(id)arg0 ;
-(NSUInteger)dataOwnerStateForConfiguration:(id)arg0 ;
-(NSUInteger)dataOwnerStateForFPDomain:(id)arg0 ;
-(NSUInteger)dataOwnerStateForItem:(id)arg0 ;
-(NSUInteger)dataOwnerStateForItems:(id)arg0 ;
-(NSUInteger)dataOwnerStateForNode:(id)arg0 ;
-(NSUInteger)dataOwnerStateForiCloudDomain:(id)arg0 ;
-(NSUInteger)userActionForConfiguration:(id)arg0 ;
-(id)allowedFileProviderBundleIdentifiersForHostBundleIdentifier:(id)arg0 ;
-(id)appContainerBundleIDForFPItem:(id)arg0 ;
-(id)defaultFileProviderForAppBundle:(id)arg0 ;
-(id)init;
-(id)personaStringFromItem:(id)arg0 ;
-(id)queueFileDataForAcceptance:(id)arg0 originalFileName:(id)arg1 forBundleID:(id)arg2 outError:(*id)arg3 ;
-(void)_loadSharedConnectionValues;
-(void)cachePersonaStringForProviders:(id)arg0 ;
-(void)cleanAppContainerBundleIDCache;
-(void)dealloc;
-(void)resetAllCachedPermissions;


@end


#endif