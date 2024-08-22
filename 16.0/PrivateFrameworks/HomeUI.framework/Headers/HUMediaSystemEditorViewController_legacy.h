// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASYSTEMEDITORVIEWCONTROLLER_LEGACY_H
#define HUMEDIASYSTEMEDITORVIEWCONTROLLER_LEGACY_H

@class NSString, UIBarButtonItem, HFMediaSystemBuilder, UIViewController;
@protocol HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUMediaSystemEditorHelperDelegate, HUPresentationDelegateHost, HUMediaSystemEditorViewControllerDelegate_legacy, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaSystemEditorHelper.h"
#import "HUMediaSystemEditorItemManager.h"
#import "HUMediaSystemEditorGridViewController.h"

@interface HUMediaSystemEditorViewController_legacy : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUMediaSystemEditorHelperDelegate, HUPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButtonBarItem; // ivar: _doneButtonBarItem
@property (nonatomic) BOOL hasViewEverAppeared; // ivar: _hasViewEverAppeared
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUMediaSystemEditorHelper *helper; // ivar: _helper
@property (retain, nonatomic) HUMediaSystemEditorItemManager *itemManager;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) NSObject<HUMediaSystemEditorViewControllerDelegate_legacy> *mediaSystemEditorDelegate; // ivar: _mediaSystemEditorDelegate
@property (readonly, nonatomic) UIViewController *mediaSystemHelperPresentingViewController;
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic) HUMediaSystemEditorGridViewController *serviceGridViewController; // ivar: _serviceGridViewController
@property (readonly) Class superclass;


+(BOOL)adoptsDefaultGridLayoutMargins;
+(BOOL)wouldPairingAccessoriesNecessitateConfiguration:(id)arg0 ;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)childViewControllersToPreload;
-(id)createMediaSystem;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)handleMediaSystemCreationFuture:(id)arg0 ;
-(id)initForCreatingNewMediaSystemFromMediaAccessories:(id)arg0 home:(id)arg1 ;
-(id)initForEditingExistingMediaSystemBuilder:(id)arg0 ;
-(id)mediaSystemEditorGrid:(id)arg0 didUpdateMediaSystemBuilder:(id)arg1 ;
-(id)savedName;
-(void)_cancel:(id)arg0 ;
-(void)createMediaSystemWithAccessory:(id)arg0 ;
-(void)mediaSystemEditorHelper:(id)arg0 didAbortForAccessoryNeedingUpdate:(id)arg1 ;
-(void)mediaSystemEditorHelper:(id)arg0 didModifyMediaSystemBuilder:(id)arg1 ;
-(void)mediaSystemEditorHelper:(id)arg0 needsToPresentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)mediaSystemEditorHelperDidBeginCommitting:(id)arg0 ;
-(void)mediaSystemEditorHelperDidEndCommitting:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif