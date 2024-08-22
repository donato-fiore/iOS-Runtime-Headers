// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDUALCELLULARSIGNALVIEW_H
#define _UISTATUSBARDUALCELLULARSIGNALVIEW_H

@class NSString, NSLayoutConstraint;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "_UIStatusBarCellularSignalView.h"

@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (readonly) _UIStatusBarCellularSignalView *bottomSignalView; // ivar: _bottomSignalView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (nonatomic) BOOL rounded; // ivar: _rounded
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (readonly) _UIStatusBarCellularSignalView *topSignalView; // ivar: _topSignalView
@property (retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint; // ivar: _verticalInterspaceConstraint
@property (readonly, nonatomic) BOOL wantsCrossfade;


+(CGFloat)_interspaceForIconSize:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif