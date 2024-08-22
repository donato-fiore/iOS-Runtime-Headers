// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSCENEACTIONEDITORVIEWCONTROLLER_H
#define HUSCENEACTIONEDITORVIEWCONTROLLER_H

@class NSMutableDictionary, NSString, NSSet;
@protocol HUSwitchCellDelegate, HUSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUSymbolIconPickerDelegate, HUActionSetAccessoryPickerViewControllerDelegate, HUEmbeddedSceneActionGridViewControllerDelegate, HUIconPickerViewControllerDelegate, HUServiceGridViewControllerDelegate, HUMediaSelectionViewControllerDelegate, HUDetailsPresentationDelegateHost, HUPresentationDelegate, HUSceneEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUSceneActionEditorItemManager.h"
#import "HUQuickControlSummaryNavigationBarTitleView.h"

@interface HUSceneActionEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUSymbolIconPickerDelegate, HUActionSetAccessoryPickerViewControllerDelegate, HUEmbeddedSceneActionGridViewControllerDelegate, HUIconPickerViewControllerDelegate, HUServiceGridViewControllerDelegate, HUMediaSelectionViewControllerDelegate, HUDetailsPresentationDelegateHost>



@property (readonly, nonatomic) NSMutableDictionary *actionGridViewControllersByEditorType; // ivar: _actionGridViewControllersByEditorType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *editingName; // ivar: _editingName
@property (nonatomic) BOOL hasViewEverAppeared; // ivar: _hasViewEverAppeared
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSceneActionEditorItemManager *itemManager;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView; // ivar: _navigationBarTitleView
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (copy, nonatomic) NSSet *prioritizedAccessories;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (readonly, nonatomic) NSString *savedName;
@property (weak, nonatomic) NSObject<HUSceneEditorDelegate> *sceneEditorDelegate; // ivar: _sceneEditorDelegate
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;


+(BOOL)adoptsDefaultGridLayoutMargins;
-(BOOL)_allowEditingNameAndIcon;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_actionGridViewControllerForEditorType:(NSUInteger)arg0 ;
-(id)childViewControllersToPreload;
-(id)commitChanges;
-(id)contentConfigurationForHeaderViewAtSectionIndex:(NSUInteger)arg0 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)mediaSelectionViewController:(id)arg0 messageForMediaPickerUnavailableReason:(NSInteger)arg1 ;
-(id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg0 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_changeServices:(id)arg0 ;
-(void)_deleteScene:(id)arg0 indexPath:(id)arg1 ;
-(void)_done:(id)arg0 ;
-(void)_presentMediaSelection;
-(void)_sendSceneIconEditEventDidChangeColor:(BOOL)arg0 didChangeIcon:(BOOL)arg1 ;
-(void)_servicePickerDidFinish;
-(void)_testScene:(id)arg0 ;
-(void)_updateActionSetBuilderName;
-(void)_validateDoneButton;
-(void)actionSetAccessoryPickerDidFinish:(id)arg0 ;
-(void)iconPicker:(id)arg0 didPickIcon:(id)arg1 withTintColor:(id)arg2 ;
-(void)iconPicker:(id)arg0 didPickIconDescriptor:(id)arg1 ;
-(void)iconPickerDidCancel:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg0 ;
-(void)sceneActionGridViewController:(id)arg0 didUpdate:(id)arg1 ;
-(void)sceneServicePickerDidFinish:(id)arg0 ;
-(void)serviceGridViewController:(id)arg0 didTapItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif