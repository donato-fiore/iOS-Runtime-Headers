// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPSINGLEICSCENTRYVIEWCONTROLLER_H
#define CDPSINGLEICSCENTRYVIEWCONTROLLER_H

@class PSKeychainSyncSecurityCodeController;



@interface CDPSingleICSCEntryViewController : PSKeychainSyncSecurityCodeController



-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(void)forgotSecurityCode;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif