// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIPOPOVERSHAPELAYERVIEW_H
#define AMSUIPOPOVERSHAPELAYERVIEW_H

@class UIView;


#import "AMSUIPopoverShapeLayerMaskView.h"

@interface AMSUIPopoverShapeLayerView : UIView

@property NSUInteger arrowDirection; // ivar: _arrowDirection
@property BOOL arrowDirectionWasFlipped; // ivar: _arrowDirectionWasFlipped
@property (readonly) CGFloat arrowHeight;
@property CGFloat arrowOffset; // ivar: _arrowOffset
@property BOOL arrowOffsetWasFlipped; // ivar: _arrowOffsetWasFlipped
@property BOOL arrowVisible; // ivar: _arrowVisible
@property BOOL popoverBackgroundColorIsOpaque; // ivar: _popoverBackgroundColorIsOpaque
@property (retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView; // ivar: _shapeLayerMaskView
@property BOOL shapeLayerPathNeedsUpdate; // ivar: _shapeLayerPathNeedsUpdate
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow; // ivar: _viewToMaskWhenContentExtendsOverArrow


+(CGFloat)arrowBase;
+(CGFloat)cornerRadius;
-(BOOL)wouldPinForOffset:(CGFloat)arg0 ;
-(CGFloat)_leftAndRightStartYLocationForBounds:(struct CGRect )arg0 ;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(CGFloat)_upAndDownStartingXLocationForBounds:(struct CGRect )arg0 ;
-(CGFloat)maxNonPinnedOffset;
-(CGFloat)minNonPinnedOffset;
-(id)_shadowPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_shadowOffset;
-(struct UIEdgeInsets )_shadowInsets;
-(void)_addLeadingPinnedCurveToPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 ;
-(void)_addLeadingPinnedCurveToPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 ;
-(void)_addLeftRightArrowCurveForPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_addLeftRightRoundedRectWithGapForPath:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)_addRoundedRectExcludingTopLeftCornerForPath:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)_addTopBottomArrowCurveForPath:(id)arg0 bounds:(struct CGRect )arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 peakPoint:(struct CGPoint )arg4 isPinned:(BOOL)arg5 ;
-(void)_addTopBottomRoundedRectWithGapForPath:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)_loadNecessaryViews;
-(void)_updatePathAnimationState;
-(void)_updateShapeLayerPath;
-(void)_updateShapeLayerPathIfNeeded;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setNeedsLayout;


@end


#endif