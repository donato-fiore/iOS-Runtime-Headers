// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPASSCODEALERTITEM_H
#define SBPASSCODEALERTITEM_H

@class SBAlertItem, NSString;
@protocol UITextFieldDelegate;



@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate>

 {
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    BOOL _hasEmergencyCall;
    BOOL _alreadySubmittedPassword;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowInLockScreen;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)initWithPasscodeMode:(int)arg0 unlockScreenType:(int)arg1 simplePasscodeType:(int)arg2 ;
-(void)_clearAlertController;
-(void)_setErrorString:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)configureTextField:(id)arg0 ;
-(void)dealloc;
-(void)didEndCall;
-(void)makeEmergencyCall;
-(void)submitPassword;


@end


#endif