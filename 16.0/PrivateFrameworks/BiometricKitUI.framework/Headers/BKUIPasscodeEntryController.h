// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPASSCODEENTRYCONTROLLER_H
#define BKUIPASSCODEENTRYCONTROLLER_H

@class OBPasscodeViewController, NSString;
@protocol OBPasscodeViewControllerDelegate;



@interface BKUIPasscodeEntryController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *passcodeEntryAction; // ivar: _passcodeEntryAction
@property (readonly) Class superclass;


+(BOOL)isDevicePasscodeSet;
-(BOOL)isModalInPresentation;
-(BOOL)passcodeViewController:(id)arg0 shouldEnableCompletionButtonForPasscode:(id)arg1 ;
-(BOOL)verifyPasscode:(id)arg0 ;
-(id)completionButtonTitleForPasscodeViewController:(id)arg0 ;
-(id)initWithVerifiedPasscodeAction:(id)arg0 ;
-(int)simplePasscodeType;
-(int)unlockType;
-(void)cancelPasscodeEntry;
-(void)passcodeViewController:(id)arg0 didEnterPasscode:(id)arg1 ;
-(void)setUnlockScreenType:(int)arg0 simplePasscodeType:(int)arg1 ;
-(void)viewDidLoad;


@end


#endif