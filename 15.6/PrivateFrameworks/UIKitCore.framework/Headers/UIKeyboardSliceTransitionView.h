// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDSLICETRANSITIONVIEW_H
#define UIKEYBOARDSLICETRANSITIONVIEW_H

@class CALayer, NSMutableDictionary;


#import "UIKeyboardSplitTransitionView.h"
#import "UIKBCacheToken.h"

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView {
    *CGImage _defaultKeyplaneImage;
    *CGImage _splitKeyplaneImage;
    CALayer *_leftKeys;
    CALayer *_rightKeys;
    CALayer *_spaceFill;
    NSMutableDictionary *_controlKeys;
    CALayer *_topEdgeHighlight;
    UIKBCacheToken *_keyplaneToken;
    NSInteger _orientation;
    ? _rebuildFlags;
}




-(BOOL)canDisplayTransition;
-(CGFloat)adjustedLeftWidthAtMergePoint;
-(CGFloat)adjustedRightWidthAtMergePoint;
-(id)crossfadeOpacityAnimation;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)meshTransformForProgress:(CGFloat)arg0 ;
-(struct CGImage *)defaultKeyboardImage;
-(struct CGImage *)getKeyboardImageAsSplit:(BOOL)arg0 ;
-(struct CGImage *)splitKeyboardImage;
-(void)_delayedUpdateTransition;
-(void)dealloc;
-(void)initializeLayers;
-(void)rebuildBackgroundAndShadowTransitions;
-(void)rebuildBackgroundGradientTransitions;
-(void)rebuildControlKeys:(NSUInteger)arg0 ;
-(void)rebuildFromKeyplane:(id)arg0 toKeyplane:(id)arg1 startToken:(id)arg2 endToken:(id)arg3 keyboardType:(NSInteger)arg4 orientation:(NSInteger)arg5 ;
-(void)rebuildMoreIntlKeys;
-(void)rebuildReturnSlices;
-(void)rebuildShadows;
-(void)rebuildShiftSlices;
-(void)rebuildSliceTransitions;
-(void)rebuildTopEdgeHighlightTransition;
-(void)rebuildTransitionForSplitStyleChange:(id)arg0 ;
-(void)refreshKeyplaneImages;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRebuildFlags;
-(void)transformForProgress:(CGFloat)arg0 ;
-(void)updateTransition;
-(void)updateTransitionForSlice:(id)arg0 withStart:(id)arg1 startContents:(id)arg2 end:(id)arg3 endContents:(id)arg4 updateContents:(BOOL)arg5 ;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif