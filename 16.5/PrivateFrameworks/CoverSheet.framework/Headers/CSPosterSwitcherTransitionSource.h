// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPOSTERSWITCHERTRANSITIONSOURCE_H
#define CSPOSTERSWITCHERTRANSITIONSOURCE_H

@class NSString, NSSet, _UILegibilitySettings;
@protocol CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSPosterSwitcherTransitionDelegate;

#import <Foundation/Foundation.h>

#import "CSHomeAffordanceComponent.h"
#import "CSComponent.h"

@interface CSPosterSwitcherTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding>



@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSHomeAffordanceComponent *homeAffordance; // ivar: _homeAffordance
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? transitionContext; // ivar: _transitionContext
@property (nonatomic) NSInteger transitionType; // ivar: _transitionType
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (weak, nonatomic) NSObject<CSPosterSwitcherTransitionDelegate> *transitioningDelegate; // ivar: _transitioningDelegate
@property (retain, nonatomic) CSComponent *wallpaper; // ivar: _wallpaper
@property (retain, nonatomic) CSComponent *wallpaperFloatingLayer; // ivar: _wallpaperFloatingLayer


-(void)cancelTransition;
-(void)cleanupPresentation;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)prepareForPresentation;
-(void)updatePresentationWithProgress:(CGFloat)arg0 ;


@end


#endif