// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREMOTETRANSACTIONAUTHENTICATIONPASSCODEVIEWCONTROLLER_H
#define PKREMOTETRANSACTIONAUTHENTICATIONPASSCODEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol, PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;



@interface PKRemoteTransactionAuthenticationPasscodeViewController : UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidEndSessionExchange;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg0 ;
-(void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif