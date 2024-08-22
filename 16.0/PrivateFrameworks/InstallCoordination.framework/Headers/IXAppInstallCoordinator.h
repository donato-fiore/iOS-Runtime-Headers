// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXAPPINSTALLCOORDINATOR_H
#define IXAPPINSTALLCOORDINATOR_H

@class NSString, LSApplicationRecord, NSError, NSUUID, NSArray;
@protocol IXCoordinatorWithPlaceholderPromise, OS_dispatch_queue, IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>

#import "IXApplicationIdentity.h"
#import "IXAppInstallCoordinatorSeed.h"

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>



@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) LSApplicationRecord *completedApplicationRecord; // ivar: _completedApplicationRecord
@property (readonly, nonatomic) NSUInteger coordinationState;
@property (readonly, nonatomic) unsigned int creatorEUID;
@property (readonly, nonatomic) NSUInteger creatorIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptionWithRemoteState;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger errorSourceIdentifier; // ivar: _errorSourceIdentifier
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasPlaceholderPromise;
@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IXApplicationIdentity *identity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) NSObject<IXAppInstallCoordinatorObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue;
@property (nonatomic) NSUInteger observersCalled; // ivar: _observersCalled
@property (readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // ivar: _seed
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *validInstallTypes;


+(BOOL)_synchronouslyEnumerateCoordinatorsForIntent:(NSUInteger)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
+(BOOL)cancelCoordinatorForAppWithBundleID:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)cancelCoordinatorForAppWithIdentity:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)cancelCoordinatorsForAppsWithApplicationIdentities:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)cancelCoordinatorsForAppsWithBundleIDs:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)demoteAppToPlaceholderWithApplicationIdentity:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 error:(*id)arg4 ;
// +(BOOL)enumerateCoordinatorsWithBlock:(id)arg0 error:(unk)arg1  ;
+(BOOL)enumerateCoordinatorsWithError:(*id)arg0 usingBlock:(id)arg1 ;
+(BOOL)killDaemonForTesting;
+(BOOL)modifiesLocalLaunchServicesDatabase;
+(BOOL)pauseCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)pauseCoordinatorForAppWithIdentity:(id)arg0 error:(*id)arg1 ;
+(BOOL)postNSCurrentLocaleDidChangeNotification;
+(BOOL)prioritizeCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)prioritizeCoordinatorForAppWithIdentity:(id)arg0 error:(*id)arg1 ;
+(BOOL)purgeAllCoordinatorsAndPromisesForCreator:(NSUInteger)arg0 ;
+(BOOL)refreshContainerTypes:(NSUInteger)arg0 forApplicationIdentity:(id)arg1 reason:(id)arg2 error:(*id)arg3 ;
+(BOOL)refreshContainerTypes:(NSUInteger)arg0 forBundleID:(id)arg1 reason:(id)arg2 error:(*id)arg3 ;
+(BOOL)refreshDataContainerForBundleID:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
+(BOOL)registerContentsForDiskImageAtURL:(id)arg0 options:(id)arg1 withError:(*id)arg2 ;
+(BOOL)resumeCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)resumeCoordinatorForAppWithIdentity:(id)arg0 error:(*id)arg1 ;
+(BOOL)revertAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)revertAppWithBundleID:(id)arg0 resultingApplicationRecord:(*id)arg1 error:(*id)arg2 ;
+(BOOL)revertAppWithIdentity:(id)arg0 resultingApplicationRecord:(*id)arg1 error:(*id)arg2 ;
+(BOOL)setTestModeForIdentifierPrefix:(id)arg0 testMode:(NSUInteger)arg1 ;
+(BOOL)setTestModeForIdentifierPrefix:(id)arg0 testMode:(NSUInteger)arg1 testSpecificValidationData:(id)arg2 ;
+(BOOL)setTestingEnabled:(BOOL)arg0 ;
+(BOOL)simulateClientDeath;
+(BOOL)skipIntentValidation;
+(BOOL)uninstallAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)uninstallAppWithBundleID:(id)arg0 options:(id)arg1 disposition:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)uninstallAppWithBundleID:(id)arg0 options:(id)arg1 disposition:(*NSUInteger)arg2 error:(*id)arg3 legacyProgressBlock:(id)arg4 ;
+(BOOL)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 waitForDeletion:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)uninstallAppWithIdentity:(id)arg0 options:(id)arg1 disposition:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)uninstallAppWithIdentity:(id)arg0 options:(id)arg1 disposition:(*NSUInteger)arg2 error:(*id)arg3 legacyProgressBlock:(id)arg4 ;
+(BOOL)unregisterContentsForDiskImageAtURL:(id)arg0 options:(id)arg1 withError:(*id)arg2 ;
+(BOOL)updateSINFForAppWithIdentity:(id)arg0 sinfData:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateSINFForAppWithIdentity:(id)arg0 wrapperURL:(id)arg1 sinfData:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateiTunesMetadataForAppWithIdentity:(id)arg0 plistData:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateiTunesMetadataForAppWithIdentity:(id)arg0 wrapperURL:(id)arg1 plistData:(id)arg2 error:(*id)arg3 ;
+(Class)classForIntent:(NSUInteger)arg0 ;
+(NSUInteger)intent;
+(NSUInteger)removabilityForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)removabilityForAppWithIdentity:(id)arg0 error:(*id)arg1 ;
+(id)_coordinatorForAppWithIdentity:(id)arg0 targetingInstallationDomain:(NSUInteger)arg1 withClientID:(NSUInteger)arg2 intent:(NSUInteger)arg3 createIfNotExisting:(BOOL)arg4 requireMatchingIntent:(BOOL)arg5 scopeRequirement:(unsigned char)arg6 created:(*BOOL)arg7 error:(*id)arg8 ;
+(id)_coordinatorForIdentity:(id)arg0 created:(*BOOL)arg1 error:(*id)arg2 ;
+(id)coordinatorForAppWithBundleID:(id)arg0 withClientID:(NSUInteger)arg1 createIfNotExisting:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(id)coordinatorForAppWithIdentity:(id)arg0 targetingInstallationDomain:(NSUInteger)arg1 withClientID:(NSUInteger)arg2 createIfNotExisting:(BOOL)arg3 created:(*BOOL)arg4 error:(*id)arg5 ;
+(id)coordinatorForAppWithIdentity:(id)arg0 withClientID:(NSUInteger)arg1 createIfNotExisting:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(id)existingCoordinatorForAppWithIdentity:(id)arg0 error:(*id)arg1 ;
+(id)processScopedCoordinatorForAppWithIdentity:(id)arg0 targetingInstallationDomain:(NSUInteger)arg1 withClientID:(NSUInteger)arg2 createIfNotExisting:(BOOL)arg3 created:(*BOOL)arg4 error:(*id)arg5 ;
+(id)processScopedCoordinatorForAppWithIdentity:(id)arg0 withClientID:(NSUInteger)arg1 createIfNotExisting:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(int)daemonPid;
+(void)_asynchronouslyEnumerateCoordinatorsForIntent:(NSUInteger)arg0 usingBlock:(id)arg1 ;
// +(void)_beginInstallForURL:(id)arg0 forPersonaUniqueString:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 progressBlock:(id)arg4 completion:(unk)arg5  ;
// +(void)_beginInstallForURL:(id)arg0 forPersonaUniqueString:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 progressBlock:(id)arg4 completionWithIdentity:(unk)arg5  ;
+(void)_demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 completion:(id)arg4 ;
+(void)_validatePreconditionForIntent:(NSUInteger)arg0 matchesCurrentInstallStateForBundleID:(id)arg1 ;
+(void)cancelCoordinatorForAppWithBundleID:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)cancelCoordinatorForAppWithIdentity:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)cancelCoordinatorsForAppsWithApplicationIdentities:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)demoteAppToPlaceholderWithApplicationIdentity:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 completion:(id)arg4 ;
+(void)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 completion:(id)arg3 ;
+(void)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 completion:(id)arg4 ;
+(void)enumerateCoordinatorsUsingBlock:(id)arg0 ;
+(void)installApplication:(id)arg0 consumeSource:(BOOL)arg1 options:(id)arg2 completion:(id)arg3 ;
// +(void)installApplication:(id)arg0 consumeSource:(BOOL)arg1 options:(id)arg2 legacyProgressBlock:(id)arg3 completion:(unk)arg4  ;
+(void)installApplication:(id)arg0 forPersonaUniqueString:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)installApplication:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)installApplication:(id)arg0 toTargetDirectory:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)installApplication:(id)arg0 toTargetDirectory:(id)arg1 consumeSource:(BOOL)arg2 shouldOverrideGatekeeper:(BOOL)arg3 options:(id)arg4 completion:(id)arg5 ;
+(void)installApplication:(id)arg0 toURL:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)installApplication:(id)arg0 toURL:(id)arg1 consumeSource:(BOOL)arg2 shouldOverrideGatekeeper:(BOOL)arg3 options:(id)arg4 completion:(id)arg5 ;
+(void)pauseCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)pauseCoordinatorForAppWithIdentity:(id)arg0 completion:(id)arg1 ;
+(void)prioritizeCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)prioritizeCoordinatorForAppWithIdentity:(id)arg0 completion:(id)arg1 ;
+(void)removabilityForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)removabilityForAppWithIdentity:(id)arg0 completion:(id)arg1 ;
+(void)resumeCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)resumeCoordinatorForAppWithIdentity:(id)arg0 completion:(id)arg1 ;
+(void)revertAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)revertAppWithBundleID:(id)arg0 completionWithApplicationRecord:(id)arg1 ;
+(void)revertAppWithIdentity:(id)arg0 completionWithApplicationRecord:(id)arg1 ;
+(void)setRemovability:(NSUInteger)arg0 forAppWithBundleID:(id)arg1 byClient:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)setRemovability:(NSUInteger)arg0 forAppWithBundleID:(id)arg1 completion:(id)arg2 ;
+(void)setRemovability:(NSUInteger)arg0 forAppWithIdentity:(id)arg1 byClient:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)setSkipIntentValidation:(BOOL)arg0 ;
+(void)uninstallAppWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 completion:(id)arg2 ;
+(void)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 waitForDeletion:(BOOL)arg2 completion:(id)arg3 ;
+(void)uninstallAppWithIdentity:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(BOOL)appAssetPromiseHasBegunFulfillment:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)cancelForReason:(id)arg0 client:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)convertToGloballyScopedCoordinatorWithError:(*id)arg0 ;
-(BOOL)getHasDeviceSecurityPromise:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)getShouldOverrideGatekeeperValue:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPaused:(*BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)pauseWithError:(*id)arg0 ;
-(BOOL)prioritizeWithError:(*id)arg0 ;
-(BOOL)resumeWithError:(*id)arg0 ;
-(BOOL)setAppAssetPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAppAssetPromiseResponsibleClient:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAppQuitPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDeviceSecurityPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setImportance:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setInitialODRAssetPromises:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInstallOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInstallTargetDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setManagedInstallUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPlaceholderDisposition:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setPlaceholderPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPreparationPromise:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setRemovability:(NSUInteger)arg0 byClient:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setShouldOverrideGatekeeper:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setTargetBundleURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setTargetBundleURL:(id)arg0 preservingTargetBundleNameOnUpdate:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setUserDataPromise:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)appAssetPromiseResponsibleClientWithError:(*id)arg0 ;
-(NSUInteger)importanceWithError:(*id)arg0 ;
-(NSUInteger)placeholderDispositionWithError:(*id)arg0 ;
-(NSUInteger)removabilityWithError:(*id)arg0 ;
-(id)appAssetPromiseWithError:(*id)arg0 ;
-(id)appQuitPromiseWithError:(*id)arg0 ;
-(id)deviceSecurityPromiseWithError:(*id)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(id)initialODRAssetPromisesWithError:(*id)arg0 ;
-(id)installTargetDirectoryURLWithError:(*id)arg0 ;
-(id)managedInstallUUIDWithError:(*id)arg0 ;
-(id)placeholderPromiseWithError:(*id)arg0 ;
-(id)preparationPromiseWithError:(*id)arg0 ;
-(id)targetBundleURLWithError:(*id)arg0 ;
-(id)userDataPromiseWithError:(*id)arg0 ;
-(id)userDataRestoreShouldBegin:(*BOOL)arg0 ;
-(unsigned char)coordinatorScopeWithError:(*id)arg0 ;
-(void)_clientDelegate_didCancelWithError:(id)arg0 client:(NSUInteger)arg1 ;
-(void)_clientDelegate_didCompleteForApplicationRecord:(id)arg0 ;
-(void)_clientDelegate_didRegisterForObservation;
-(void)_clientDelegate_didUpdateProgress:(CGFloat)arg0 forPhase:(NSUInteger)arg1 overallProgress:(CGFloat)arg2 ;
-(void)_clientDelegate_placeholderDidInstallForApplicationRecord:(id)arg0 ;
-(void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(NSUInteger)arg0 ;
-(void)_clientDelegate_shouldBeginRestoringUserData;
-(void)_clientDelegate_shouldPause;
-(void)_clientDelegate_shouldPrioritize;
-(void)_clientDelegate_shouldResume;
-(void)_conveyCurrentPriorityBoostReplacingExisting:(BOOL)arg0 ;
-(void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:(id)arg0 completedApplicationRecord:(id)arg1 error:(id)arg2 client:(NSUInteger)arg3 ;
-(void)_updateInitWithSeed:(id)arg0 notifyDaemon:(BOOL)arg1 ;
-(void)cancelForReason:(id)arg0 ;
-(void)dealloc;


@end


#endif