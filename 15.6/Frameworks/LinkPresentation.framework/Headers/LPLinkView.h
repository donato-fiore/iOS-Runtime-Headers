// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPLINKVIEW_H
#define LPLINKVIEW_H

@class UIView, NSHashTable, NSArray, NSMutableArray, NSString, UIColor, UIContextMenuInteraction, NSURL, NSRegularExpression;
@protocol UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, LPComponentViewHost, LPTapToLoadViewDelegate, LPThemeClient, LPLinkViewDelegate;


#import "LPLinkMetadata.h"
#import "LPTheme.h"
#import "LPCaptionBarPresentationProperties.h"
#import "LPCaptionButtonPresentationProperties.h"
#import "LPImage.h"
#import "LPImagePresentationProperties.h"
#import "LPARAsset.h"
#import "LPVideo.h"
#import "LPInlineMediaPlaybackInformation.h"
#import "LPLinkViewComponents.h"
#import "LPAnimationMaskView.h"

@interface LPLinkView : UIView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, LPComponentViewHost, LPTapToLoadViewDelegate, LPThemeClient>

 {
    unsigned int _loggingID;
    NSHashTable *_pendingMetadataProviders;
    LPLinkMetadata *_metadata;
    NSArray *_multipleMetadata;
    NSArray *_multipleURLs;
    LPTheme *_theme;
    BOOL _hasOverrideCornerRadius;
    CGFloat _overrideCornerRadius;
    NSMutableArray *_tapGestureRecognizers;
    NSMutableArray *_highlightGestureRecognizers;
    UIView *_captionHighlightView;
    UIView *_mediaHighlightView;
    BOOL _isPreliminary;
    NSInteger _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    LPCaptionButtonPresentationProperties *_captionButton;
    LPImage *_backgroundImage;
    LPImagePresentationProperties *_backgroundImageProperties;
    NSString *_quotedText;
    LPARAsset *_arAsset;
    LPImagePresentationProperties *_arAssetProperties;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    UIColor *_backgroundColor;
    UIColor *_presentationOverrideBackgroundColor;
    BOOL _backgroundColorIsClear;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    CGFloat _minimumHeight;
    NSString *_domainNameForIndicator;
    LPLinkViewComponents *_components;
    LPLinkViewComponents *_componentsForSizing;
    UIView *_contentView;
    UIView *_animationView;
    NSUInteger _effectiveSizeClass;
    LPAnimationMaskView *_animationMaskView;
    UIContextMenuInteraction *_contextMenuInteraction;
    BOOL _hasEverBuilt;
    BOOL _needsRebuild;
    BOOL _shouldAnimateDuringNextBuild;
    BOOL _hasValidPresentationProperties;
    BOOL _hasSetDisableHighlightGesture;
    BOOL _hasSetDisablePreviewGesture;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    BOOL _asynchronouslyLoadingMetadataFields;
    BOOL _metadataIsComplete;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic, setter=_setAllowsLoadingMediaWithAutoPlayDisabled:) BOOL _allowsLoadingMediaWithAutoPlayDisabled; // ivar: _allowsLoadingMediaWithAutoPlayDisabled
@property (nonatomic, setter=_setAllowsOpeningSensitiveURLs:) BOOL _allowsOpeningSensitiveURLs; // ivar: _allowsOpeningSensitiveURLs
@property (nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad; // ivar: _allowsTapToLoad
@property (nonatomic, setter=_setAnimationOrigin:) NSInteger _animationOrigin; // ivar: _animationOrigin
@property (nonatomic, setter=_setApplyCornerRadius:) BOOL _applyCornerRadius; // ivar: _applyCornerRadius
@property (retain, nonatomic, setter=_setContactsForAttribution:) NSArray *_contactsForAttribution; // ivar: _contactsForAttribution
@property (readonly, nonatomic) NSObject<UIContextMenuInteractionDelegate> *_contextMenuInteractionDelegate;
@property (nonatomic, setter=_setCornerRadius:) CGFloat _cornerRadius;
@property (nonatomic, setter=_setDisableAnimations:) BOOL _disableAnimations; // ivar: _disableAnimations
@property (nonatomic, setter=_setDisableAutoPlay:) BOOL _disableAutoPlay; // ivar: _disableAutoPlay
@property (nonatomic, setter=_setDisableHighlightGesture:) BOOL _disableHighlightGesture; // ivar: _disableHighlightGesture
@property (nonatomic, setter=_setDisableLinkFollowing:) BOOL _disableLinkFollowing; // ivar: __disableLinkFollowing
@property (nonatomic, setter=_setDisablePlayback:) BOOL _disablePlayback; // ivar: _disablePlayback
@property (nonatomic, setter=_setDisablePlaybackControls:) BOOL _disablePlaybackControls; // ivar: _disablePlaybackControls
@property (nonatomic, setter=_setDisablePreviewGesture:) BOOL _disablePreviewGesture; // ivar: _disablePreviewGesture
@property (nonatomic, setter=_setDisableTapGesture:) BOOL _disableTapGesture; // ivar: _disableTapGesture
@property (copy, nonatomic, setter=_setEmphasizedTextExpression:) NSRegularExpression *_emphasizedTextExpression; // ivar: _emphasizedTextExpression
@property (nonatomic, setter=_setForceFlexibleWidth:) BOOL _forceFlexibleWidth; // ivar: _forceFlexibleWidth
@property (nonatomic, getter=_isHighlightedForAttribution, setter=_setHighlightedForAttribution:) BOOL _highlightedForAttribution; // ivar: _highlightedForAttribution
@property (nonatomic, setter=_setInComposeContext:) BOOL _inComposeContext; // ivar: _inComposeContext
@property (retain, nonatomic, setter=_setLastResortIcon:) LPImage *_lastResortIcon; // ivar: _lastResortIcon
@property (nonatomic, setter=_setNeedsMessagesTranscriptPushCounterAnimation:) BOOL _needsMessagesTranscriptPushCounterAnimation; // ivar: _needsMessagesTranscriptPushCounterAnimation
@property (retain, nonatomic, setter=_setOverrideActionButtonColor:) UIColor *_overrideActionButtonColor; // ivar: _overrideActionButtonColor
@property (retain, nonatomic, setter=_setOverrideBackgroundColor:) UIColor *_overrideBackgroundColor; // ivar: _overrideBackgroundColor
@property (retain, nonatomic, setter=_setOverrideURL:) NSURL *_overrideURL; // ivar: _overrideURL
@property (nonatomic, setter=_setPreferredSizeClass:) NSUInteger _preferredSizeClass; // ivar: _preferredSizeClass
@property (readonly, nonatomic) CGRect _primaryCaptionBarFrame;
@property (retain, nonatomic, setter=_setSourceBundleIdentifier:) NSString *_sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (nonatomic, setter=_setStrictlyRespectsSizeClassHeightConstraints:) BOOL _strictlyRespectsSizeClassHeightConstraints;
@property (readonly, nonatomic) NSInteger _style;
@property (nonatomic, setter=_setTextSafeAreaInset:) UIEdgeInsets _textSafeAreaInset; // ivar: _textSafeAreaInset
@property (nonatomic, setter=_setUseLowMemoryImageFilters:) BOOL _useLowMemoryImageFilters; // ivar: __useLowMemoryImageFilters
@property (nonatomic, setter=_setUsesDeferredLayout:) BOOL _usesDeferredLayout; // ivar: _usesDeferredLayout
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LPLinkViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly) Class superclass;


-(BOOL)_hasMediaToPlay;
-(BOOL)_isPlayingMedia;
-(BOOL)_isUsingAppClipPresentation;
-(BOOL)_shouldApplyCornerRadius;
-(BOOL)_shouldClipAnimationView;
-(BOOL)_shouldUseAnimations;
-(BOOL)allowsBadgingIconEdgeForComponentView:(id)arg0 ;
-(BOOL)allowsVibrancyForComponentView:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(NSInteger)componentView:(id)arg0 allowedImageFilterForFilter:(NSInteger)arg1 ;
-(NSInteger)rendererStyleForComponentView:(id)arg0 ;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToDescendants;
-(id)_createBackgroundImageView;
-(id)_createCaptionBar;
-(id)_createComponents;
-(id)_createContactsBadgeView;
-(id)_createDomainNameIndicator;
-(id)_createMediaBottomCaptionBarView;
-(id)_createMediaTopCaptionBarView;
-(id)_createMediaView;
-(id)_createQuotedTextView;
-(id)_createTapToLoadView;
-(id)_fetchMetadataForRequest:(id)arg0 withSubresources:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)_initWithMetadataLoadedFromRequests:(id)arg0 ;
-(id)_initWithMetadataLoadedFromURLs:(id)arg0 ;
-(id)_initWithMultipleMetadata:(id)arg0 ;
-(id)_initWithSynapseContentItem:(id)arg0 ;
-(id)_playable;
-(id)_primaryMediaView;
-(id)_videoViewConfiguration;
-(id)componentView:(id)arg0 playerForAudio:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithMetadataLoadedFromRequest:(id)arg0 ;
-(id)initWithMetadataLoadedFromURL:(id)arg0 ;
-(id)initWithPresentationProperties:(id)arg0 ;
-(id)initWithPresentationProperties:(id)arg0 URL:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)layoutExclusionsForView:(id)arg0 ;
-(struct CGSize )_layoutLinkViewForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addHighlightRecognizerToView:(id)arg0 forMedia:(BOOL)arg1 ;
-(void)_addTapRecognizerToView:(id)arg0 forMedia:(BOOL)arg1 ;
-(void)_animateWithDuration:(CGFloat)arg0 animations:(id)arg1 ;
-(void)_cancelActiveHighlight;
-(void)_captionBarButtonPressed:(id)arg0 ;
-(void)_captionHighlightRecognized:(id)arg0 ;
-(void)_captionTapRecognized:(id)arg0 ;
-(void)_commonInitWithURL:(id)arg0 ;
-(void)_computePresentationPropertiesFromMetadataIfNeeded;
-(void)_configureWithoutLoadingMetadataFromURLs:(id)arg0 ;
-(void)_didScroll;
-(void)_fetchMetadataForRequest:(id)arg0 ;
-(void)_installHighlightGestureRecognizers;
-(void)_installPreviewGestureRecognizer;
-(void)_installTapGestureRecognizers;
-(void)_invalidateLayout;
-(void)_invalidatePresentationProperties;
-(void)_layoutLinkView;
-(void)_mediaHighlightRecognized:(id)arg0 ;
-(void)_mediaTapRecognized:(id)arg0 ;
-(void)_openURLAllowingSensitiveSchemes:(BOOL)arg0 allowingAssociatedApplications:(BOOL)arg1 ;
-(void)_pauseMedia;
-(void)_playMedia;
-(void)_rebuildGestureRecognizersIfNeeded;
-(void)_rebuildSubviewsWithAnimation:(BOOL)arg0 ;
-(void)_resetMediaPlayback;
// -(void)_setAction:(id)arg0 withAttributedText:(unk)arg1 buttonType:(id)arg2  ;
// -(void)_setAction:(id)arg0 withText:(unk)arg1  ;
// -(void)_setAction:(id)arg0 withText:(unk)arg1 buttonType:(id)arg2  ;
-(void)_setHighlightCaption:(BOOL)arg0 ;
-(void)_setHighlightMedia:(BOOL)arg0 ;
-(void)_setMaskImage:(id)arg0 ;
-(void)_setMultipleMetadata:(id)arg0 ;
-(void)_setPresentationProperties:(id)arg0 ;
-(void)_setupView;
-(void)_uninstallHighlightGestureRecognizers;
-(void)_uninstallPreviewGestureRecognizer;
-(void)_uninstallTapGestureRecognizers;
-(void)_updateMetadataIsComplete;
-(void)animateBackgroundColor;
-(void)animateFromOldFrame:(struct CGRect )arg0 oldMediaBackgroundFrame:(struct CGRect )arg1 oldCaptionBarView:(id)arg2 ;
-(void)animateInViews;
-(void)animateOutAndRemoveViews;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)componentViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)componentViewDidChangeMediaState:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSuppressMask:(BOOL)arg0 ;
-(void)set_preferredSizeClass:(NSUInteger)arg0 ;
-(void)tapToLoadViewWasTapped:(id)arg0 ;
-(void)themeParametersDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif