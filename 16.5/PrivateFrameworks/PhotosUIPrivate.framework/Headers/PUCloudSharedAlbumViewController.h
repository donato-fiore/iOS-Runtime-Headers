// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCLOUDSHAREDALBUMVIEWCONTROLLER_H
#define PUCLOUDSHAREDALBUMVIEWCONTROLLER_H

@class PXVideoTrimQueueController, UIBarButtonItem, UIViewController, UISegmentedControl, NSArray, PLCloudSharedAlbum, NSString;
@protocol PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PXVideoTrimQueueControllerDelegate, PXPhotoStreamComposeServiceDelegate, PXAssetsSharingHelperDelegate, PUCloudSharedAlbumViewControllerDelegate;


#import "PUPhotosAlbumViewController.h"
#import "PUPhotoStreamComposeServiceViewController.h"

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PXVideoTrimQueueControllerDelegate, PXPhotoStreamComposeServiceDelegate, PXAssetsSharingHelperDelegate>

 {
    PXVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
}


@property (nonatomic, setter=_setCanContributeToCloudSharedAlbum:) BOOL _canContributeToCloudSharedAlbum; // ivar: __canContributeToCloudSharedAlbum
@property (retain, nonatomic, setter=_setOptionsBarButtonItem:) UIBarButtonItem *_optionsBarButtonItem; // ivar: __optionsBarButtonItem
@property (retain, nonatomic, setter=_setOptionsBarButtonSpacerItem:) UIBarButtonItem *_optionsBarButtonSpacerItem; // ivar: __optionsBarButtonSpacerItem
@property (retain, nonatomic, setter=_setOptionsPopoverRootViewController:) UIViewController *_optionsPopoverRootViewController; // ivar: __optionsPopoverRootViewController
@property (retain, nonatomic, setter=_setOptionsViewController:) UIViewController *_optionsViewController; // ivar: __optionsViewController
@property (nonatomic, setter=_setSelectedItemIndex:) NSInteger _selectedItemIndex; // ivar: __selectedItemIndex
@property (retain, nonatomic, setter=_setSwitcherBarButtonItem:) UIBarButtonItem *_switcherBarButtonItem; // ivar: __switcherBarButtonItem
@property (retain, nonatomic, setter=_setSwitcherSegmentedControl:) UISegmentedControl *_switcherSegmentedControl; // ivar: __switcherSegmentedControl
@property (retain, nonatomic, setter=_setTransitioningOptionsViewControllers:) NSArray *_transitioningOptionsViewControllers; // ivar: __transitioningOptionsViewControllers
@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUCloudSharedAlbumViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayingOptions, setter=setDisplayingOptions:) BOOL displayingOptions; // ivar: _displayingOptions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canDisplayOptions;
-(BOOL)_shouldShowOptionsSwitcherInToolbar;
-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)canAddToOtherAlbumContent;
-(BOOL)canDeleteContent;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)shouldShowTabBar;
-(BOOL)shouldShowToolbar;
-(BOOL)wantsAddContentInToolbar;
-(BOOL)wantsAddPlaceholderAtEndOfSection:(NSInteger)arg0 ;
-(BOOL)wantsGlobalFooter;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_newOptionsViewController;
-(id)_suppressionContexts;
-(id)globalFooterSubtitle;
-(id)newToolbarItems;
-(id)px_navigationDestination;
-(void)_collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)_dismissOptionsPopoverAnimated:(BOOL)arg0 ;
-(void)_handleSwitcherSegmentedControl:(id)arg0 ;
-(void)_optionsBarButtonItemPressed:(id)arg0 ;
-(void)_presentOptionsPopoverFromBarButtonItem:(id)arg0 ;
-(void)_updateOptionsView;
-(void)_updateOptionsViewInsets;
-(void)albumStreamingOptionsViewController:(id)arg0 didCompleteWithReason:(int)arg1 ;
-(void)controller:(id)arg0 didCancelTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 didFinishTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 dismissViewControllerWithCompletion:(id)arg1 ;
-(void)controller:(id)arg0 presentViewController:(id)arg1 ;
-(void)didSelectAddPlaceholderInSection:(NSInteger)arg0 ;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)handleAddToAlbum:(id)arg0 pickedAssets:(id)arg1 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)photoStreamComposeService:(id)arg0 didPostComment:(id)arg1 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif