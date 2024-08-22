// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAVATARCARDCONTROLLER_H
#define CNAVATARCARDCONTROLLER_H

@class NSArray, UIAlertController, UIVisualEffectView, _UIClickPresentationInteraction, CNContact, NSString, UIView, NSData, UIViewController, UIGestureRecognizer, UITapGestureRecognizer;
@protocol _UIClickPresentationInteractionDelegate, CNAvatarCardViewControllerDelegate, CNAvatarCardControllerOrbTransitionDelegate, UIGestureRecognizerDelegate, CNAvatarCardControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNAvatarView.h"
#import "CNAvatarCardViewController.h"
#import "CNContactOrbHeaderView.h"

@interface CNAvatarCardController : NSObject <_UIClickPresentationInteractionDelegate, CNAvatarCardViewControllerDelegate, CNAvatarCardControllerOrbTransitionDelegate, UIGestureRecognizerDelegate>



@property (copy, nonatomic) NSArray *actionCategories; // ivar: _actionCategories
@property (nonatomic) BOOL actionsNeedRefresh; // ivar: _actionsNeedRefresh
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (weak, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // ivar: _backgroundVisualEffectView
@property (nonatomic) BOOL bypassActionValidation; // ivar: _bypassActionValidation
@property (retain, nonatomic) NSArray *cardControllerConstraints; // ivar: _cardControllerConstraints
@property (retain, nonatomic) CNAvatarCardViewController *cardViewController; // ivar: _cardViewController
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction; // ivar: _clickPresentationInteraction
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarCardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *overrideImageData; // ivar: _overrideImageData
@property (nonatomic) NSInteger presentationResult; // ivar: _presentationResult
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // ivar: _rolloverGestureRecognizer
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)avatarCardEnabledForTraitCollection:(id)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg0 ;
+(id)previewHeaderViewControllerForContacts:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)hasActions;
-(BOOL)readyForContactsMatching:(id)arg0 ;
-(id)cardViewController:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg0 ;
-(id)refetchContactsMatching:(id)arg0 storeProvider:(id)arg1 ;
-(void)_setupAlertController;
-(void)_setupCardViewControllerWithContacts:(id)arg0 ;
-(void)_setupForCardControllerPresentation;
-(void)_updateHeaderViewFrame;
-(void)cardViewControllerDidDismiss:(id)arg0 ;
-(void)cardViewControllerWillDismiss:(id)arg0 ;
-(void)cleanupAfterDisplay;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)configurePreviewInteraction;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)orbTransitionDidEndTransition:(id)arg0 ;
-(void)orbTransitionDidPrepareTransition:(id)arg0 withContainerView:(id)arg1 ;
-(void)prepareForDisplay;
-(void)prepareWithContacts:(id)arg0 store:(id)arg1 ;
-(void)prepareWithContacts:(id)arg0 storeProvider:(id)arg1 ;
-(void)prepareWithOverrideImageData:(id)arg0 ;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)presentAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)showContact;
-(void)showContact:(id)arg0 ;


@end


#endif