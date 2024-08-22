// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPASSCODECOMPLIANCEALERTITEM_H
#define SBPASSCODECOMPLIANCEALERTITEM_H

@class SBAlertItem, NSString;



@interface SBPasscodeComplianceAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_message;
    NSString *_continueButtonTitle;
    NSString *_cancelButtonTitle;
}




-(BOOL)shouldShowInLockScreen;
-(id)initWithTitle:(id)arg0 message:(id)arg1 continueButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif