// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYASSISTANTPARTICIPANTVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTPARTICIPANTVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, OBTrayButton, OBLinkTrayButton, NSString;
@protocol PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryParticipantTableViewController.h"
#import "PXSharedLibraryAssistantViewModel.h"
#import "PXSharedLibraryAssistantParticipantViewModel.h"

@interface PXSharedLibraryAssistantParticipantViewController : OBTableWelcomeController <PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver, PXAssistantViewController>

 {
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_tableViewLayoutConstraints;
    OBTrayButton *_titleButton;
    OBLinkTrayButton *_addLaterButton;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *assistantViewModel; // ivar: _assistantViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXSharedLibraryAssistantParticipantViewModel *participantViewModel; // ivar: _participantViewModel
@property (readonly) Class superclass;


-(id)initWithAssistantViewModel:(id)arg0 participantViewModel:(id)arg1 ;
-(void)_continueAssistant;
-(void)_updateButtonsAppearance;
-(void)_updateIcon;
-(void)_updateTableViewLayoutConstraints;
-(void)addLaterButtonTapped:(id)arg0 ;
-(void)continueButtonTapped:(id)arg0 ;
-(void)dismissPresentedViewControllerAnimated:(BOOL)arg0 forSharedLibraryParticipantTableViewController:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 forSharedLibraryParticipantTableViewController:(id)arg2 ;
-(void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif