// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIASYSTEMEDITORVIEWCONTROLLER_H
#define HUMEDIASYSTEMEDITORVIEWCONTROLLER_H

@class NAFuture, NSString, HFMediaSystemBuilder;
@protocol HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUPresentationDelegateHost, HUMediaSystemEditorViewControllerDelegate, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaSystemEditorItemManager.h"
#import "HUMediaSystemEditorGridViewController.h"

@interface HUMediaSystemEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUPresentationDelegateHost>



@property (retain, nonatomic) NAFuture *accountArbitrationFuture; // ivar: _accountArbitrationFuture
@property (retain, nonatomic) NAFuture *createNewMediaSystemFuture; // ivar: _createNewMediaSystemFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasViewEverAppeared; // ivar: _hasViewEverAppeared
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUMediaSystemEditorItemManager *itemManager;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) NSObject<HUMediaSystemEditorViewControllerDelegate> *mediaSystemEditorDelegate; // ivar: _mediaSystemEditorDelegate
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
-(id)_authKitContextGenerator:(SEL)arg0 ;
-(id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
-(id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)arg0 ;
-(id)_executePreferredMediaUserReconcilationForMediaSystemBuilder:(id)arg0 ;
-(id)_promptForRoomChange;
-(id)childViewControllersToPreload;
-(id)createMediaSystem;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initForCreatingNewMediaSystemFromMediaAccessories:(id)arg0 home:(id)arg1 ;
-(id)initForEditingExistingMediaSystemBuilder:(id)arg0 ;
-(id)mediaSystemEditorGrid:(id)arg0 didUpdateMediaSystemBuilder:(id)arg1 ;
-(id)savedName;
-(void)_cancel:(id)arg0 ;
-(void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)arg0 ;
-(void)createMediaSystemWithAccessory:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif