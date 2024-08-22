// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIHORIZONTALLOCKUPVIEW_H
#define SKUIHORIZONTALLOCKUPVIEW_H

@class NSHashTable, NSMapTable, SUPlayerStatus, UITapGestureRecognizer, NSMutableArray, NSString, UIColor, UIView;
@protocol SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIMediaPlayerObserver, SKUIToggleButtonDelegate, UIGestureRecognizerDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIBadgeViewElement.h"
#import "SKUIHorizontalLockupLayout.h"
#import "SKUILockupViewElement.h"
#import "SKUIGradientView.h"
#import "SKUIPlayButton.h"
#import "SKUIPreviewProgressIndicator.h"

@interface SKUIHorizontalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIMediaPlayerObserver, SKUIToggleButtonDelegate, UIGestureRecognizerDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIViewElementView>

 {
    NSHashTable *_artworkRelatedChildViewElementViews;
    SKUIBadgeViewElement *_badge;
    NSMapTable *_buyButtonDescriptorToButton;
    UIEdgeInsets _contentInset;
    NSMapTable *_cacheKeyToImageView;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIHorizontalLockupLayout *_layout;
    SKUILockupViewElement *_lockupElement;
    SKUIGradientView *_offerConfirmationGradientView;
    NSHashTable *_offerViews;
    SKUIPlayButton *_playButton;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    NSInteger _previewState;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_tappableViews;
    BOOL _useClearBackground;
    NSMapTable *_viewElementViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *gradientColor; // ivar: _gradientColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *metadataBackgroundView; // ivar: _metadataBackgroundView
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateLayoutOnButtonConfirmation; // ivar: _updateLayoutOnButtonConfirmation


+(BOOL)_usesEditorialLayoutForLabelViewElement:(id)arg0 ;
+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForOrdinal:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)_requestLayoutForViewElements:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)_usesBackgroundWithAlpha;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)offerViewAnimateTransition:(id)arg0 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_dividerHeight:(id)arg0 ;
-(id)_addFlipContainerViewWithFrontView:(id)arg0 backView:(id)arg1 ;
-(id)_columnForView:(id)arg0 ;
-(id)_previewFrontView;
-(id)_previewMediaURL;
-(id)_previewProgressIndicator;
-(id)_viewElementForView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredBackgroundColor;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )_sizeViewsForColumn:(id)arg0 toFitWidth:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addConfirmationGradientForView:(id)arg0 ;
-(void)_animateButton:(id)arg0 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_expandEditorialForLabel:(id)arg0 ;
-(void)_handlePlayButtonTap:(id)arg0 element:(id)arg1 ;
-(void)_layoutConfirmationGradientRelativeToItemOfferView:(id)arg0 alpha:(CGFloat)arg1 ;
-(void)_performDefaultActionForImage:(id)arg0 ;
-(void)_previewIndicatorAction:(id)arg0 ;
-(void)_resizeMetadataRelativeToItemOfferView:(id)arg0 ;
-(void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)_tapGestureAction:(id)arg0 ;
-(void)dealloc;
-(void)hidePreviewProgressAnimated:(BOOL)arg0 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)mediaPlayer:(id)arg0 itemStateChanged:(id)arg1 ;
-(void)offerViewDidAnimateTransition:(id)arg0 ;
-(void)offerViewWillAnimateTransition:(id)arg0 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContainerBackgroundImageForPlayButton:(id)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)showPreviewProgressWithStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)toggleButtonDidAnimateTransition:(id)arg0 ;
-(void)toggleButtonWillAnimateTransition:(id)arg0 ;
-(void)togglePreviewPlaybackAnimated:(BOOL)arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif