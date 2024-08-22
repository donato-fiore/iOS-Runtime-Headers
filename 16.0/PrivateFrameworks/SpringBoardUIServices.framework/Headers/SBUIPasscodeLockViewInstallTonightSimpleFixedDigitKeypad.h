// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPASSCODELOCKVIEWINSTALLTONIGHTSIMPLEFIXEDDIGITKEYPAD_H
#define SBUIPASSCODELOCKVIEWINSTALLTONIGHTSIMPLEFIXEDDIGITKEYPAD_H



#import "SBUIPasscodeLockViewSimpleFixedDigitKeypad.h"
#import "SBUIButton.h"

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {
    SBUIButton *_actionButton;
}




-(id)initWithLightStyle:(BOOL)arg0 numberOfDigits:(NSUInteger)arg1 ;
-(void)_actionButtonHit;
-(void)_configureActionButton;
-(void)_layoutActionButton;
-(void)_layoutStatusView;
-(void)_setShowsCancelButton:(BOOL)arg0 fromEmergencyCallButton:(BOOL)arg1 ;
-(void)_setShowsEmergencyCallButton:(BOOL)arg0 fromCancelButton:(BOOL)arg1 ;
-(void)_sizeLabel:(id)arg0 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg0 ;


@end


#endif