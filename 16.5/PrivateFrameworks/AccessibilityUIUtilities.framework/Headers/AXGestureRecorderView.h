// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXGESTURERECORDERVIEW_H
#define AXGESTURERECORDERVIEW_H

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIView, UIAccessibilityCustomAction;
@protocol CAAnimationDelegate, AXGestureRecorderViewDelegate;


#import "AXGestureRecorderGradientView.h"
#import "AXGestureRecorderStyleProvider.h"

@interface AXGestureRecorderView : AXGestureRecorderGradientView <CAAnimationDelegate>

 {
    CGFloat _freezeDryStartTime;
    CGFloat _freezeDryDrawPercentage;
    CGFloat _freezeDryStartIndex;
    NSMutableArray *_freezedDynamicPaths;
    NSMutableDictionary *_activeLayers;
    NSMutableDictionary *_instantReplayViews;
    NSMutableArray *_staticLayers;
    NSMutableArray *_transitionLayers;
}


@property (nonatomic) CGRect constrainedBoundsForDrawing; // ivar: _constrainedBoundsForDrawing
@property (weak, nonatomic) NSObject<AXGestureRecorderViewDelegate> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *dynamicFingerPathBackgroundGradientPatternColor; // ivar: _dynamicFingerPathBackgroundGradientPatternColor
@property (retain, nonatomic) UIView *dynamicFingerPathsContainerView; // ivar: _dynamicFingerPathsContainerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAccessibilityCustomAction *hideControlsAction; // ivar: _hideControlsAction
@property (retain, nonatomic) NSMutableDictionary *previouslyActiveLayersByInstantReplayFingerIndex; // ivar: _previouslyActiveLayersByInstantReplayFingerIndex
@property (nonatomic) BOOL replayMode; // ivar: _replayMode
@property (retain, nonatomic) UIAccessibilityCustomAction *showControlsAction; // ivar: _showControlsAction
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_dynamicFingerPathAtIndex:(NSUInteger)arg0 ;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )accessibilityFrame;
-(void)_commonInit;
-(void)_hideControls;
-(void)_performTransitionToStaticFingers:(id)arg0 transitionLayers:(id)arg1 hasExistingStaticFingers:(BOOL)arg2 ;
-(void)_showControls;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)clearInstantReplayFingerPaths;
-(void)deleteAllFingerPaths;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)fingerPathDidChange:(NSUInteger)arg0 ;
-(void)finishInstantReplayAtIndex:(NSUInteger)arg0 ;
-(void)freezeAllDynamicFingerPaths;
-(void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(NSUInteger)arg0 ;
-(void)hideStaticView;
-(void)insertDynamicFingerPathAtIndex:(NSUInteger)arg0 ;
-(void)reloadDynamicFingerPathAtIndex:(NSUInteger)arg0 ;
-(void)updateInstantReplayAtIndex:(NSUInteger)arg0 withPartialPath:(id)arg1 ;


@end


#endif