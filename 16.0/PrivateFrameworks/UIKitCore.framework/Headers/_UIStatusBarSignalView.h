// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARSIGNALVIEW_H
#define _UISTATUSBARSIGNALVIEW_H

@class UIStatusBarPersistentAnimationView, NSString;
@protocol _UIStatusBarDisplayable;


#import "UIAccessibilityHUDItem.h"
#import "UIColor.h"

@interface _UIStatusBarSignalView : UIStatusBarPersistentAnimationView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (copy, nonatomic) UIColor *activeColor; // ivar: _activeColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (copy, nonatomic) UIColor *inactiveColor; // ivar: _inactiveColor
@property (nonatomic) NSInteger numberOfActiveBars; // ivar: _numberOfActiveBars
@property (nonatomic) NSInteger numberOfBars; // ivar: _numberOfBars
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (nonatomic) BOOL rounded; // ivar: _rounded
@property (nonatomic) NSInteger signalMode; // ivar: _signalMode
@property (nonatomic) BOOL smallSize; // ivar: _smallSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


+(struct CGSize )_intrinsicContentSizeForNumberOfBars:(NSInteger)arg0 iconSize:(NSInteger)arg1 ;
-(void)_colorsDidChange;
-(void)_updateActiveBars;
-(void)_updateBars;
-(void)_updateFromMode:(NSInteger)arg0 ;
-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif