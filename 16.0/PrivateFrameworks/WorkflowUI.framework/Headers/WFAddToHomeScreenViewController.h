// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFADDTOHOMESCREENVIEWCONTROLLER_H
#define WFADDTOHOMESCREENVIEWCONTROLLER_H

@class UITableViewController, NSString, WFHomeScreenIcon, WFWorkflow;
@protocol WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, WFAddToHomeScreenViewControllerDelegate;


#import "WFWorkflowWizardNameCell.h"
#import "WFAddToHomeIconPreviewCell.h"

@interface WFAddToHomeScreenViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAddToHomeScreenViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFWorkflowWizardNameCell *editorCell; // ivar: _editorCell
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFHomeScreenIcon *icon; // ivar: _icon
@property (retain, nonatomic) WFAddToHomeIconPreviewCell *previewCell; // ivar: _previewCell
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)iconButtonDropdownMenuInWorkflowWizardNameCell:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)didTapAdd;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)presentPickerControllerWithSourceType:(NSInteger)arg0 ;
-(void)registerCells;
-(void)workflowWizardNameCell:(id)arg0 didUpdateName:(id)arg1 ;


@end


#endif