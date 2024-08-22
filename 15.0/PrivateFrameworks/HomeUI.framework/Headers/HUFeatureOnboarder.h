// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUFEATUREONBOARDER_H
#define HUFEATUREONBOARDER_H

@class UIViewController<HUConfigurationViewController>, NSMutableArray, NAFuture, NSString, NSDictionary, UINavigationController, NSMutableDictionary;
@protocol HUFeatureOnboardingConfiguratorDelegate;

#import <Foundation/Foundation.h>

#import "HUFeatureOnboardingConfigurator.h"

@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate>



@property (weak) UIViewController<HUConfigurationViewController> *_currentViewControllerForTests; // ivar: __currentViewControllerForTests
@property (retain, nonatomic) NSMutableArray *allRemainingFlowGroups; // ivar: _allRemainingFlowGroups
@property (retain, nonatomic) NAFuture *completionFuture; // ivar: _completionFuture
@property (retain, nonatomic) HUFeatureOnboardingConfigurator *configurator; // ivar: _configurator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPerformedPostProcessing; // ivar: _hasPerformedPostProcessing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *initialUsageOptions; // ivar: _initialUsageOptions
@property (retain, nonatomic) UINavigationController *navController; // ivar: _navController
@property (nonatomic) BOOL restart; // ivar: _restart
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *userInputResults; // ivar: _userInputResults


-(id)_findNextAppropriateFlow:(id)arg0 usageOptions:(id)arg1 ;
-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg0 usageOptions:(id)arg1 ;
-(id)getNextViewControllerForOnboardingInput:(id)arg0 ;
-(id)getPostProcessingFlowsForResults:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 usageOptions:(id)arg1 ;
-(id)initWithGroupedFeatures:(id)arg0 usageOptions:(id)arg1 ;
-(void)_skipAnyFlowsNoLongerRequired;
-(void)configuratorDidFinish:(id)arg0 ;
-(void)configuratorDidUpdateViewController:(id)arg0 ;
-(void)startOnboardingWithPresentingViewController:(id)arg0 usageOptions:(id)arg1 ;


@end


#endif