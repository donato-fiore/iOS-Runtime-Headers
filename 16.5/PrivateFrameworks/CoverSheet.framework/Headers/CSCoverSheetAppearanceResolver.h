// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOVERSHEETAPPEARANCERESOLVER_H
#define CSCOVERSHEETAPPEARANCERESOLVER_H

@class SBFSteppedAnimationTimingFunctionCalculator, _UILegibilitySettings, NSArray;
@protocol CSCoverSheetViewTransitionSource, CSLegibilityProviding;

#import <Foundation/Foundation.h>

#import "CSBehavior.h"
#import "CSAppearance.h"

@interface CSCoverSheetAppearanceResolver : NSObject {
    SBFSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
}


@property (nonatomic) CSBehavior *activeBehavior; // ivar: _activeBehavior
@property (nonatomic) CGFloat appearanceFraction; // ivar: _appearanceFraction
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL contentTransitionIsAtCoverSheetLevel; // ivar: _contentTransitionIsAtCoverSheetLevel
@property (retain, nonatomic) NSObject<CSCoverSheetViewTransitionSource> *currentTransitionSource; // ivar: _currentTransitionSource
@property (retain, nonatomic) CSAppearance *desiredAppearance; // ivar: _desiredAppearance
@property (retain, nonatomic) _UILegibilitySettings *discreteLegibilitySettings; // ivar: _discreteLegibilitySettings
@property (nonatomic) CGFloat fraction; // ivar: _fraction
@property (nonatomic) BOOL hasContentAboveCoverSheet; // ivar: _hasContentAboveCoverSheet
@property (nonatomic) NSUInteger indexOfMainPage; // ivar: _indexOfMainPage
@property (nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) NSObject<CSLegibilityProviding> *legibilityProvider; // ivar: _legibilityProvider
@property (retain, nonatomic) CSAppearance *modalAppearance; // ivar: _modalAppearance
@property (retain, nonatomic) CSAppearance *oldAppearance; // ivar: _oldAppearance
@property (nonatomic) NSUInteger startIndex; // ivar: _startIndex
@property (retain, nonatomic) CSAppearance *targetAppearance; // ivar: _targetAppearance
@property (nonatomic) NSUInteger targetIndex; // ivar: _targetIndex
@property (copy, nonatomic) NSArray *whitePointValues; // ivar: _whitePointValues


-(id)_resolveBackgroundComponent;
-(id)_resolveComponentWithType:(NSInteger)arg0 ;
-(id)_resolveContentComponent;
-(id)_resolveControlCenterGrabberComponent;
-(id)_resolveDateViewComponent;
-(id)_resolveFooterCallToActionLabelComponentWithHomeAffordance:(id)arg0 ;
-(id)_resolveHomeAffordanceComponent;
-(id)_resolveLegibilitySettings;
-(id)_resolvePageContentComponent;
-(id)_resolvePoseidonComponent;
-(id)_resolveProudLockComponent;
-(id)_resolveQuickActionsComponent;
-(id)_resolveSlideableContentComponent;
-(id)_resolveStatusBarBackgroundComponent;
-(id)_resolveStatusBarComponent;
-(id)_resolveStatusBarGradientComponent;
-(id)_resolveTintingComponent;
-(id)_resolveWhitePointComponent;
-(id)init;
-(id)newActiveAppearanceGivenDesiredAppearance:(id)arg0 oldAppearance:(id)arg1 activeAppearance:(id)arg2 activeBehavior:(id)arg3 startIndex:(NSUInteger)arg4 targetIndex:(NSUInteger)arg5 indexOfMainPage:(NSUInteger)arg6 targetAppearance:(id)arg7 modalAppearance:(id)arg8 currentTransitionSource:(id)arg9 contentTransitionIsAtCoverSheetLevel:(BOOL)arg10 legibilityProvider:(id)arg11 bounds:(struct CGRect )arg12 whitePointValues:(id)arg13 hasContentAboveCoverSheet:(BOOL)arg14 ;
-(void)setInteractiveAnimationCalculatorPercentComplete:(CGFloat)arg0 ;


@end


#endif