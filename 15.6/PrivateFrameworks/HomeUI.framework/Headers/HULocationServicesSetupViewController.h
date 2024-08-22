// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCATIONSERVICESSETUPVIEWCONTROLLER_H
#define HULOCATIONSERVICESSETUPVIEWCONTROLLER_H

@class NSString, OBLinkTrayButton, OBBoldTrayButton, HMHome;
@protocol HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HULocationServicesSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBLinkTrayButton *disableLocationServicesButton; // ivar: _disableLocationServicesButton
@property (retain, nonatomic) OBBoldTrayButton *enableLocationServicesButton; // ivar: _enableLocationServicesButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_enableOrDisableLocationServices:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif