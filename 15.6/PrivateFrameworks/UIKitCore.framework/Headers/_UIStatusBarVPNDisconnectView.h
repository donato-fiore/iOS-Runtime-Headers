// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVPNDISCONNECTVIEW_H
#define _UISTATUSBARVPNDISCONNECTVIEW_H

@class NSString, CAShapeLayer;
@protocol CAAnimationDelegate, _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "_UIStatusBarImageView.h"

@interface _UIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAShapeLayer *iconSlashMaskShapeLayer; // ivar: _iconSlashMaskShapeLayer
@property (retain, nonatomic) _UIStatusBarImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (retain, nonatomic) CAShapeLayer *slashShapeLayer; // ivar: _slashShapeLayer
@property (retain, nonatomic) UIView *slashView; // ivar: _slashView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_setupForStyleAttributes:(id)arg0 ;
-(void)animateSlashForUpdate:(id)arg0 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)resetSlashForUpdate:(id)arg0 ;
-(void)updateFramesForStyleAttributes:(id)arg0 ;


@end


#endif