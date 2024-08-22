// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLWELCOMEVIEWCONTROLLER_H
#define WLWELCOMEVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLWelcomeViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    BOOL _qrcodeLoaded;
    WLWelcomeController *_welcomeController;
}


@property (copy, nonatomic) id *completionHandler;
@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resetHandler;
@property (readonly) Class superclass;


-(id)_initWithForceUITestMode:(BOOL)arg0 forceUITestModeDownloadError:(BOOL)arg1 ;
-(id)init;
-(id)initForUITestWithForceDownloadError:(BOOL)arg0 ;
-(void)_continueTapped:(id)arg0 ;
-(void)_qrcodeTapped:(id)arg0 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif