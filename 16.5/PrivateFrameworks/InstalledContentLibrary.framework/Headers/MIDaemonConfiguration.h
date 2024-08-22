// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDAEMONCONFIGURATION_H
#define MIDAEMONCONFIGURATION_H

@class NSURL;


#import "MIGlobalConfiguration.h"

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) BOOL allowPatchWithoutSinf; // ivar: _allowPatchWithoutSinf
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled; // ivar: _codeSigningEnforcementIsDisabled
@property (readonly, nonatomic) NSURL *currentUserDataDirectory; // ivar: _currentUserDataDirectory
@property (readonly, nonatomic) NSURL *currentUserJournalStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) NSURL *currentUserLaunchServicesOperationStorageBaseURL;
@property (nonatomic, getter=wasErroneousContainerCleanupDone) BOOL erroneousContainerCleanupDone;
@property (readonly, nonatomic) NSUInteger estimatedAvailableMemoryForValidation; // ivar: _estimatedAvailableMemoryForValidation
@property (nonatomic) BOOL haveUpdatedAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) unsigned int installQOSOverride; // ivar: _installQOSOverride
@property (readonly, nonatomic) BOOL isSharediPad; // ivar: _isSharediPad
@property (readonly, nonatomic) NSURL *journalStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationLookAsideStorageBaseURL;
@property (readonly, nonatomic) NSURL *launchServicesOperationStorageBaseURL;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted; // ivar: _localSigningIsUnrestricted
@property (readonly, nonatomic) NSInteger nSimultaneousInstallations; // ivar: _nSimultaneousInstallations
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck; // ivar: _skipDeviceFamilyCheck
@property (readonly, nonatomic) BOOL skipThinningCheck; // ivar: _skipThinningCheck


+(id)sharedInstance;
-(id)builtInApplicationBundleIDs;
-(id)init;
-(id)initForTesting;


@end


#endif