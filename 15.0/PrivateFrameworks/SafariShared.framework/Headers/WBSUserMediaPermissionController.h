// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSUSERMEDIAPERMISSIONCONTROLLER_H
#define WBSUSERMEDIAPERMISSIONCONTROLLER_H

@class NSMutableDictionary, NSURL, NSString;
@protocol WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate, OS_dispatch_queue;


#import "WBSPerSitePreferenceManager.h"
#import "WBSCoalescedAsynchronousWriter.h"
#import "WBSPerSitePreference.h"
#import "WBSPerSitePreferencesSQLiteStore.h"

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate>

 {
    NSMutableDictionary *_cachedSettings;
    WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    atomic<LoadingStatus> _savedStateLoadStatus;
    NSURL *_userMediaPermissionsFileURL;
}


@property (readonly, nonatomic) WBSPerSitePreference *cameraMediaCapturePreference; // ivar: _cameraMediaCapturePreference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreference *microphoneMediaCapturePreference; // ivar: _microphoneMediaCapturePreference
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // ivar: _perSitePreferencesStore
@property (readonly) Class superclass;


+(id)localizedStringForPerSitePreferenceValue:(id)arg0 ;
+(id)sharedController;
-(BOOL)_captureDevicesAreAllDefaultsGivenPermission:(NSUInteger)arg0 ;
-(BOOL)_isPreferenceValid:(id)arg0 ;
-(BOOL)_removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 ;
-(BOOL)_setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 ;
-(NSInteger)_mediaCaptureSettingForMediaCaptureType:(NSInteger)arg0 userMediaPermission:(NSUInteger)arg1 ;
-(NSInteger)_mediaCaptureTypeForPreference:(id)arg0 ;
-(NSInteger)preferencesStoreKeyForPreference:(id)arg0 ;
-(NSUInteger)_permissionByApplyingDefaultsForMissingValuesInPermission:(NSUInteger)arg0 ;
-(NSUInteger)_permissionByRemovingDefaultPermissionFlagsInPermission:(NSUInteger)arg0 ;
-(NSUInteger)_permissionForOrigin:(id)arg0 topLevelOrigin:(id)arg1 ;
-(NSUInteger)_permissionMaskForMediaCaptureType:(NSInteger)arg0 ;
-(NSUInteger)_userMediaPermissionForMediaCaptureType:(NSInteger)arg0 mediaCaptureSetting:(NSInteger)arg1 ;
-(NSUInteger)permissionForDomain:(id)arg0 ;
-(NSUInteger)permissionForNonHTTPSOriginFromPermission:(NSUInteger)arg0 ;
-(NSUInteger)permissionForOrigin:(id)arg0 topLevelOrigin:(id)arg1 ;
-(NSUInteger)userMediaPermissionForDefaultPreferenceValues;
-(id)_dictionaryRepresentation;
-(id)_init;
-(id)_policyForOrigin:(id)arg0 topLevelOrigin:(id)arg1 ;
-(id)_saltForOrigin:(id)arg0 topLevelOrigin:(id)arg1 frameIdentifier:(NSUInteger)arg2 ;
-(id)_saltWithPolicyEntry:(id)arg0 computedPermission:(NSUInteger)arg1 frameIdentifier:(NSUInteger)arg2 ;
-(id)_standardizedURLForDomain:(id)arg0 ;
-(id)_validPolicyForDomainWithOrigin:(id)arg0 topLevelOrigin:(id)arg1 ;
-(id)_validPolicyForOrigin:(id)arg0 topLevelOrigin:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithUserMediaPermissionsFileURL:(id)arg0 perSitePreferencesStore:(id)arg1 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)preferences;
-(id)saltForOrigin:(id)arg0 topLevelOrigin:(id)arg1 frameIdentifier:(NSUInteger)arg2 ;
-(id)valuesForPreference:(id)arg0 ;
-(void)_cachedSettingsDidChange;
-(void)_cachedSettingsDidChangeAndWriteImmediately:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_dispatchAsyncOnInternalQueue:(id)arg0 ;
-(void)_dispatchSyncOnInternalQueue:(id)arg0 ;
-(void)_invalidateAllPermissionsForDomain:(id)arg0 ;
-(void)_invalidateCachedSettingsForOriginHash:(id)arg0 ;
-(void)_loadSavedPermissions;
-(void)_setPermission:(NSUInteger)arg0 expirationPolicy:(NSUInteger)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3 ;
-(void)checkUserMediaPermissionForURL:(id)arg0 mainFrameURL:(id)arg1 frameIdentifier:(NSUInteger)arg2 decisionHandler:(id)arg3 ;
-(void)didCommitLoadForFrameWithIdentifier:(NSUInteger)arg0 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg0 usingBlock:(id)arg1 ;
-(void)getPermissionForOrigin:(id)arg0 topLevelOrigin:(id)arg1 completionHandler:(id)arg2 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeout:(id)arg2 usingBlock:(id)arg3 ;
-(void)performDelayedLaunchOperations;
-(void)reloadPreferences;
-(void)removeAllOriginsAddedAfterDate:(id)arg0 ;
-(void)removeAllPermissionsWithCompletionHandler:(id)arg0 ;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetOriginPermissions;
-(void)resetOriginPermissionsWithCompletionHandler:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)savePendingChangesWithCompletionHandler:(id)arg0 ;
-(void)setPermission:(NSUInteger)arg0 expirationPolicy:(NSUInteger)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif