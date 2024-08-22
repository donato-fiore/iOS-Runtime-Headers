// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAFAMILYSETUPORGANIZERVIEWCONTROLLER_H
#define FAFAMILYSETUPORGANIZERVIEWCONTROLLER_H

@class NSString;
@protocol FAFamilySetupPage, FAFamilySetupPageDelegate;


#import "FAConfirmIdentityViewController.h"

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAFamilySetupPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowInviteeInstructions;
-(id)_createCancelButton;
-(id)initWithAccount:(id)arg0 store:(id)arg1 ;
-(id)instructions;
-(id)pageTitle;
-(id)titleForContinuebutton;
-(void)_cancelButtonWasTapped:(id)arg0 ;
-(void)continueButtonWasTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif