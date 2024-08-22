// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBKEYVIEW_H
#define UIKBKEYVIEW_H

@class NSMutableDictionary, NSString;
@protocol UIKBCacheableView;


#import "UIView.h"
#import "UIKBKeyView.h"
#import "UIKBRenderFactory.h"
#import "UIKBTree.h"
#import "UIKeyboardMenuView.h"
#import "UIKBRenderConfig.h"
#import "UIKBScreenTraits.h"

@interface UIKBKeyView : UIView <UIKBCacheableView>

 {
    *__CFBoolean m_allowsCaching;
    NSMutableDictionary *_keyLayers;
    int _renderedKeyState;
    *CGColor _activeBackgroundColor;
    id *_activeCompositingFilter;
    BOOL _singleRerender;
    CGFloat _cachedBackgroundOpacity;
}


@property (readonly, nonatomic) NSInteger assetIdiom;
@property (readonly, nonatomic) NSInteger cacheDeferPriority;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) NSUInteger cachedAnchorCorner; // ivar: _cachedAnchorCorner
@property (nonatomic) BOOL cachedControlKeyRenderingPreference; // ivar: _cachedControlKeyRenderingPreference
@property (readonly) NSInteger cachedRenderFlags;
@property (nonatomic) NSInteger cachedSelector; // ivar: _cachedSelector
@property (nonatomic) NSUInteger cachedShiftState; // ivar: _cachedShiftState
@property (retain, nonatomic) NSString *cachedTraitsHashString; // ivar: _cachedTraitsHashString
@property (readonly, nonatomic) CGFloat cachedWidth;
@property (readonly, nonatomic) UIKBKeyView *contentsKeyView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEdgeInsets displayInsets;
@property (nonatomic) CGRect drawFrame; // ivar: m_drawFrame
@property (nonatomic) CGFloat endingTransitionDuration; // ivar: _endingTransitionDuration
@property (retain, nonatomic) UIKBRenderFactory *factory; // ivar: m_factory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDynamicKey;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (readonly, nonatomic) UIKBTree *key; // ivar: m_key
@property (readonly, nonatomic) UIKBTree *keyplane; // ivar: m_keyplane
@property (weak, nonatomic) UIKeyboardMenuView *popupMenu; // ivar: _popupMenu
@property (nonatomic) BOOL renderAsMask; // ivar: _renderAsMask
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: m_renderConfig
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect variantFrame;


+(BOOL)wantsScreenTraits;
-(BOOL)_canDrawContent;
-(BOOL)_shouldUpdateLayers;
-(BOOL)_viewShouldBeOpaque;
-(BOOL)allowBackgroundCachingForRenderFlags:(NSInteger)arg0 ;
-(BOOL)hasRendered;
-(BOOL)requiresSublayers;
-(NSInteger)didInputSubTree:(id)arg0 ;
-(NSInteger)imageOrientationForLayer:(id)arg0 ;
-(NSUInteger)focusableVariantCount;
-(id)_generateBackdropMaskImage;
-(id)cacheKeysForRenderFlags:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 screenTraits:(id)arg3 ;
-(id)layerForRenderFlags:(NSInteger)arg0 ;
-(id)renderFlagsForTraits:(id)arg0 ;
-(id)subTreeHitTest:(struct CGPoint )arg0 ;
-(int)textEffectsVisibilityLevel;
-(void)_applyAppearanceInvocations;
-(void)_populateLayer:(id)arg0 withContents:(id)arg1 ;
-(void)changeBackgroundToActiveIfNecessary;
-(void)changeBackgroundToEnabled;
-(void)configureBackdropView:(id)arg0 forRenderConfig:(id)arg1 ;
-(void)dealloc;
-(void)dimKeys:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)drawContentsOfRenderers:(id)arg0 ;
-(void)hideKeyCap:(BOOL)arg0 ;
-(void)orientKeyCap:(NSInteger)arg0 ;
-(void)prepareForDisplay;
-(void)removeFromSuperview;
-(void)resetRenderedKeyState;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;
-(void)updateKeySelectedVariantIndex:(NSInteger)arg0 ;
-(void)updateKeySubtrees:(id)arg0 ;
-(void)updateKeycapLayerOrientation;
-(void)willDisplayModalActionView:(id)arg0 withSubTreeKeyView:(id)arg1 completion:(id)arg2 ;


@end


#endif