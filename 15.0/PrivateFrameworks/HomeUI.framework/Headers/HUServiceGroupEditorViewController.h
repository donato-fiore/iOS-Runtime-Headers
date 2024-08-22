// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEGROUPEDITORVIEWCONTROLLER_H
#define HUSERVICEGROUPEDITORVIEWCONTROLLER_H

@class NSString;
@protocol HUNameAndIconEditorCellDelegate, HUServiceGroupEditorGridViewControllerDelegate, HUPresentationDelegateHost, HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUServiceGroupEditorItemManager.h"
#import "HUServiceGroupEditorGridViewController.h"

@interface HUServiceGroupEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUServiceGroupEditorGridViewControllerDelegate, HUPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *editingName; // ivar: _editingName
@property (nonatomic) BOOL hasViewEverAppeared; // ivar: _hasViewEverAppeared
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUServiceGroupEditorItemManager *itemManager;
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic) NSString *savedName;
@property (readonly, nonatomic) HUServiceGroupEditorGridViewController *serviceGridViewController; // ivar: _serviceGridViewController
@property (weak, nonatomic) NSObject<HUServiceGroupEditorViewControllerDelegate> *serviceGroupEditorDelegate; // ivar: _serviceGroupEditorDelegate
@property (readonly) Class superclass;


+(BOOL)adoptsDefaultGridLayoutMargins;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)childViewControllersToPreload;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initForCreatingNewServiceGroupFromServices:(id)arg0 home:(id)arg1 ;
-(id)initForEditingExistingServiceGroupBuilder:(id)arg0 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_updateServiceGroupBuilderName;
-(void)_validateDoneButton;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)serviceGroupEditorGrid:(id)arg0 didUpdateServiceGroupBuilder:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif