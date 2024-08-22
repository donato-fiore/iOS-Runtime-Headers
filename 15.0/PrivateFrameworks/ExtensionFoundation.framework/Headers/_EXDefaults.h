// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXDEFAULTS_H
#define _EXDEFAULTS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface _EXDefaults : NSObject

@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) NSSet *errorTypes;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL implementsNSExtension;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL rejectExtensionRequestsWithInsecureInputItems;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL useLSDExtensionKitServiceForLaunch;


+(id)sharedInstance;
-(id)_init;


@end


#endif