// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIAUTHENTICATIONVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONVIEWCONTROLLER_H

@class UIViewController, NSURL;
@protocol FPUIAuthenticationDelegate;


#import "FPUIAuthenticationLandingViewController.h"

@interface FPUIAuthenticationViewController : UIViewController

@property (weak, nonatomic) NSObject<FPUIAuthenticationDelegate> *authenticationDelegate; // ivar: _authenticationDelegate
@property (copy, nonatomic) NSURL *initialConnectionURL; // ivar: _initialConnectionURL
@property (weak) FPUIAuthenticationLandingViewController *landingViewController; // ivar: _landingViewController


-(id)initWithServerURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif