// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYFIRMWAREUPDATESETUPVIEWCONTROLLER_H
#define HUACCESSORYFIRMWAREUPDATESETUPVIEWCONTROLLER_H

@class NSString, OBTrayButton, HMHome, OBLinkTrayButton;
@protocol HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUAccessoryFirmwareUpdateSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBTrayButton *enableAutomaticUpdatesButton; // ivar: _enableAutomaticUpdatesButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton; // ivar: _notNowButton
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentImage:(id)arg3 ;
-(void)_doNotEnableAutomaticUpdates:(id)arg0 ;
-(void)_enableAutomaticUpdates:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif