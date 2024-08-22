// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPINSTALLEDRESOURCE_H
#define WFAPPINSTALLEDRESOURCE_H

@class NSString, INAppDescriptor;
@protocol ICAppInstallStatusObserver, WFAppInstalledResourceDelegate, OS_dispatch_queue;


#import "WFResource.h"
#import "WFiTunesSessionManager.h"

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>



@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager; // ivar: _currentAppNameLookupSessionManager
@property (weak, nonatomic) NSObject<WFAppInstalledResourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) INAppDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) BOOL intentIsSynced; // ivar: _intentIsSynced
@property (nonatomic) BOOL requiresAppToBeInstalled; // ivar: _requiresAppToBeInstalled
@property (nonatomic) BOOL skipLookup; // ivar: _skipLookup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
-(BOOL)intentIsEligibleForRemoteExecution;
-(BOOL)intentIsLocallyAvailable;
-(id)_initWithDescriptor:(id)arg0 requiresAppToBeInstalled:(BOOL)arg1 isSyncedFromOtherDevice:(BOOL)arg2 ;
-(id)appNeedsUpdateErrorWithAppName:(id)arg0 ;
-(id)appNotInstalledError;
-(id)appNotResolvedError;
-(id)bundleIdentifier;
-(id)eventDictionary;
-(id)initWithAppDescriptor:(id)arg0 requiresAppToBeInstalled:(BOOL)arg1 ;
-(id)initWithIntentDescriptor:(id)arg0 isSyncedFromOtherDevice:(BOOL)arg1 ;
-(id)intentDescriptor;
-(void)appRegistry:(id)arg0 installStatusChangedForApp:(id)arg1 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)notifyDelegateWithUpdatedDescriptor:(id)arg0 ;
-(void)refreshAvailability;
-(void)updateDescriptorsWithSelectedApp:(id)arg0 ;


@end


#endif