// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNATURALLIGHTINGTITLEVIEWCONTROLLER_H
#define HUNATURALLIGHTINGTITLEVIEWCONTROLLER_H

@class NSString, HMHome, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUNaturalLightingTitleViewController : HUImageOBWelcomeController <HUConfigurationViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton; // ivar: _notNowButton
@property (readonly) Class superclass;
@property (retain, nonatomic) OBTrayButton *useNaturalLightingButton; // ivar: _useNaturalLightingButton


-(id)initWithHome:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentImage:(id)arg3 ;
-(void)_continueToSetup:(id)arg0 ;
-(void)_doNotActivateNaturalLighting:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif