// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGSPLASHSIGNINCONTROLLER_H
#define CNFREGSPLASHSIGNINCONTROLLER_H

@class AKTapToSignInViewController, NSString;
@protocol AKTapToSignInViewControllerDelegate;


#import "CNFRegSignInController.h"
#import "CNFRegSigninLearnMoreView.h"

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate>

 {
    CNFRegSigninLearnMoreView *_signInView;
    AKTapToSignInViewController *_akSignInVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_controllerToPresentOn;
-(id)_existingLearnMoreViewForSection:(NSInteger)arg0 ;
-(id)_existingLearnMoreViewForSpecifier:(id)arg0 ;
-(id)specifierList;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleTimeout;
-(void)dealloc;
-(void)tapToSignInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif