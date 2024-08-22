// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARCELLULARNETWORKTYPEVIEW_H
#define _UISTATUSBARCELLULARNETWORKTYPEVIEW_H

@class NSString;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "UIVectorLabel.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarCellularNetworkTypeView : UIView <_UIStatusBarDisplayable>

 {
    BOOL _animatingUpdate;
}


@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain) UIVectorLabel *accessoryLabel; // ivar: _accessoryLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (retain, nonatomic) UIVectorLabel *prefixLabel; // ivar: _prefixLabel
@property (retain, nonatomic) _UIStatusBarStringView *stringView; // ivar: _stringView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(void)_animateUpdateToText:(id)arg0 prefixLength:(NSInteger)arg1 styleAttributes:(id)arg2 attributedText:(id)arg3 type:(NSInteger)arg4 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)setAttributedText:(id)arg0 prefixLength:(NSInteger)arg1 forType:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)setText:(id)arg0 prefixLength:(NSInteger)arg1 withStyleAttributes:(id)arg2 forType:(NSInteger)arg3 animated:(BOOL)arg4 ;


@end


#endif