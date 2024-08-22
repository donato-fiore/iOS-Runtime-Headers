// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSINTERSTITIALTRANSITIONSOURCE_H
#define CSINTERSTITIALTRANSITIONSOURCE_H

@class NSString, NSSet, _UILegibilitySettings;
@protocol CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSInterstitialTransitionDelegate;

#import <Foundation/Foundation.h>

#import "CSComponent.h"

@interface CSInterstitialTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding>



@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSComponent *homeAffordance; // ivar: _homeAffordance
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState; // ivar: _participantState
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? transitionContext; // ivar: _transitionContext
@property (nonatomic) NSInteger transitionType; // ivar: _transitionType
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (weak, nonatomic) NSObject<CSInterstitialTransitionDelegate> *transitioningDelegate; // ivar: _transitioningDelegate


-(void)cancelTransition;
-(void)cleanupPresentation;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)prepareForPresentation;
-(void)updatePresentationWithProgress:(CGFloat)arg0 ;


@end


#endif