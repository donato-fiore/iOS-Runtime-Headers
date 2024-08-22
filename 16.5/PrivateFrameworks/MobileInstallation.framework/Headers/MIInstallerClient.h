// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIINSTALLERCLIENT_H
#define MIINSTALLERCLIENT_H

@class NSXPCConnection, NSError;
@protocol MobileInstallerDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol>

 {
    _opaque_pthread_mutex_t _delegatesCompleteCondMutex;
    _opaque_pthread_cond_t _delegatesCompleteCond;
}


@property (copy, nonatomic) id *appDictionaryEnumBlock; // ivar: _appDictionaryEnumBlock
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) BOOL delegatesComplete; // ivar: _delegatesComplete
@property (retain, nonatomic) NSError *delegatesCompleteError; // ivar: _delegatesCompleteError
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)installerWithAppDictionaryEnumerator:(id)arg0 ;
+(id)installerWithProgressBlock:(id)arg0 ;
-(BOOL)clearTestFlags:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)endTestMode:(*id)arg0 ;
-(BOOL)getTestModeEnabled:(*BOOL)arg0 outError:(*id)arg1 ;
-(BOOL)setTestFlags:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)setTestMode:(*id)arg0 ;
-(id)_waitForPendingDelegateMessages;
-(id)init;
-(id)raiseException;
-(int)pidForTesting;
-(void)_invalidateObject;
-(void)acquireReferenceforInstalledAppWithIdentity:(id)arg0 inDomain:(NSUInteger)arg1 matchingInstallSessionID:(id)arg2 withCompletion:(id)arg3 ;
-(void)checkCapabilities:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)clearUninstalledIdentifiers:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg0 personaUniqueString:(id)arg1 atResultURL:(id)arg2 withCompletion:(id)arg3 ;
-(void)dealloc;
-(void)delegateMessageDeliveryCompleteWithError:(id)arg0 ;
-(void)dieForTesting;
-(void)enumerateAppDictionary:(id)arg0 error:(id)arg1 ;
-(void)enumerateInstalledAppsWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)fetchDiskUsageForIdentifiers:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)fetchInfoForContainerizedAppWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchInfoForFrameworkAtURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)finalizeReference:(id)arg0 withCompletion:(id)arg1 ;
-(void)getAppMetadataForApp:(id)arg0 completion:(id)arg1 ;
-(void)installURL:(id)arg0 identity:(id)arg1 targetingDomain:(NSUInteger)arg2 withOptions:(id)arg3 returningResultInfo:(BOOL)arg4 completion:(id)arg5 ;
-(void)invalidateReference:(id)arg0 withCompletion:(id)arg1 ;
-(void)listSafeHarborsOfType:(NSUInteger)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)lookupSystemAppStateWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)lookupUninstalledWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)registerContentsForDiskImageAtURL:(id)arg0 completion:(id)arg1 ;
-(void)registerPlaceholderForReference:(id)arg0 completion:(id)arg1 ;
-(void)registerSafeHarborAtPath:(id)arg0 forIdentifier:(id)arg1 ofType:(NSUInteger)arg2 withOptions:(id)arg3 completion:(id)arg4 ;
-(void)removeSafeHarborForIdentifier:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)reportProgress:(id)arg0 ;
-(void)revertForLSWithIdentifier:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)revertIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)setSystemAppMigrationComplete:(id)arg0 ;
-(void)snapshotWKAppInCompanionAppID:(id)arg0 toURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)systemAppMigratorHasCompleted:(id)arg0 ;
-(void)uninstallIdentifiers:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)uninstallIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)unregisterContentsForDiskImageAtURL:(id)arg0 completion:(id)arg1 ;
-(void)updatePlaceholderMetadataForApp:(id)arg0 installType:(NSUInteger)arg1 failureReason:(NSUInteger)arg2 underlyingError:(id)arg3 failureSource:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)updateSinfForIXWithIdentifier:(id)arg0 withOptions:(id)arg1 sinfData:(id)arg2 completion:(id)arg3 ;
-(void)updateSinfForLSWithIdentifier:(id)arg0 withOptions:(id)arg1 sinfData:(id)arg2 completion:(id)arg3 ;
-(void)updateSystemAppStateForIdentifier:(id)arg0 appState:(int)arg1 completion:(id)arg2 ;
-(void)updateiTunesMetadataForIXWithIdentifier:(id)arg0 options:(id)arg1 plistData:(id)arg2 completion:(id)arg3 ;
-(void)updateiTunesMetadataForLSWithIdentifier:(id)arg0 options:(id)arg1 plistData:(id)arg2 completion:(id)arg3 ;
-(void)waitForSystemAppMigratorToComplete:(id)arg0 ;
-(void)waitForSystemAppMigratorWithCompletion:(id)arg0 ;


@end


#endif