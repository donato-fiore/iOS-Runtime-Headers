// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXAPPINSTALLCOORDINATOR_H
#define IXAPPINSTALLCOORDINATOR_H

@class NSString, NSError, NSUUID, NSArray;
@protocol IXCoordinatorWithPlaceholderPromise, OS_dispatch_queue, IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>

#import "IXAppInstallCoordinatorSeed.h"

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>



@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
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
+(BOOL)cancelCoordinatorsForAppsWithBundleIDs:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 error:(*id)arg4 ;
// +(BOOL)enumerateCoordinatorsWithBlock:(id)arg0 error:(unk)arg1  ;
+(BOOL)enumerateCoordinatorsWithError:(*id)arg0 usingBlock:(id)arg1 ;
+(BOOL)killDaemonForTesting;
+(BOOL)pauseCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)postNSCurrentLocaleDidChangeNotification;
+(BOOL)prioritizeCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)purgeAllCoordinatorsAndPromisesForCreator:(NSUInteger)arg0 ;
+(BOOL)refreshContainerTypes:(NSUInteger)arg0 forBundleID:(id)arg1 reason:(id)arg2 error:(*id)arg3 ;
+(BOOL)refreshDataContainerForBundleID:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
+(BOOL)resumeCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)revertAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)setTestModeForIdentifierPrefix:(id)arg0 testMode:(NSUInteger)arg1 ;
+(BOOL)setTestModeForIdentifierPrefix:(id)arg0 testMode:(NSUInteger)arg1 testSpecificValidationData:(id)arg2 ;
+(BOOL)setTestingEnabled:(BOOL)arg0 ;
+(BOOL)skipIntentValidation;
+(BOOL)uninstallAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(BOOL)uninstallAppWithBundleID:(id)arg0 options:(id)arg1 disposition:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 waitForDeletion:(BOOL)arg2 error:(*id)arg3 ;
+(Class)classForIntent:(NSUInteger)arg0 ;
+(NSUInteger)removabilityForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(id)_coordinatorForAppWithBundleID:(id)arg0 withClientID:(NSUInteger)arg1 intent:(NSUInteger)arg2 createIfNotExisting:(BOOL)arg3 created:(*BOOL)arg4 error:(*id)arg5 ;
+(id)_coordinatorForAppWithBundleID:(id)arg0 withClientID:(NSUInteger)arg1 intent:(NSUInteger)arg2 createIfNotExisting:(BOOL)arg3 requireMatchingIntent:(BOOL)arg4 created:(*BOOL)arg5 error:(*id)arg6 ;
+(id)_coordinatorForBundleID:(id)arg0 created:(*BOOL)arg1 error:(*id)arg2 ;
+(id)coordinatorForAppWithBundleID:(id)arg0 withClientID:(NSUInteger)arg1 createIfNotExisting:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(int)daemonPid;
+(void)_asynchronouslyEnumerateCoordinatorsForIntent:(NSUInteger)arg0 usingBlock:(id)arg1 ;
+(void)_beginInstallForURL:(id)arg0 consumeSource:(BOOL)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)_demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 completion:(id)arg4 ;
+(void)_validatePreconditionForIntent:(NSUInteger)arg0 matchesCurrentInstallStateForBundleID:(id)arg1 ;
+(void)cancelCoordinatorForAppWithBundleID:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg0 withReason:(id)arg1 client:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 completion:(id)arg3 ;
+(void)demoteAppToPlaceholderWithBundleID:(id)arg0 forReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 ignoreRemovability:(BOOL)arg3 completion:(id)arg4 ;
+(void)enumerateCoordinatorsUsingBlock:(id)arg0 ;
+(void)installApplication:(id)arg0 consumeSource:(BOOL)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)installApplication:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)installApplication:(id)arg0 toTargetDirectory:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)installApplication:(id)arg0 toTargetDirectory:(id)arg1 consumeSource:(BOOL)arg2 shouldOverrideGatekeeper:(BOOL)arg3 options:(id)arg4 completion:(id)arg5 ;
+(void)installApplication:(id)arg0 toURL:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)installApplication:(id)arg0 toURL:(id)arg1 consumeSource:(BOOL)arg2 shouldOverrideGatekeeper:(BOOL)arg3 options:(id)arg4 completion:(id)arg5 ;
+(void)pauseCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)prioritizeCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)removabilityForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)resumeCoordinatorForAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)revertAppWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)setRemovability:(NSUInteger)arg0 forAppWithBundleID:(id)arg1 byClient:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)setRemovability:(NSUInteger)arg0 forAppWithBundleID:(id)arg1 completion:(id)arg2 ;
+(void)setSkipIntentValidation:(BOOL)arg0 ;
+(void)uninstallAppWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 completion:(id)arg2 ;
+(void)uninstallAppWithBundleID:(id)arg0 requestUserConfirmation:(BOOL)arg1 waitForDeletion:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)appAssetPromiseHasBegunFulfillment:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)cancelForReason:(id)arg0 client:(NSUInteger)arg1 error:(*id)arg2 ;
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
-(BOOL)setPlaceholderPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPreparationPromise:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setShouldOverrideGatekeeper:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setTargetBundleURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setUserDataPromise:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)appAssetPromiseResponsibleClientWithError:(*id)arg0 ;
-(NSUInteger)importanceWithError:(*id)arg0 ;
-(id)appAssetPromiseWithError:(*id)arg0 ;
-(id)appQuitPromiseWithError:(*id)arg0 ;
-(id)deviceSecurityPromiseWithError:(*id)arg0 ;
-(id)initWithBundleID:(id)arg0 creator:(NSUInteger)arg1 intent:(NSUInteger)arg2 ;
-(id)initWithSeed:(id)arg0 ;
-(id)initialODRAssetPromisesWithError:(*id)arg0 ;
-(id)installTargetDirectoryURLWithError:(*id)arg0 ;
-(id)managedInstallUUIDWithError:(*id)arg0 ;
-(id)placeholderPromiseWithError:(*id)arg0 ;
-(id)preparationPromiseWithError:(*id)arg0 ;
-(id)targetBundleURLWithError:(*id)arg0 ;
-(id)userDataPromiseWithError:(*id)arg0 ;
-(id)userDataRestoreShouldBegin:(*BOOL)arg0 ;
-(void)_clientDelegate_didCancelWithError:(id)arg0 client:(NSUInteger)arg1 ;
-(void)_clientDelegate_didComplete;
-(void)_clientDelegate_didRegisterForObservation;
-(void)_clientDelegate_didUpdateProgress:(CGFloat)arg0 forPhase:(NSUInteger)arg1 overallProgress:(CGFloat)arg2 ;
-(void)_clientDelegate_placeholderDidInstall;
-(void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(NSUInteger)arg0 ;
-(void)_clientDelegate_shouldBeginRestoringUserData;
-(void)_clientDelegate_shouldPause;
-(void)_clientDelegate_shouldPrioritize;
-(void)_clientDelegate_shouldResume;
-(void)_conveyCurrentPriorityBoostReplacingExisting:(BOOL)arg0 ;
-(void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:(id)arg0 completedAppInstallURL:(id)arg1 error:(id)arg2 client:(NSUInteger)arg3 ;
-(void)_updateInitWithSeed:(id)arg0 notifyDaemon:(BOOL)arg1 ;
-(void)cancelForReason:(id)arg0 ;
-(void)dealloc;


@end


#endif