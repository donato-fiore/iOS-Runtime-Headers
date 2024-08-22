// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDSPLITTRANSITIONVIEW_H
#define UIKEYBOARDSPLITTRANSITIONVIEW_H

@class CADisplayLink, NSArray;
@protocol UIKeyboardSplitTransitionDataSource, UIKeyboardKeyplaneTransitionDelegate;


#import "UIView.h"
#import "UIKeyboardSliceSet.h"

@interface UIKeyboardSplitTransitionView : UIView {
    CGFloat _currentProgress;
    CGFloat _liftOffProgress;
    CGFloat _finishProgress;
    CGFloat _finishDuration;
    CGFloat _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    CGRect _startFrame;
    CGRect _endFrame;
    BOOL _centerFilled;
    BOOL _isRebuilding;
    BOOL _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}


@property (readonly) NSArray *backgroundLayers;
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly) NSArray *shadowLayers;
@property (nonatomic) NSObject<UIKeyboardSplitTransitionDataSource> *splitTransitionDataSource; // ivar: _transitionDataSource
@property (nonatomic) NSObject<UIKeyboardKeyplaneTransitionDelegate> *splitTransitionDelegate; // ivar: _transitionDelegate


-(BOOL)canDisplayTransition;
-(BOOL)shouldAllowRubberiness;
-(BOOL)showDictationKey;
-(BOOL)showIntlKey;
-(BOOL)transitionIsVisible;
-(id)bottomDropShadow;
-(id)centerDropShadow;
-(id)colorsForBackgroundLayer:(int)arg0 ;
-(id)outerCenterDropShadow;
-(id)topDropShadow;
-(struct CGImage *)defaultKeyboardImage;
-(struct CGImage *)keyImageWithToken:(id)arg0 ;
-(struct CGImage *)splitKeyboardImage;
-(struct CGRect )rectEnclosingKeyplane:(id)arg0 ;
-(struct CGSize )sizeForShadowLayer:(int)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)finalizeTransition;
-(void)finishWithProgress:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(void)initializeLayers;
-(void)rebuildControlKeys:(NSUInteger)arg0 ;
-(void)rebuildFromKeyplane:(id)arg0 toKeyplane:(id)arg1 startToken:(id)arg2 endToken:(id)arg3 keyboardType:(NSInteger)arg4 orientation:(NSInteger)arg5 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)transformForProgress:(CGFloat)arg0 ;
-(void)transitionToFinalState:(id)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif