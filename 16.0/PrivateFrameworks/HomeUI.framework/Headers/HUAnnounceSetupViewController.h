// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCESETUPVIEWCONTROLLER_H
#define HUANNOUNCESETUPVIEWCONTROLLER_H

@class NSString;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep;
@property (readonly, nonatomic) NSUInteger step; // ivar: _step
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)initWithHome:(id)arg0 step:(NSUInteger)arg1 ;
-(void)continuePressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif