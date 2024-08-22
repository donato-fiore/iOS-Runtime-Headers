// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCARDCONTROLLER_H
#define CNAVATARCARDCONTROLLER_H

@class NSArray, CNContact, UIContextMenuInteraction, NSString, UIView, NSData, UIViewController, UIGestureRecognizer;
@protocol UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CNContactOrbActionsControllerDelegate, CNAvatarCardControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNActionMenuHelper.h"
#import "CNAvatarView.h"
#import "CNContactOrbHeaderView.h"
#import "CNContactOrbActionsController.h"
#import "CNContactOrbHeaderViewController.h"

@interface CNAvatarCardController : NSObject <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CNContactOrbActionsControllerDelegate>



@property (copy, nonatomic) NSArray *actionCategories; // ivar: _actionCategories
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // ivar: _actionMenuHelper
@property (nonatomic) BOOL actionsNeedRefresh; // ivar: _actionsNeedRefresh
@property (weak, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (nonatomic) BOOL bypassActionValidation; // ivar: _bypassActionValidation
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarCardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CNContactOrbActionsController *orbActionsController; // ivar: _orbActionsController
@property (retain, nonatomic) CNContactOrbHeaderViewController *orbHeaderViewController; // ivar: _orbHeaderViewController
@property (retain, nonatomic) NSData *overrideImageData; // ivar: _overrideImageData
@property (nonatomic) NSInteger presentationResult; // ivar: _presentationResult
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // ivar: _rolloverGestureRecognizer
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)avatarCardEnabledForTraitCollection:(id)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg0 ;
+(id)previewHeaderViewControllerForContacts:(id)arg0 ;
-(BOOL)hasActions;
-(BOOL)readyForContactsMatching:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)presentingViewControllerForActionsController:(id)arg0 ;
-(id)refetchContactsMatching:(id)arg0 storeProvider:(id)arg1 ;
-(void)cleanupAfterDisplay;
-(void)configurePreviewInteraction;
-(void)contactOrbActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)prepareForDisplay;
-(void)prepareWithContacts:(id)arg0 store:(id)arg1 ;
-(void)prepareWithContacts:(id)arg0 storeProvider:(id)arg1 ;
-(void)prepareWithOverrideImageData:(id)arg0 ;
-(void)retrieveActions;
-(void)setupActionsControllerForContacts:(id)arg0 ;
-(void)setupActionsForContacts:(id)arg0 ;
-(void)showContact;
-(void)showContact:(id)arg0 ;
-(void)updateWithMenuItems:(id)arg0 ;


@end


#endif