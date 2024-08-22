// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPERSONALREQUESTSCUSTOMIZEVIEWCONTROLLER_H
#define HUPERSONALREQUESTSCUSTOMIZEVIEWCONTROLLER_H

@class OBLinkTrayButton, NSString, HMHome, OBTrayButton;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUPersonalRequestsCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *finePrintFooterText; // ivar: _finePrintFooterText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;
@property (retain, nonatomic) OBTrayButton *usePRButton; // ivar: _usePRButton


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithLocationDevice:(id)arg0 home:(id)arg1 ;
-(void)_dontSetupPersonalRequests:(id)arg0 ;
-(void)_setupPersonalRequests:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif