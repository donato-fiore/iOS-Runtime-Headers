// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBKEYPLANEVIEW_H
#define UIKBKEYPLANEVIEW_H

@class NSMutableDictionary, NSString;
@protocol UIKBCacheableView, UIKBKeyplaneViewDelegate;


#import "UIKBSplitImageView.h"
#import "UIKBKeyView.h"
#import "UIKBCacheToken.h"
#import "UIKBTree.h"
#import "UIKeyboardEmojiKeyDisplayController.h"
#import "UIKBRenderFactory.h"
#import "UIKBKeyViewAnimator.h"
#import "UIView.h"
#import "UIKBScreenTraits.h"
#import "UIKBRenderConfig.h"
#import "UIKBRenderingContext.h"

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView>

 {
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    BOOL _shouldDrawRect;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyCaps;
}


@property (readonly, nonatomic) NSInteger assetIdiom;
@property (readonly, nonatomic) NSInteger cacheDeferPriority;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) UIKBCacheToken *cacheToken; // ivar: _cacheToken
@property (readonly, nonatomic) CGFloat cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIKBTree *defaultKeyplane; // ivar: _defaultKeyplane
@property (retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken; // ivar: _defaultKeyplaneCacheToken
@property (nonatomic) NSObject<UIKBKeyplaneViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // ivar: _emojiKeyManager
@property (retain, nonatomic) UIKBRenderFactory *factory; // ivar: _factory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // ivar: _keyViewAnimator
@property (retain, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (readonly, nonatomic) UIView *keyplaneMaskView; // ivar: _keyplaneMaskView
@property (retain, nonatomic) UIKBScreenTraits *overrideScreenTraits; // ivar: _overrideScreenTraits
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) UIKBRenderingContext *renderingContext; // ivar: _renderingContext
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressDrawing; // ivar: _suppressDrawing


-(BOOL)_canDrawContent;
-(BOOL)_shouldAllowKey:(id)arg0 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(BOOL)isPasscodeStyle;
-(BOOL)shouldAnimateInKeyView:(id)arg0 ;
-(BOOL)shouldAnimateOutKeyView:(id)arg0 ;
-(BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(NSInteger)arg0 ;
-(BOOL)validForKeyplane:(id)arg0 withVisualStyle:(int)arg1 ;
-(NSUInteger)cornerMaskForKey:(id)arg0 recursive:(BOOL)arg1 ;
-(id)_existingVariantsKeyViewForKey:(id)arg0 ;
-(id)activeKeyViews;
-(id)cacheIdentifierForKey:(id)arg0 ;
-(id)cacheIdentifierForKey:(id)arg0 withState:(int)arg1 ;
-(id)cacheKeysForRenderFlags:(id)arg0 ;
-(id)containingViewForKey:(id)arg0 withState:(int)arg1 wantsActiveOut:(*BOOL)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 ;
-(id)viewForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 state:(int)arg1 ;
-(int)stateForKey:(id)arg0 ;
-(struct CGRect )_safeFrameForKeyViewFrame:(struct CGRect )arg0 inContainer:(id)arg1 forKey:(id)arg2 ;
-(void)_generateFactoryIfNeeded;
-(void)_generateRenderingContextIfNeeded;
-(void)_updateKeyplaneMaskView;
-(void)activateKeys;
-(void)addKeyToDelayedDeactivationSet:(id)arg0 ;
-(void)cancelDelayedDeactivation;
-(void)deactivateAdaptiveKey:(id)arg0 ;
-(void)deactivateKey:(id)arg0 previousState:(int)arg1 ;
-(void)deactivateKeys;
-(void)dealloc;
-(void)dimKeys:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)drawContentsOfRenderers:(id)arg0 ;
-(void)hideKeyCaps:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)purgeActiveKeyViews;
-(void)purgeFactory;
-(void)purgeKeyViews;
-(void)purgeLayerContents;
-(void)purgeSubviews;
-(void)removeFromSuperview;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg0 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)setContentScaleFactor:(CGFloat)arg0 ;
-(void)setState:(int)arg0 forKey:(id)arg1 ;
-(void)updateFrameForKey:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif