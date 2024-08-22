// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTACTPICKERCOORDINATOR_H
#define WFCONTACTPICKERCOORDINATOR_H

@class NSString, WFAlertPresentationSource, UIViewController, NSSet;
@protocol CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFAlertPresentationSource *presentationSource; // ivar: _presentationSource
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedPersonProperties; // ivar: _supportedPersonProperties


-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg0 ;
-(id)supportedContactProperties;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dismissPersonViewController;
-(void)finishWithContact:(id)arg0 ;
-(void)presentContactPickerWithCompletionHandler:(id)arg0 ;
-(void)presentHandlePickerForContact:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif