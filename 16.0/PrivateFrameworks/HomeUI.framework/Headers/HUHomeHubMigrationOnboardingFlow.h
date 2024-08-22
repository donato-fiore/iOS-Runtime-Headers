// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEHUBMIGRATIONONBOARDINGFLOW_H
#define HUHOMEHUBMIGRATIONONBOARDINGFLOW_H

@class NSString, NSSet, HMHome, NSArray, NSMapTable, UIViewController<HUConfigurationViewController>, NAFuture;
@protocol HUFeatureOnboardingFlow;

#import <Foundation/Foundation.h>


@interface HUHomeHubMigrationOnboardingFlow : NSObject <HUFeatureOnboardingFlow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *homes; // ivar: _homes
@property (retain, nonatomic) NSMapTable *homesToUsersMap; // ivar: _homesToUsersMap
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // ivar: _initialViewController
@property (retain, nonatomic) NAFuture *onboardingFuture; // ivar: _onboardingFuture
@property (retain, nonatomic) NSArray *sharedHomes; // ivar: _sharedHomes
@property (readonly, nonatomic) BOOL shouldAbortAllOnboarding; // ivar: _shouldAbortAllOnboarding
@property (readonly, nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // ivar: _shouldAbortThisOnboardingFlowGroup
@property (nonatomic) BOOL shouldShowDeviceWarning; // ivar: _shouldShowDeviceWarning
@property (nonatomic) BOOL shouldShowSharedHomeWarning; // ivar: _shouldShowSharedHomeWarning
@property (nonatomic) BOOL shouldShowUserWarning; // ivar: _shouldShowUserWarning
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger upgradeRequirements; // ivar: _upgradeRequirements


+(id)needsOnboardingForHome:(id)arg0 options:(id)arg1 ;
-(id)_determineNextViewControllerWithPriorResults:(id)arg0 ;
-(id)initWithUsageOptions:(id)arg0 home:(id)arg1 devices:(id)arg2 ;
-(id)processUserInput:(id)arg0 ;


@end


#endif