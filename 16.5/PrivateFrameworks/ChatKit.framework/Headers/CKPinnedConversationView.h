// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPINNEDCONVERSATIONVIEW_H
#define CKPINNEDCONVERSATIONVIEW_H

@class UIView, NSMutableArray, VNFaceLandmarkRegion2D, UIImage, UIImageView, NSString, CAFilter, NSArray;
@protocol CNAvatarViewDelegate, CKPinnedConversationViewDelegate;


#import "CKPinnedConversationActivityView.h"
#import "CKAvatarView.h"
#import "CKConversation.h"
#import "CKLabel.h"

@interface CKPinnedConversationView : UIView <CNAvatarViewDelegate>



@property (retain, nonatomic) NSMutableArray *activeActivitySuppressionReasons; // ivar: _activeActivitySuppressionReasons
@property (weak, nonatomic) UIView *activityBoundingParentView; // ivar: _activityBoundingParentView
@property (nonatomic) NSInteger activityItemOriginationDirection;
@property (nonatomic) CGFloat activityItemTopInset; // ivar: _activityItemTopInset
@property (retain, nonatomic) CKPinnedConversationActivityView *activityView; // ivar: _activityView
@property (retain, nonatomic) VNFaceLandmarkRegion2D *avatarMouthRegion; // ivar: _avatarMouthRegion
@property (retain, nonatomic) UIImage *avatarSnapshot; // ivar: _avatarSnapshot
@property (retain, nonatomic) UIImageView *avatarSnapshotImageView; // ivar: _avatarSnapshotImageView
@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKPinnedConversationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (retain, nonatomic) CAFilter *dimmingFilter; // ivar: _dimmingFilter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFilteredByFocus; // ivar: _isFilteredByFocus
@property (nonatomic) BOOL isSelectedWithDarkAppearance; // ivar: _isSelectedWithDarkAppearance
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) BOOL needsUnreadIndicatorLeadingEdgePadding; // ivar: _needsUnreadIndicatorLeadingEdgePadding
@property (nonatomic) BOOL preferShortConversationName; // ivar: _preferShortConversationName
@property (retain, nonatomic) UIImageView *radiantShadowImageView; // ivar: _radiantShadowImageView
@property (copy, nonatomic) NSArray *recentMessagesInPinnedConversations; // ivar: _recentMessagesInPinnedConversations
@property (nonatomic) BOOL showsLiveActivity; // ivar: _showsLiveActivity
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity;
@property (retain, nonatomic) CKLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIImageView *unreadIndicator; // ivar: _unreadIndicator
@property (nonatomic, getter=isUnreadIndicatorHidden) BOOL unreadIndicatorHidden;


+(BOOL)_mouthRegionDetectionEnabled;
+(CGFloat)_maximumAvatarViewWidthFittingSize:(struct CGSize )arg0 ;
+(CGFloat)_preferredAvatarViewDiameterForLayoutStyle:(NSInteger)arg0 ;
+(id)_cachedMouthRegionForContact:(id)arg0 ;
+(id)_mouthRegionDetectionDispatchQueue;
+(id)_mouthRegionForContactImageCache;
+(id)_mouthRegionForContactImageCacheKeyForContact:(id)arg0 ;
+(id)_requiredContactKeys;
+(struct CGSize )avatarViewSizeFittingSize:(struct CGSize )arg0 layoutStyle:(NSInteger)arg1 ;
+(void)_determineMouthRegionForContact:(id)arg0 completion:(id)arg1 ;
+(void)_updateCachedMouthRegionIfNecessaryForContact:(id)arg0 completion:(id)arg1 ;
-(BOOL)_activityIsSuppressedForLayoutStyle:(NSInteger)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct CGPoint )_centerPointOfFaceLandmarkRegion:(id)arg0 inImageOfSize:(struct CGSize )arg1 ;
-(struct CGRect )avatarViewFrameForSize:(struct CGSize )arg0 layoutStyle:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )titleLabelSizeFittingSize:(struct CGSize )arg0 ;
-(void)_updateAvatarMouthRegion;
-(void)_updateAvatarView;
-(void)_updateRadiantShadowAffineTranform;
-(void)_updateRadiantShadowImageView;
-(void)_updateTitleLabel;
-(void)_updateTitleLabelColor;
-(void)_updateTitleLabelFont;
-(void)_updateTitleLabelWithText:(id)arg0 ;
-(void)_updateUnreadIndicator;
-(void)beginSuppressingActivityWithReason:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)configureAsPrototypeCell;
-(void)contentSizeCategoryChanged:(id)arg0 ;
-(void)didEndDisplaying;
-(void)didUpdateContentForAvatarView:(id)arg0 ;
-(void)dimAvatarView;
-(void)endSuppressingActivityWithReason:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)reapplyPreviouslyDisplayedActivitySnapshot:(id)arg0 ;
-(void)removeDimmingFilter;
-(void)updateActivityViewAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif