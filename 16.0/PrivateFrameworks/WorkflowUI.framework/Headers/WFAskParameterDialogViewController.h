// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFASKPARAMETERDIALOGVIEWCONTROLLER_H
#define WFASKPARAMETERDIALOGVIEWCONTROLLER_H

@class NSString, WFAction, WFWorkflow, WFParameterEditorHostingCell, UIButton, WFModuleSummaryEditor, WFSlotTemplateSlot, WFCompactUnlockService;
@protocol WFModuleSummaryEditorDelegate, WFParameterEditorHostingCellDelegate;


#import "WFCompactDialogViewController.h"

@interface WFAskParameterDialogViewController : WFCompactDialogViewController <WFModuleSummaryEditorDelegate, WFParameterEditorHostingCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFAction *fakeAction; // ivar: _fakeAction
@property (retain, nonatomic) WFWorkflow *fakeWorkflow; // ivar: _fakeWorkflow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFParameterEditorHostingCell *hostingCell; // ivar: _hostingCell
@property (retain, nonatomic) UIButton *modalButton; // ivar: _modalButton
@property (retain, nonatomic) WFModuleSummaryEditor *summaryEditor; // ivar: _summaryEditor
@property (retain, nonatomic) WFSlotTemplateSlot *summarySlot; // ivar: _summarySlot
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService; // ivar: _unlockService


+(id)singleButtonSlotForParameter:(id)arg0 state:(id)arg1 ;
-(BOOL)allowsInteractiveDismiss;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(id)initWithRequest:(id)arg0 ;
-(void)done;
-(void)loadView;
-(void)modalButtonTapped:(id)arg0 ;
-(void)parameterEditorCell:(id)arg0 didUpdateParameterState:(id)arg1 ;
-(void)parameterEditorCellDidInvalidateSize:(id)arg0 ;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 didRequestEditingSlotWithIdentifier:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;


@end


#endif