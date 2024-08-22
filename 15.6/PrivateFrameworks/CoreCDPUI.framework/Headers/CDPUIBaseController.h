// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUIBASECONTROLLER_H
#define CDPUIBASECONTROLLER_H

@class NSString, UIViewController;
@protocol CDPStateUIProvider;

#import <Foundation/Foundation.h>


@interface CDPUIBaseController : NSObject <CDPStateUIProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)initWithPresentingViewController:(id)arg0 ;
-(id)initWithPresentingViewControlller:(id)arg0 ;
-(void)cdpContext:(id)arg0 promptForAdoptionOfMultipleICSC:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForICSCWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 isRandom:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg0 promptForInteractiveAuthenticationWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 offeringRemoteApproval:(BOOL)arg2 validator:(id)arg3 ;
-(void)cdpContext:(id)arg0 showError:(id)arg1 withCompletion:(id)arg2 ;
-(void)cdpContext:(id)arg0 showError:(id)arg1 withDefaultIndex:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)cdpRecoveryFlowContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 validator:(id)arg2 ;


@end


#endif