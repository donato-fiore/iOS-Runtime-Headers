// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTREVIEWPARTICIPANTSVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTREVIEWPARTICIPANTSVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, UIActivityIndicatorView, OBBoldTrayButton, OBLinkTrayButton, NSProgress, NSString;
@protocol PXAssistantViewController, PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantParticipantViewModel.h"
#import "PXSharedLibraryParticipantTableViewController.h"
#import "PXRoundProgressView.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantReviewParticipantsViewController : OBTableWelcomeController <PXAssistantViewController, PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver>

 {
    PXSharedLibraryAssistantParticipantViewModel *_participantViewModel;
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_tableViewLayoutConstraints;
    UIActivityIndicatorView *_spinnerView;
    PXRoundProgressView *_progressView;
    OBBoldTrayButton *_shareInMessagesButton;
    OBLinkTrayButton *_shareButton;
    NSInteger _shareButtonTransport;
    NSProgress *_shareProgress;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldHideBackButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 participantViewModel:(id)arg1 ;
-(void)_cancelShareIfInProgress;
-(void)_finishAssistantWithInvitationTransport:(NSInteger)arg0 sourceItem:(id)arg1 ;
-(void)_setIsProcessing:(BOOL)arg0 ;
-(void)_updateActionButtons;
-(void)_updateCaptionText;
-(void)_updateHeaderDetailText;
-(void)_updateIcon;
-(void)_updateNavigationItem;
-(void)_updateProgress;
-(void)_updateTableViewInteractability;
-(void)_updateTableViewLayoutConstraints;
-(void)dismissPresentedViewControllerAnimated:(BOOL)arg0 forSharedLibraryParticipantTableViewController:(id)arg1 ;
-(void)inviteButtonTapped:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 forSharedLibraryParticipantTableViewController:(id)arg2 ;
-(void)shareButtonTapped:(id)arg0 ;
-(void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif