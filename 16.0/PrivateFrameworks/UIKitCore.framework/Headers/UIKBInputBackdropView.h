// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBINPUTBACKDROPVIEW_H
#define UIKBINPUTBACKDROPVIEW_H

@class NSArray, NSLayoutConstraint;


#import "UIView.h"
#import "_UIVisualEffectBackdropView.h"
#import "UIKBBackdropView.h"

@interface UIKBInputBackdropView : UIView {
    NSUInteger _innerCorners;
    BOOL _isTransitioning;
    CGFloat _transitionGap;
    CGFloat _transitionLeftOffset;
    CGFloat _transitionRightOffset;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    CGRect _savedStartRect;
    CGRect _savedEndRect;
}


@property (retain, nonatomic) _UIVisualEffectBackdropView *captureView; // ivar: _captureView
@property (retain, nonatomic) NSArray *fullWidthConstraints; // ivar: _fullWidthConstraints
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) CGFloat heightDiff; // ivar: _heightDiff
@property (retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // ivar: _inputBackdropFullView
@property (retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // ivar: _inputBackdropLeftView
@property (retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // ivar: _inputBackdropRightView
@property (retain, nonatomic) NSLayoutConstraint *leftWidthConstraint; // ivar: _leftWidthConstraint
@property (nonatomic) CGFloat leftWidthDiff; // ivar: _leftWidthDiff
@property (retain, nonatomic) NSLayoutConstraint *rightWidthConstraint; // ivar: _rightWidthConstraint
@property (nonatomic) CGFloat rightWidthDiff; // ivar: _rightWidthDiff
@property (retain, nonatomic) NSArray *splitConstraints; // ivar: _splitConstraints
@property (readonly) NSInteger style; // ivar: _style
@property (nonatomic) CGFloat tallHeight; // ivar: _tallHeight


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_isTransitioning;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)textEffectsVisibilityLevel;
-(void)_beginSplitTransitionIfNeeded:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg0 ;
-(void)_prepareWithLeftOffset:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_setInitialProgressWithFrame:(struct CGRect )arg0 ;
-(void)_setProgress:(CGFloat)arg0 withFrame:(struct CGRect )arg1 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_updateForLeftOffset:(CGFloat)arg0 rightOffset:(CGFloat)arg1 ;
-(void)createSplitBackdropIfNeeded;
-(void)dealloc;
-(void)layoutInputBackdropToFullWithRect:(struct CGRect )arg0 ;
-(void)layoutInputBackdropToSplitWithHeight:(CGFloat)arg0 innerCorners:(NSUInteger)arg1 ;
-(void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect )arg0 andRightViewRect:(struct CGRect )arg1 innerCorners:(NSUInteger)arg2 ;
-(void)prepareForSnapshotting;
-(void)restoreFromSnapshotting;
-(void)setGestureProgressForSplit:(CGFloat)arg0 ;
-(void)setProgress:(CGFloat)arg0 withFrame:(struct CGRect )arg1 innerCorners:(NSUInteger)arg2 ;
-(void)transitionToStyle:(NSInteger)arg0 isSplit:(BOOL)arg1 ;


@end


#endif