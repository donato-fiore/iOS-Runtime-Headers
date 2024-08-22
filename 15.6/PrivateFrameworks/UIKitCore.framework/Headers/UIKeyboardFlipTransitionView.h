// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDFLIPTRANSITIONVIEW_H
#define UIKEYBOARDFLIPTRANSITIONVIEW_H

@class CALayer, NSMutableDictionary;


#import "UIKeyboardSplitTransitionView.h"
#import "UIKBCacheToken.h"

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    ? _rebuildFlags;
}


@property (nonatomic, getter=isShowingFrontFace) BOOL showingFrontFace; // ivar: _showingFrontFace


-(BOOL)transitionIsVisible;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGImage *)defaultKeyboardImage;
-(struct CGImage *)splitKeyboardImage;
-(void)_delayedUpdateTransition;
-(void)_flipToFront:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)rebuildBackgroundTransition;
-(void)rebuildControlKeys:(NSUInteger)arg0 ;
-(void)rebuildControlSlicesForKeyName:(id)arg0 ;
-(void)rebuildFromKeyplane:(id)arg0 toKeyplane:(id)arg1 startToken:(id)arg2 endToken:(id)arg3 keyboardType:(NSInteger)arg4 orientation:(NSInteger)arg5 ;
-(void)rebuildMoreIntlKeys;
-(void)rebuildReturnSlices;
-(void)rebuildShiftSlices;
-(void)rebuildTransition;
-(void)rebuildTransitionForSplitStyleChange:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateMoreIntlKey:(id)arg0 asStart:(BOOL)arg1 withRect:(struct CGRect )arg2 showIntl:(BOOL)arg3 showDictKey:(BOOL)arg4 ;
-(void)updateTransition;


@end


#endif