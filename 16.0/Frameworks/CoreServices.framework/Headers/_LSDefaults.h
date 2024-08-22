// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDEFAULTS_H
#define _LSDEFAULTS_H

@class NSURL, NSData, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSURL *_userContainerURL;
    NSData *_hmacSecret;
    NSMutableDictionary *_darwinNotificationNames;
    unsigned int _darwinNotificationNamesUID;
    os_unfair_lock_s _darwinNotificationNamesLock;
    NSInteger _currentDisplayGamut;
}


@property (readonly) NSData *HMACSecret;
@property (readonly, nonatomic) BOOL abortIfMayNotMapDatabase;
@property (readonly, nonatomic) BOOL allowsAlternateIcons;
@property (readonly) BOOL allowsUnentitledExtensionPointDeclaration;
@property (readonly) BOOL alwaysUseDebugOpenWithMenus;
@property (readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal; // ivar: _appleInternal
@property (readonly) NSInteger concurrentInstallOperations;
@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) CGFloat databaseSaveInterval;
@property (readonly) CGFloat databaseSaveLatency;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *dbSyncInterruptedFileURL;
@property (readonly) BOOL hasPersistentPreferences; // ivar: _hasPersistentPreferences
@property BOOL hasServer; // ivar: _hasServer
@property (readonly) NSURL *identifiersFileURL;
@property (readonly, getter=isInEducationMode) BOOL inEducationMode; // ivar: _inEducationMode
@property (readonly, getter=isInSyncBubble) BOOL inSyncBubble; // ivar: _inSyncBubble
@property (readonly, nonatomic, getter=isInXCTestRigInsecure) BOOL inXCTestRigInsecure; // ivar: _inXCTestRigInsecure
@property (readonly) NSURL *installJournalDirectoryURL;
@property (readonly, nonatomic) BOOL issueSandboxExceptionsIfMayNotMapDatabase;
@property (getter=isLightweightSystemServer) BOOL lightweightSystemServer; // ivar: _isLightweightSystemServer
@property (readonly) BOOL markLocalizationsStoredInDatabase;
@property (readonly) BOOL nsExtensionUsesLSSettingsStore;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly, getter=isRegionChina) BOOL regionChina;
@property (readonly) NSURL *securePeferencesFileURL;
@property (getter=isServer) BOOL server; // ivar: _isServer
@property (readonly) NSURL *settingsStoreFileURL;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemContentDatabaseStoreFileURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly, getter=isSystemServer) BOOL systemServer;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *userContainerURL;


+(id)sharedInstance;
-(id)classesWithNameForXCTests:(char *)arg0 ;
-(id)darwinNotificationNameForBaseName:(id)arg0 optionalSessionKey:(struct LSSessionKey *)arg1 ;
-(id)databaseContainerURL;
-(id)databaseContainerURLWithUID:(unsigned int)arg0 ;
-(id)databaseStoreFileURLWithUID:(unsigned int)arg0 ;
-(id)databaseUpdateNotificationNameForSessionKey:(struct LSSessionKey )arg0 ;
-(id)debugDescription;
-(id)init;
-(id)preferencesFileChangeNotificationName;
-(id)preferencesUpdateNotificationName;
-(id)serviceNameForConnectionType:(unsigned short)arg0 ;
-(id)serviceNameForConnectionType:(unsigned short)arg0 lightweightSystemService:(BOOL)arg1 ;
-(id)settingsUpdateNotificationNameForUserID:(unsigned int)arg0 ;
-(id)simulatorRootURL;
-(id)simulatorRuntimeBuildVersion;
-(id)simulatorRuntimeVersion;
-(id)systemContentDatabaseStoreFileURLWithUID:(unsigned int)arg0 ;
-(id)userPreferencesURL;
-(unsigned int)proxyUIDForCurrentEffectiveUID;
-(unsigned int)proxyUIDForUID:(unsigned int)arg0 ;


@end


#endif