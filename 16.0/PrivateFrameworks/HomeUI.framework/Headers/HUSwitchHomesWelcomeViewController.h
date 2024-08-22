// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSWITCHHOMESWELCOMEVIEWCONTROLLER_H
#define HUSWITCHHOMESWELCOMEVIEWCONTROLLER_H

@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUSwitchHomesWelcomeViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *changeButton; // ivar: _changeButton
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_changeButtonTapped:(id)arg0 ;
-(void)_continueButtonTapped:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif