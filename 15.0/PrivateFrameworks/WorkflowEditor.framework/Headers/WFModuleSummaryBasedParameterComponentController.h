// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYBASEDPARAMETERCOMPONENTCONTROLLER_H
#define WFMODULESUMMARYBASEDPARAMETERCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFModuleSummaryEditorDelegate;


#import "CKComponentController.h"
#import "WFModuleSummaryEditor.h"

@interface WFModuleSummaryBasedParameterComponentController : CKComponentController <WFModuleSummaryEditorDelegate>



@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor; // ivar: _currentEditor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)buttonTapped:(id)arg0 ;
-(void)parameterLayoutTapped:(id)arg0 ;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;


@end


#endif