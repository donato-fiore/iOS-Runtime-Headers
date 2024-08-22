// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDUROOTVIEWCONTROLLER_H
#define PDUROOTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PDUWelcomeViewControllerDelegate, PDCApplicationIdentity, PDCConsentStore, PDURootViewControllerDelegate;



@interface PDURootViewController : UIViewController <PDUWelcomeViewControllerDelegate>

 {
    UIViewController *_welcomeViewController;
    id<PDCApplicationIdentity> *_applicationIdentity;
    id<PDCConsentStore> *_consentStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PDURootViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deviceIsPad;
+(NSUInteger)preferredOrientation;
-(BOOL)_canShowWhileLocked;
-(id)initWithApplicationIdentity:(id)arg0 consentStore:(id)arg1 ;
-(void)_presentWelcomeViewIfNeeded;
-(void)_showWelcomeViewIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)welcomeViewController:(id)arg0 didDismissWithUserResponse:(NSUInteger)arg1 ;


@end


#endif