// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARVIEW_H
#define CNAVATARVIEW_H

@class UIView, NSArray, CNContact, CNContactStore, UINavigationController, UIImage, NSString, UIImageView, NSIndexSet, PRPersonaStore;
@protocol CNContactChangesObserver, CNAvatarCardControllerDelegate, CNUILikenessCachingRendererDelegate, CNCardTransitioning, CNAvatarViewDelegate, CNAvatarViewUpdateToken, CNUILikenessRendering, CNCancelable, CNSchedulerProvider;


#import "CNAvatarCardController.h"

@interface CNAvatarView : UIView <CNContactChangesObserver, CNAvatarCardControllerDelegate, CNUILikenessCachingRendererDelegate, CNCardTransitioning>

 {
    BOOL _showsActionsOnTap;
    BOOL _showsActionsOnForcePress;
}


@property (copy, nonatomic) NSArray *actionCategories;
@property (nonatomic) BOOL allowStaleRendering; // ivar: _allowStaleRendering
@property (nonatomic) BOOL allowStaleRenderingWithMatchingContextToken; // ivar: _allowStaleRenderingWithMatchingContextToken
@property (nonatomic) BOOL allowsAnimation; // ivar: _allowsAnimation
@property (nonatomic) BOOL asynchronousRendering; // ivar: _asynchronousRendering
@property (nonatomic) BOOL autoUpdateContact; // ivar: _autoUpdateContact
@property (nonatomic) BOOL bypassActionValidation;
@property (retain, nonatomic) CNAvatarCardController *cardController; // ivar: _cardController
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) UINavigationController *contactViewNavigationController; // ivar: _contactViewNavigationController
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) UIImage *contentImage;
@property (readonly, nonatomic) CGRect contentImageFrame;
@property (retain, nonatomic) NSString *contextToken; // ivar: _contextToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableCornerRadiusForAvatar; // ivar: _disableCornerRadiusForAvatar
@property (nonatomic) NSInteger displayedImageState; // ivar: _displayedImageState
@property (weak, nonatomic) UIView *forcePressView; // ivar: _forcePressView
@property (retain, nonatomic) NSObject<CNAvatarViewUpdateToken> *groupViewConfigurationUpdateToken; // ivar: _groupViewConfigurationUpdateToken
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CNUILikenessRendering> *imageRenderer; // ivar: _imageRenderer
@property (copy, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) BOOL isDisplayingContent;
@property (retain, nonatomic) NSIndexSet *maskedAvatarIndices; // ivar: _maskedAvatarIndices
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger monogrammerStyle; // ivar: _monogrammerStyle
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UIImage *overrideImage; // ivar: _overrideImage
@property (readonly, nonatomic) PRPersonaStore *personaStore; // ivar: _personaStore
@property (nonatomic) BOOL prohibitsPersonaFetch; // ivar: _prohibitsPersonaFetch
@property BOOL registeredContactAction; // ivar: _registeredContactAction
@property BOOL registeredInNotifier; // ivar: _registeredInNotifier
@property (retain, nonatomic) NSObject<CNCancelable> *rendererToken; // ivar: _rendererToken
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (nonatomic) BOOL shouldUpdateMaskedAvatars; // ivar: _shouldUpdateMaskedAvatars
@property (nonatomic) BOOL showsActionsOnForcePress;
@property (nonatomic) BOOL showsActionsOnTap;
@property (nonatomic) BOOL showsContactOnTap; // ivar: _showsContactOnTap
@property (nonatomic) NSUInteger stateCaptureHandle; // ivar: _stateCaptureHandle
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled
@property (readonly, nonatomic) CGRect transitioningContentFrame;
@property (readonly, nonatomic) UIView *transitioningContentView;
@property (readonly, nonatomic) CGRect transitioningFrame;
@property (readonly, nonatomic) UIImage *transitioningImage;
@property (readonly, nonatomic) CGRect transitioningImageFrame;
@property BOOL transitioningImageVisible;
@property (readonly, nonatomic) UIView *transitioningView;


+(BOOL)defaultThreeDTouchSupport;
+(NSUInteger)maxContactAvatars;
+(id)descriptionForDisplayedImageState:(NSInteger)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg0 ;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg0 shouldUseCachingRenderer:(BOOL)arg1 description:(id)arg2 ;
+(id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg0 shouldUseCachingRenderer:(BOOL)arg1 ;
-(BOOL)avatarCardController:(id)arg0 shouldShowContact:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)isUpdatingGroupViewConfiguration;
-(BOOL)shouldUpdateWithContacts:(id)arg0 ;
-(CGFloat)_diameter;
-(NSInteger)avatarCardController:(id)arg0 presentationResultForLocation:(struct CGPoint )arg1 ;
-(id)avatarCardController:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)currentLikenessScope;
-(id)descriptorForRequiredKeys;
-(id)imageForTransitioningToFullScreen;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 personaStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImageRenderer:(id)arg0 threeDTouchEnabled:(BOOL)arg1 contactStore:(id)arg2 ;
-(id)initWithImageRenderer:(id)arg0 threeDTouchEnabled:(BOOL)arg1 contactStore:(id)arg2 style:(NSUInteger)arg3 schedulerProvider:(id)arg4 ;
-(id)initWithSettings:(id)arg0 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg0 ;
-(id)updateViewWithGroupIdentity:(id)arg0 ;
-(id)updateViewWithGroupIdentity:(id)arg0 maskingContacts:(id)arg1 ;
-(struct CGRect )frameForAvatarAtIndex:(NSUInteger)arg0 inView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_renderContactsImage;
-(void)_updateCardActions;
-(void)_updateRegistration;
-(void)avatarCacheDidUpdateForIdentifiers:(id)arg0 ;
-(void)avatarCardControllerDidDismiss:(id)arg0 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg0 ;
-(void)avatarCardControllerWillDismiss:(id)arg0 ;
-(void)clearImage;
-(void)contactDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)dismissContactViewController:(id)arg0 ;
-(void)layoutSubviews;
-(void)notifyDelegateOfGroupConfigurationUpdateWithError:(id)arg0 ;
-(void)resetGroupUpdateTokenIfNeeded;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 state:(NSInteger)arg1 ;
-(void)setupAvatarCardControllerIfNeeded;
-(void)showContact:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif