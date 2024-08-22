// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDISPLAYABLECONTAINERVIEW_H
#define _UISTATUSBARDISPLAYABLECONTAINERVIEW_H

@class NSString;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"

@interface _UIStatusBarDisplayableContainerView : UIView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (weak, nonatomic) UIView *subviewForBaselineAlignment; // ivar: _subviewForBaselineAlignment
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)viewForLastBaselineLayout;
-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif