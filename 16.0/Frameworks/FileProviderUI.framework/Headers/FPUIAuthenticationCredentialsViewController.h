// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIAUTHENTICATIONCREDENTIALSVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONCREDENTIALSVIEWCONTROLLER_H

@class NSArray, UITextField, UISwitch, NSLayoutConstraint, NSString;
@protocol UITextFieldDelegate;


#import "FPUIAuthenticationTableViewController.h"
#import "FPUIAuthenticationSectionDescriptor.h"

@interface FPUIAuthenticationCredentialsViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate>

 {
    NSArray *_credentialDescriptors;
    NSInteger _selectedCredentialRow;
    FPUIAuthenticationSectionDescriptor *_credentialsInputSection;
    FPUIAuthenticationSectionDescriptor *_rememberPasswordSection;
    UITextField *_nameInputTextField;
    UITextField *_passwordInputTextField;
    UISwitch *_rememberPasswordSwitch;
    NSLayoutConstraint *_textFieldLeadingAnchorConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canMoveToNextStep;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_rowDescriptorForCredentialDescriptor:(id)arg0 ;
-(id)defaultRightBarButtonItem;
-(id)initWithCredentialDescriptors:(id)arg0 ;
-(void)_next:(id)arg0 ;
-(void)_updateCanTransitionToNextStepState;
-(void)_updateCurrentlyVisibleSections;
-(void)_updateCurrentlyVisibleSectionsNeedsReloadData:(BOOL)arg0 ;
-(void)_updateTextFieldConstraints;
-(void)setupTableViewSections;
-(void)textFieldDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif