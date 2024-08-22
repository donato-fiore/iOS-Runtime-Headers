// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTVIEWSERVICEVIEWCONTROLLER_H
#define CNCONTACTVIEWSERVICEVIEWCONTROLLER_H

@class NSString;
@protocol CNContactViewHostProtocol, CNContactViewControllerPPTDelegate;


#import "CNContactContentViewController.h"

@interface CNContactViewServiceViewController : CNContactContentViewController <CNContactViewHostProtocol, CNContactViewControllerPPTDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isOutOfProcess;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg0 propertyKey:(id)arg1 propertyIdentifier:(id)arg2 ;
-(id)init;
-(void)didChangePreferredContentSize:(struct CGSize )arg0 ;
-(void)didCompleteWithContact:(id)arg0 ;
-(void)didDeleteContact:(id)arg0 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)isPresentingEditingController:(BOOL)arg0 ;
-(void)isPresentingFullscreen:(BOOL)arg0 ;
-(void)presentCancelConfirmationAlert;
-(void)updateEditing:(BOOL)arg0 doneButtonEnabled:(BOOL)arg1 doneButtonText:(id)arg2 ;
-(void)viewDidAppear;
-(void)viewDidAppearForContactViewController:(id)arg0 ;


@end


#endif