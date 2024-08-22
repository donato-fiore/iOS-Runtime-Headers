// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEXPANDINGGLYPHSVIEW_H
#define _UIEXPANDINGGLYPHSVIEW_H

@class NSAttributedString, NSString, NSArray;
@protocol _UIStatusBarDisplayable, CAAnimationDelegate;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expandsFromLeftToRight; // ivar: _expandsFromLeftToRight
@property (nonatomic) BOOL fadesOut; // ivar: _fadesOut
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *imageViews; // ivar: _imageViews
@property (nonatomic) CGSize intrinsicSize; // ivar: _intrinsicSize
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (nonatomic) int remainingAnimationCount; // ivar: _remainingAnimationCount
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateCompletionBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif