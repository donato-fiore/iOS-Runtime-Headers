// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLPAIRINGCODEVIEWCONTROLLER_H
#define WLPAIRINGCODEVIEWCONTROLLER_H

@class NSString, OBLinkTrayButton;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLPairingCodeViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    NSString *_wifiPSK;
    NSString *_ssid;
    WLWelcomeController *_welcomeController;
    OBLinkTrayButton *_appleInternalOptionsButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *getLocalImportOptionsHandler; // ivar: _getLocalImportOptionsHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *importLocalContentHandler; // ivar: _importLocalContentHandler
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (copy, nonatomic) id *stashDataLocallyHandler; // ivar: _stashDataLocallyHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *viewWillDisappearBlock; // ivar: _viewWillDisappearBlock
@property (copy, nonatomic) id *viewWillDismissBlock; // ivar: _viewWillDismissBlock


-(id)initWithPairingCode:(id)arg0 wifiPSK:(id)arg1 ssid:(id)arg2 welcomeController:(id)arg3 ;
-(void)_appleInternalOptionsTapped:(id)arg0 ;
-(void)_importLocalContent;
-(void)_setStashDataLocally:(BOOL)arg0 ;
-(void)cancel;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif