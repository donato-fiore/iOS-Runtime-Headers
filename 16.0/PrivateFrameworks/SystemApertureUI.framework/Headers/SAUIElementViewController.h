// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIELEMENTVIEWCONTROLLER_H
#define SAUIELEMENTVIEWCONTROLLER_H

@class UIView, UIViewFloatAnimatableProperty, NSString;
@protocol SAUIElementViewDelegate, SAUIElementLayoutAxisObserving, SAUIElementViewProviding;


#import "SAUILayoutSpecifyingElementViewController.h"
#import "SAUIElementView.h"

@interface SAUIElementViewController : SAUILayoutSpecifyingElementViewController <SAUIElementViewDelegate, SAUIElementLayoutAxisObserving>

 {
    SAUIElementView *_elementView;
    UIView *_snapshotView;
    UIViewFloatAnimatableProperty *_shadowViewAnimatableProperty;
    BOOL _initializedAppearanceTransition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SAUIElementViewProviding> *elementViewProvider;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutAxis;
@property (readonly) Class superclass;


-(BOOL)_isTrackingExpansionOrContractionTransition;
-(BOOL)elementViewShouldCenterProvidedContent:(id)arg0 ;
-(BOOL)handleTap:(id)arg0 ;
-(CGFloat)fixedHeightForElementView:(id)arg0 ;
-(NSInteger)layoutModeForElementView:(id)arg0 ;
-(NSInteger)maximumSupportedLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)_containerView;
-(id)_contentView;
-(id)_elementView;
-(id)initWithElementViewProvider:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(*BOOL)arg4 ;
-(void)_performContentAppearanceTransition:(BOOL)arg0 ;
-(void)_performContentViewCustomContentTransition:(BOOL)arg0 ;
-(void)_performCustomContentTransition:(BOOL)arg0 forTransformView:(id)arg1 ;
-(void)_performLeadingTrailingViewCustomContentTransitions;
-(void)_performLeadingTrailingViewSquishTransitions;
-(void)_performLeadingViewCustomContentTransition:(BOOL)arg0 ;
-(void)_performLeadingViewSquishTransition:(BOOL)arg0 ;
-(void)_performMinimalViewCustomContentTransition:(BOOL)arg0 ;
-(void)_performMinimalViewSquishTransition:(BOOL)arg0 ;
-(void)_performSquishTransition:(BOOL)arg0 forProvidedView:(id)arg1 transformView:(id)arg2 ;
-(void)_performTrailingViewCustomContentTransition:(BOOL)arg0 ;
-(void)_performTrailingViewSquishTransition:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif