// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDAEMONCONFIGURATION_H
#define MIDAEMONCONFIGURATION_H



#import "MIGlobalConfiguration.h"

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) BOOL allowPatchWithoutSinf; // ivar: _allowPatchWithoutSinf
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled; // ivar: _codeSigningEnforcementIsDisabled
@property (readonly, nonatomic) NSUInteger estimatedAvailableMemoryForValidation; // ivar: _estimatedAvailableMemoryForValidation
@property (nonatomic) BOOL haveUpdatedAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) unsigned int installQOSOverride; // ivar: _installQOSOverride
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