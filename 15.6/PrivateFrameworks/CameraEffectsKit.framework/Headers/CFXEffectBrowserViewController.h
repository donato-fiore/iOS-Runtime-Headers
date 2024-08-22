// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXEFFECTBROWSERVIEWCONTROLLER_H
#define CFXEFFECTBROWSERVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, UIView, IMADockViewController;
@protocol AVTAvatarPickerDelegate, CFXEffectPickerViewControllerDelegate, IMADockViewControllerDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, CFXEffectBrowserContentPresenterDelegate, CFXEffectBrowserViewControllerDelegate;


#import "CFXEffectPickerViewController.h"

@interface CFXEffectBrowserViewController : UIViewController <AVTAvatarPickerDelegate, CFXEffectPickerViewControllerDelegate, IMADockViewControllerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_group> *animatedPreviewProcessingGroup; // ivar: _animatedPreviewProcessingGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *animatedPreviewWritingQueue; // ivar: _animatedPreviewWritingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *animatedPreviewWritingSemaphore; // ivar: _animatedPreviewWritingSemaphore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *animojiLoadingQueue; // ivar: _animojiLoadingQueue
@property (weak, nonatomic) UIViewController *contentPresenter; // ivar: _contentPresenter
@property (weak, nonatomic) NSObject<CFXEffectBrowserContentPresenterDelegate> *contentPresenterDelegate; // ivar: _contentPresenterDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXEffectBrowserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *dockPresentationViewController;
@property (retain, nonatomic) CFXEffectPickerViewController *effectPickerViewController; // ivar: _effectPickerViewController
@property (readonly, nonatomic) BOOL expandedAppShouldDismissOnDragSuccess;
@property (readonly, nonatomic) CGSize expandedAppViewControllerSize;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *madBottomConstraint; // ivar: _madBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *madExpandedAppButtonsHeightConstraint; // ivar: _madExpandedAppButtonsHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *madHeightConstraint; // ivar: _madHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *madLeadingConstraint; // ivar: _madLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *madTopConstraint; // ivar: _madTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *madTrailingConstraint; // ivar: _madTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *madWidthConstraint; // ivar: _madWidthConstraint
@property (retain, nonatomic) UIView *messagesAppsDockContainerView; // ivar: _messagesAppsDockContainerView
@property (retain, nonatomic) IMADockViewController *messagesAppsDockViewController; // ivar: _messagesAppsDockViewController
@property (retain, nonatomic) NSString *selectedAppIdentifier; // ivar: _selectedAppIdentifier
@property (nonatomic) BOOL showAppIconBorders;
@property (readonly) Class superclass;


+(struct CGSize )CFX_droppedSizeForSticker:(id)arg0 dropTarget:(id)arg1 ;
+(struct CGSize )CFX_sizeOfImageAtURL:(id)arg0 ;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(id)initWithDelegate:(id)arg0 contentPresenter:(id)arg1 ;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg0 ;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg0 ;
-(id)selectedFilterIdentifierForEffectPickerViewController:(id)arg0 ;
-(void)CFX_addSticker:(id)arg0 atDropTarget:(id)arg1 ;
-(void)CFX_updateAVTAvatarPickerforMessagesAppViewController:(id)arg0 ;
-(void)addSticker:(id)arg0 ;
-(void)addSticker:(id)arg0 atDropTarget:(id)arg1 ;
-(void)avatarPicker:(id)arg0 didSelectAvatarRecord:(id)arg1 ;
-(void)avatarPickerDidEndCameraSession:(id)arg0 ;
-(void)avatarPickerWillStartCameraSession:(id)arg0 ;
-(void)commitAnimatedLayoutChanges;
-(void)compactCurrentMessagesApp;
-(void)configureUIForOrientation;
-(void)dealloc;
-(void)didSelectAppWithBundleIdentifier:(id)arg0 ;
-(void)dismissExpandedAppViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)displayPickerForEffectTypeIdentifier:(id)arg0 messagesAppViewController:(id)arg1 embedInMessageAppViewController:(BOOL)arg2 ;
-(void)dockDidMagnify:(BOOL)arg0 ;
-(void)effectPickerViewController:(id)arg0 didPickEffect:(id)arg1 ;
-(void)hideBrowserAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)initMessagesAppsDockViewController;
-(void)loadView;
-(void)presentExpandedAppViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)refreshEffectBrowserForCameraFlip;
-(void)removeEffectPickerViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif