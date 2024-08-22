// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYAVATARVIEWCONTROLLER_H
#define CNVISUALIDENTITYAVATARVIEWCONTROLLER_H

@class UIViewController, CAShapeLayer, CNUIAvatarLayoutLayerItem, UIImage, UIImageView, UITapGestureRecognizer, UIView, NSString;
@protocol CNContactChangesObserver, CNVisualIdentityAvatarContainerViewDelegate, CNScheduler, CNVisualIdentityPrimaryAvatarProvider;


#import "CNVisualIdentityAvatarLayoutManager.h"
#import "CNVisualIdentityContactAvatarProvider.h"
#import "CNBadgingAvatarBadgeStyleSettings.h"
#import "CNAvatarAccessoryView.h"
#import "CNVisualIdentity.h"

@interface CNVisualIdentityAvatarViewController : UIViewController <CNContactChangesObserver, CNVisualIdentityAvatarContainerViewDelegate>



@property (retain, nonatomic) CAShapeLayer *avatarClippingLayer; // ivar: _avatarClippingLayer
@property (retain, nonatomic) CNUIAvatarLayoutLayerItem *avatarLayerItem; // ivar: _avatarLayerItem
@property (retain, nonatomic) CNVisualIdentityAvatarLayoutManager *avatarLayoutManager; // ivar: _avatarLayoutManager
@property (retain, nonatomic) CNVisualIdentityContactAvatarProvider *avatarProvider; // ivar: _avatarProvider
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) UIImageView *badgeImageView; // ivar: _badgeImageView
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings; // ivar: _badgeStyleSettings
@property (retain, nonatomic) UITapGestureRecognizer *badgeTapGestureRecognizer; // ivar: _badgeTapGestureRecognizer
@property (readonly, nonatomic) NSObject<CNScheduler> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge
@property (retain, nonatomic) UIImageView *mediaContextBadgeView; // ivar: _mediaContextBadgeView
@property (nonatomic) CGSize previousSize; // ivar: _previousSize
@property (retain, nonatomic) NSObject<CNVisualIdentityPrimaryAvatarProvider> *primaryAvatarProvider; // ivar: _primaryAvatarProvider
@property (readonly, nonatomic) NSObject<CNScheduler> *renderingQueue; // ivar: _renderingQueue
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingDropAppearance; // ivar: _usingDropAppearance
@property (retain, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


+(NSUInteger)maxContactAvatars;
+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldDisplayPrimaryAvatarImage;
-(NSInteger)itemCount;
-(id)containingCellView;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 primaryAvatarProvider:(id)arg1 ;
-(id)initWithVisualIdentity:(id)arg0 primaryAvatarProvider:(id)arg1 avatarImageRendererSettings:(id)arg2 ;
-(id)layerForPrimaryAvatar;
-(struct CGRect )avatarFrameForFocusedAvatarInView:(id)arg0 ;
-(struct CGSize )estimatedSizeThatFits:(struct CGSize )arg0 ;
-(void)beginDropAppearance;
-(void)contactDidChange:(id)arg0 ;
-(void)createPrimaryAvatarLayerIfNeeded;
-(void)dealloc;
-(void)endDropAppearance;
-(void)layoutAvatars;
-(void)layoutPrimaryAvatar;
-(void)loadView;
-(void)logSublayersContent;
-(void)removeAllSublayers;
-(void)removeBadgeTapGestureRecognizer;
-(void)setBadgeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setBadgeViewImage:(id)arg0 ;
-(void)updateAvatarSublayersAndAddToView;
-(void)updateBadgeCropStyle;
-(void)updateBadgeImageViewBackgroundColor;
-(void)updateBadgeImageViewContentMode;
-(void)updateBadgeImageViewPosition;
-(void)updateBadgeStyling;
-(void)updateBadgeTintColor;
-(void)updateBadgeViewFrame;
-(void)updateContactChangesNotifierRegistration;
-(void)updateImageForLayerItem:(id)arg0 atIndex:(NSInteger)arg1 includePlaceholder:(BOOL)arg2 ;
-(void)updateImageForLayerItem:(id)arg0 atIndex:(NSInteger)arg1 includePlaceholder:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateImageForPrimaryAvatar;
-(void)updateMediaContextBadgeFrame;
-(void)updateMediaContextBadgeImage;
-(void)updatePrimaryAvatar;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)visualIdentityDidUpdate:(id)arg0 ;


@end


#endif