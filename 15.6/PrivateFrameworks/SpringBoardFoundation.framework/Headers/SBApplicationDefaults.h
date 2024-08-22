// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBAPPLICATIONDEFAULTS_H
#define SBAPPLICATIONDEFAULTS_H

@class NSString;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSString *bundleIdentifierToForceHomeAffordanceInset;
@property (readonly, nonatomic) BOOL forcesMedusaAdoption;
@property (readonly, nonatomic) BOOL ignoresDeclaredNetworkUsage;
@property (readonly, nonatomic) BOOL laserForLaunchPPT;
@property (readonly, nonatomic) BOOL shouldAllowScreenshotsInLoginWindow;
@property (readonly, nonatomic) BOOL shouldAllowUseOfNonRecapPPT;
@property (readonly, nonatomic) BOOL shouldShowInternalApplications;
@property (readonly, nonatomic) BOOL shouldShowNonDefaultSystemApplications;


-(void)_bindAndRegisterDefaults;


@end


#endif