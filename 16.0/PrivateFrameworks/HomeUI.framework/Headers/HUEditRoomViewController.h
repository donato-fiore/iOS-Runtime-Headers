// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEDITROOMVIEWCONTROLLER_H
#define HUEDITROOMVIEWCONTROLLER_H

@class NSString, UITextField, HFRoomBuilder, UIBarButtonItem;
@protocol UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUEditRoomViewControllerAddRoomDelegate, HUEditRoomViewControllerPresentationDelegate;


#import "HUItemCollectionViewController.h"
#import "HUEditRoomItemManager.h"
#import "HUWallpaperPickerInlineViewController.h"
#import "HUZoneModuleController.h"

@interface HUEditRoomViewController : HUItemCollectionViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate>



@property (readonly, weak, nonatomic) NSObject<HUEditRoomViewControllerAddRoomDelegate> *addRoomDelegate; // ivar: _addRoomDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UITextField *editingTextField; // ivar: _editingTextField
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HUEditRoomViewControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder
@property (weak, nonatomic) HUEditRoomItemManager *roomItemManager; // ivar: _roomItemManager
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem; // ivar: _savedButtonBarItem
@property (readonly) Class superclass;
@property (retain, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerController; // ivar: _wallpaperPickerController
@property (retain, nonatomic) HUZoneModuleController *zoneModuleController; // ivar: _zoneModuleController


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithRoomBuilder:(id)arg0 presentationDelegate:(id)arg1 addRoomDelegate:(id)arg2 ;
-(id)itemModuleControllers;
-(id)trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg0 ;
-(void)addButtonPressed:(id)arg0 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)doneButtonPressed:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)nameFieldTextChanged:(id)arg0 ;
-(void)presentWallpaperEditingViewControllerWithImage:(id)arg0 wallpaper:(id)arg1 ;
-(void)updateTitle;
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