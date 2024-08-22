// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSSHKEYPARAMETERSUMMARYEDITOR_H
#define WFSSHKEYPARAMETERSUMMARYEDITOR_H

@class WFModuleSummaryEditor, NSString;
@protocol WFSSHKeyConfigurationViewControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "WFSSHKeyConfigurationViewController.h"

@interface WFSSHKeyParameterSummaryEditor : WFModuleSummaryEditor <WFSSHKeyConfigurationViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) WFSSHKeyConfigurationViewController *viewController; // ivar: _viewController


-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)completeEditing;
-(void)keyConfigurationViewControllerDidFinish:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif