// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSCROLLVIEWCONTROLLER_H
#define CKSCROLLVIEWCONTROLLER_H

@class UIScrollView, IMScheduledUpdater;


#import "CKViewController.h"

@interface CKScrollViewController : CKViewController

@property (readonly, nonatomic) CGFloat bottomInsetPadding; // ivar: _bottomInsetPadding
@property (nonatomic) CGFloat contentPinningThreshold; // ivar: _contentPinningThreshold
@property (readonly, nonatomic) CGSize contentSizeForPinning; // ivar: _contentSizeForPinning
@property (nonatomic) BOOL enableContentPinning; // ivar: _enableContentPinning
@property (readonly, nonatomic) CGRect keyboardFrame;
@property (readonly, nonatomic) CGRect keyboardFrameInViewCoordinates;
@property (nonatomic) BOOL keyboardInteractionCancelled; // ivar: _keyboardInteractionCancelled
@property (readonly, nonatomic, getter=isKeyboardOnscreenWithoutAccessoryView) BOOL keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) CGRect keyboardScreenFrame; // ivar: _keyboardScreenFrame
@property (readonly, nonatomic, getter=isKeyboardUndocked) BOOL keyboardUndocked;
@property (nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible; // ivar: _keyboardVisible
@property (readonly, nonatomic) CGFloat minimumBottomInset; // ivar: _minimumBottomInset
@property (copy, nonatomic) id *overrideScrollBlock; // ivar: _overrideScrollBlock
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) BOOL topInsetIncludesPalette; // ivar: _topInsetIncludesPalette
@property (readonly, nonatomic) CGFloat topInsetPadding; // ivar: _topInsetPadding
@property (retain, nonatomic) IMScheduledUpdater *updater; // ivar: _updater


-(BOOL)isHoldingScrollGeometryUpdates;
-(BOOL)isKeyboardFloating;
-(BOOL)manuallyUpdateKeyboardScreenFrameWithFrameIfNeeded:(struct CGRect )arg0 animationDuration:(CGFloat)arg1 ;
-(CGFloat)_bottomRotatingFooterHeight;
-(CGFloat)_visibleKeyboardHeight;
-(CGFloat)accessoryViewHeight;
-(CGFloat)bottomInsetWithoutAccessoryView;
-(CGFloat)visibleHeightAboveKeyboard;
-(id)init;
-(struct CGRect )inputAccessoryViewFrameForFloatingKeyboard;
-(struct UIEdgeInsets )bannerInsets;
-(struct UIEdgeInsets )macToolbarInsets;
-(struct UIEdgeInsets )navigationBarInsets;
-(struct UIEdgeInsets )navigationBarInsetsWithoutPalette;
-(void)_changedStatusBarFrame:(id)arg0 ;
-(void)_entryViewWillRotate:(id)arg0 ;
-(void)_updateKeyboardScreenFrameForShowOrHideWithNewScreenFrame:(struct CGRect )arg0 previousFrame:(struct CGRect )arg1 duration:(CGFloat)arg2 isShowEvent:(BOOL)arg3 ;
-(void)_updateScrollGeometryWithDuration:(CGFloat)arg0 ;
-(void)beginHoldingScrollGeometryUpdatesForKey:(id)arg0 ;
-(void)contentInsetDidChange;
-(void)contentInsetWillChange:(struct UIEdgeInsets )arg0 animated:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)dealloc;
-(void)endHoldingScrollGeometryUpdatesForAllKeys;
-(void)endHoldingScrollGeometryUpdatesForKey:(id)arg0 ;
-(void)inputAccessoryViewFrameUpdatedForFloatingKeyboard;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)keyboardDidShowOrHide:(id)arg0 ;
-(void)keyboardVisibilityWillChange;
-(void)keyboardWillHideViaGesture;
-(void)keyboardWillShowOrHide:(id)arg0 ;
-(void)primeWithKeyboardFrame:(struct CGRect )arg0 ;
-(void)updateScrollGeometry;


@end


#endif