// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEDITLOCATIONVIEWCONTROLLER_H
#define HUEDITLOCATIONVIEWCONTROLLER_H

@class NSString, HFHomeBuilder, UIBarButtonItem;
@protocol UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUSwitchCellDelegate, HUPresentationDelegateHost, HUEditLocationViewControllerAddLocationDelegate, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMatterConnectedServicesItemModuleController.h"
#import "HUEditableTextViewCell.h"
#import "HUEditLocationItemManager.h"
#import "HUEditableTextCell.h"
#import "HUUserNotificationTopicListModuleController.h"
#import "HUWallpaperPickerInlineViewController.h"

@interface HUEditLocationViewController : HUItemTableViewController <UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUSwitchCellDelegate, HUPresentationDelegateHost>



@property (weak, nonatomic) NSObject<HUEditLocationViewControllerAddLocationDelegate> *addLocationDelegate; // ivar: _addLocationDelegate
@property (retain, nonatomic) HUMatterConnectedServicesItemModuleController *connectedServicesItemModuleController; // ivar: _connectedServicesItemModuleController
@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HUEditableTextViewCell *detailNotesCell; // ivar: _detailNotesCell
@property (retain, nonatomic) NSString *editedName; // ivar: _editedName
@property (retain, nonatomic) NSString *editedNotes; // ivar: _editedNotes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFHomeBuilder *homeBuilder; // ivar: _homeBuilder
@property (weak, nonatomic) HUEditLocationItemManager *homeItemManager; // ivar: _homeItemManager
@property (weak, nonatomic) HUEditableTextCell *nameCell; // ivar: _nameCell
@property (retain, nonatomic) HUUserNotificationTopicListModuleController *notificationTopicModuleController; // ivar: _notificationTopicModuleController
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem; // ivar: _savedButtonBarItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerViewController; // ivar: _wallpaperPickerViewController


-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg0 presentationDelegate:(id)arg1 addLocationDelegate:(id)arg2 ;
-(id)initWithHomeBuilder:(id)arg0 presentationDelegate:(id)arg1 addLocationDelegate:(id)arg2 context:(NSUInteger)arg3 ;
-(id)presentBridgeSettings:(BOOL)arg0 ;
-(id)presentDefaultMediaServiceSettings:(id)arg0 ;
-(id)presentNetworkSettings:(BOOL)arg0 ;
-(id)presentNotificationSettingsForTopic:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentPersonalRequestsSettings:(id)arg0 ;
-(id)presentSoftwareUpdate:(BOOL)arg0 ;
-(id)presentUserLockSettings:(id)arg0 ;
-(id)presentUserViewController:(id)arg0 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateSoftwareUpdateDynamicFooterView;
-(void)addButtonPressed:(id)arg0 ;
-(void)addPeopleViewControllerDidCancel:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)doneButtonPressed:(id)arg0 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)scrollToNotificationTopicsAnimated:(BOOL)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateWallpaper:(id)arg0 image:(id)arg1 ;
-(void)viewDidLoad;
-(void)wallpaperEditing:(id)arg0 didFinishWithWallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperEditingDidCancel:(id)arg0 ;
-(void)wallpaperPicker:(id)arg0 didReceiveDroppedImage:(id)arg1 ;
-(void)wallpaperPicker:(id)arg0 didSelectWallpaper:(id)arg1 withImage:(id)arg2 ;
-(void)wallpaperPickerDidFinish:(id)arg0 wallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg0 ;
-(void)wallpaperThumbnailCell:(id)arg0 didReceiveDroppedImage:(id)arg1 ;


@end


#endif