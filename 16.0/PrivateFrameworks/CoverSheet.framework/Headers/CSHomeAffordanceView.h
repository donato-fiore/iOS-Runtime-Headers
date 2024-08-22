// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSHOMEAFFORDANCEVIEW_H
#define CSHOMEAFFORDANCEVIEW_H

@class UIView, SBFHomeGrabberSettings, NSString, MTLumaDodgePillView, _UILegibilitySettings, UIColor, MTStaticColorPillView;
@protocol SBSystemPointerInteractionDelegate, SBUIOptionalLegibility, CSCoverSheetContextProviding;


#import "CSAlwaysOnHomeAffordancePillView.h"

@interface CSHomeAffordanceView : UIView <SBSystemPointerInteractionDelegate, SBUIOptionalLegibility>

 {
    SBFHomeGrabberSettings *_settings;
}


@property (weak, nonatomic) CSAlwaysOnHomeAffordancePillView *alwaysOnHomeAffordance; // ivar: _alwaysOnHomeAffordance
@property (retain, nonatomic) NSObject<CSCoverSheetContextProviding> *coverSheetContext; // ivar: _coverSheetContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance; // ivar: _dynamicHomeAffordance
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (weak, nonatomic) MTStaticColorPillView *staticHomeAffordance; // ivar: _staticHomeAffordance
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemPointerInteractionEnabled) BOOL systemPointerInteractionEnabled; // ivar: _systemPointerInteractionEnabled


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(CGFloat)suggestedEdgeSpacing;
-(id)_viewForStyle:(NSUInteger)arg0 ;
-(id)init;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct CGRect )extendedFrameForPointerAnimationSuppression;
-(struct CGSize )suggestedSizeForContentWidth:(CGFloat)arg0 ;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)_createAlwaysOnHomeAffordance;
-(void)_createDynamicHomeAffordance;
-(void)_createStaticHomeAffordance;
-(void)_transitionToStyle:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateForLegibility;
-(void)layoutSubviews;


@end


#endif