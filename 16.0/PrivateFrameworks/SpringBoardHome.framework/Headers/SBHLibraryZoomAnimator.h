// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHLIBRARYZOOMANIMATOR_H
#define SBHLIBRARYZOOMANIMATOR_H

@class NSMutableArray, CADisplayLink, _UIPortalView, UIView;
@protocol SBHViewControllerTransitionAnimating, SBHModalLibraryPresentationContext, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHLibraryWaveZoomSettings.h"

@interface SBHLibraryZoomAnimator : NSObject <SBHViewControllerTransitionAnimating>

 {
    id<SBHModalLibraryPresentationContext> *_context;
    SBIconImageInfo _libraryIconImageInfo;
    NSMutableArray *_libraryIconViews;
    NSMutableArray *_flyingPodViews;
    NSMutableArray *_fadingPodViews;
    NSMutableArray *_crossfadeViews;
    NSMutableArray *_flyingPodWrapperViews;
    CGFloat _startTime;
    CADisplayLink *_displayLink;
    CGPoint _initialLibraryOrigin;
    CGRect _initialSourceContentFrame;
    CGRect _initialTargetContentFrame;
    BOOL _podsWantDisplayLinkInfluencedPositioning;
    BOOL _alreadyAnimating;
    NSUInteger _transitionToken;
    NSInteger _endpointAnimatingTo;
    id<BSInvalidatable> *_presentationSourceOrderingAssertion;
    _UIPortalView *_presentationSourcePortalView;
    UIView *_sourceTouchForwardingView;
    SBHLibraryWaveZoomSettings *_openSettings;
    SBHLibraryWaveZoomSettings *_closeSettings;
}




+(BOOL)validateWithLibrary:(id)arg0 context:(id)arg1 ;
-(BOOL)_targetViewHasMatchMove:(id)arg0 ;
-(id)_flyingPodIconViewAtIndex:(NSUInteger)arg0 ;
-(id)_retargetedAnimationSettingsForSettings:(id)arg0 normalizedTier:(CGFloat)arg1 endpoint:(NSInteger)arg2 ;
-(id)init;
-(struct CGRect )_sourceFrameForPodViewAtIndex:(NSUInteger)arg0 inCoordinateSpace:(id)arg1 withContext:(id)arg2 ;
-(struct CGRect )_sourceFrameForPodViewAtIndex:(NSUInteger)arg0 inCoordinateSpace:(id)arg1 withContext:(id)arg2 forUnscaledPositioning:(BOOL)arg3 ;
-(struct CGRect )_targetFrameForPodView:(id)arg0 atIndex:(NSUInteger)arg1 forEndpoint:(NSInteger)arg2 withContext:(id)arg3 ;
-(struct SBIconImageInfo )_iconImageInfoForPodViewAtIndex:(NSUInteger)arg0 ;
-(void)_addPositionToTargetView:(id)arg0 matchingSourceView:(id)arg1 initialSourceFrame:(struct CGRect )arg2 ;
-(void)_configureAlphaForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 ;
-(void)_configureBackgroundViewForEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)_configureCategoryStackAlphaForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 ;
-(void)_configureCrossfadeDestinationContentForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 ;
-(void)_configureCrossfadeSourceContentForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 ;
-(void)_configureDockIndicatorViewsForEndpoint:(NSInteger)arg0 preparing:(BOOL)arg1 withContext:(id)arg2 ;
-(void)_configureLayoutForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 includeYPosition:(BOOL)arg3 ;
-(void)_configureScaleForPodViewAtIndex:(NSUInteger)arg0 forEndpoint:(NSInteger)arg1 withContext:(id)arg2 includeYTranslation:(BOOL)arg3 ;
-(void)_configureSearchViewsForEndpoint:(NSInteger)arg0 preparing:(BOOL)arg1 withContext:(id)arg2 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_matchMoveTargetView:(id)arg0 withSourceView:(id)arg1 ;
-(void)_matchMoveTargetView:(id)arg0 withSourceView:(id)arg1 usingSourceFrame:(struct CGRect )arg2 targetFrame:(struct CGRect )arg3 ;
-(void)_removeMatchMoveFromTargetView:(id)arg0 ;
-(void)_removePositionAdditionFromTargetView:(id)arg0 ;
-(void)_setIconImageInfo:(struct SBIconImageInfo )arg0 forPodViewAtIndex:(NSUInteger)arg1 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif