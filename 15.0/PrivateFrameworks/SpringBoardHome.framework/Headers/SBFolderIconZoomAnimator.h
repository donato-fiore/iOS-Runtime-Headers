// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFOLDERICONZOOMANIMATOR_H
#define SBFOLDERICONZOOMANIMATOR_H

@class NSString, SBFFluidBehaviorSettings;
@protocol SBSearchGestureObserver;


#import "SBScaleIconZoomAnimator.h"
#import "SBFolderController.h"
#import "SBFloatyFolderView.h"
#import "_SBInnerFolderIconZoomAnimator.h"
#import "SBSearchGesture.h"
#import "SBHFolderZoomSettings.h"
#import "SBFolderIcon.h"
#import "SBIconView.h"

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver>

 {
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings; // ivar: _dockAnimationSettings
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimatingInFloatingDock; // ivar: _isAnimatingInFloatingDock
@property (retain, nonatomic) SBSearchGesture *searchGesture; // ivar: _searchGesture
@property (retain, nonatomic) SBHFolderZoomSettings *settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBFolderIcon *targetIcon;
@property (readonly, nonatomic) SBIconView *targetIconView;


-(BOOL)_forceSquareZoomDimension;
-(BOOL)shouldMatchMoveWithDock;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)_referenceFolderIconView;
-(id)defaultTargetIconContainerView;
-(id)initWithAnimationContainer:(id)arg0 innerFolderController:(id)arg1 folderIcon:(id)arg2 ;
-(struct CGRect )_zoomedFrame;
-(void)_cleanupAnimation;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_setupCounterDockMatchMoveAnimationWithOffset:(CGFloat)arg0 layer:(id)arg1 additive:(BOOL)arg2 ;
-(void)_setupMatchMoveAnimation;
-(void)_setupMatchMoveWithDock;
-(void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint )arg0 targetIconAnchor:(struct CGPoint )arg1 ;
-(void)_updateDockMatchMoveWithFraction:(CGFloat)arg0 ;
-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;


@end


#endif