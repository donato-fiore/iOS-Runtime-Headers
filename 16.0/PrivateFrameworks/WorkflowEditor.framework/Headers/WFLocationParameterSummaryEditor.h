// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOCATIONPARAMETERSUMMARYEDITOR_H
#define WFLOCATIONPARAMETERSUMMARYEDITOR_H

@class NSString, UIViewController;
@protocol WFLocationPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "WFModuleSummaryEditor.h"

@interface WFLocationParameterSummaryEditor : WFModuleSummaryEditor <WFLocationPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;


+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)locationPicker:(id)arg0 didFinishWithValue:(id)arg1 ;
-(void)locationPickerDidCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif