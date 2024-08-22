// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILCLASSIFICATIONUIEXTENSIONHOSTVIEWCONTROLLER_H
#define ILCLASSIFICATIONUIEXTENSIONHOSTVIEWCONTROLLER_H

@class UIViewController, ILClassificationRequest, ILClassificationResponse, NSString, NSExtension, UINavigationController;
@protocol ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate, ILClassificationUIExtensionHostViewControllerDelegate, NSCopying, OS_dispatch_queue;


#import "ILClassificationUIExtensionHostContext.h"
#import "ILClassificationReportingController.h"
#import "ILClassificationExtensionShellViewController.h"

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate>



@property (readonly, nonatomic) ILClassificationRequest *classificationRequest; // ivar: _classificationRequest
@property (retain, nonatomic) ILClassificationResponse *classificationResponse; // ivar: _classificationResponse
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ILClassificationUIExtensionHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) ILClassificationUIExtensionHostContext *extensionHostContext; // ivar: _extensionHostContext
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) ILClassificationReportingController *reportingController; // ivar: _reportingController
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (retain, nonatomic) ILClassificationExtensionShellViewController *shellViewController; // ivar: _shellViewController
@property (readonly) Class superclass;


-(id)initUnactivatedVCWithRequest:(id)arg0 sender:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)initWithClassificationRequest:(id)arg0 sender:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)logErrorWithMessage:(id)arg0 ;
-(void)activateExtensionWithCompletion:(id)arg0 ;
-(void)blockNumber:(id)arg0 withCountryCode:(id)arg1 ;
-(void)context:(id)arg0 didBecomeReadyForClassificationResponse:(BOOL)arg1 ;
-(void)didCompleteClassificationRequestWithResponse:(id)arg0 ;
-(void)finish;
-(void)launchSettings;
-(void)presentBlockAlertWithCompletion:(id)arg0 ;
-(void)userDidCancelForExtensionShellViewController:(id)arg0 ;
-(void)userDidFinishForExtensionShellViewController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif