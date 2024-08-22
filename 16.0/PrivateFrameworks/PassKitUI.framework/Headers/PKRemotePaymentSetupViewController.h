// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREMOTEPAYMENTSETUPVIEWCONTROLLER_H
#define PKREMOTEPAYMENTSETUPVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemotePaymentSetupViewControllerProtocol;



@interface PKRemotePaymentSetupViewController : UIRemoteViewController <PKRemotePaymentSetupViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithPasses:(id)arg0 error:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif