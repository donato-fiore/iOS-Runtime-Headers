// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONZOOMANIMATOR_H
#define SBICONZOOMANIMATOR_H

@class NSMapTable, NSSet, NSString;
@protocol SBIconIndexNodeObserver, SBIconZoomAnimationContaining;


#import "SBIconAnimator.h"
#import "SBIconListModel.h"
#import "SBHIconModel.h"
#import "SBIconListView.h"
#import "SBHIconZoomSettings.h"

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver>

 {
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    SBIconListModel *_iconListModel;
    SBHIconModel *_iconModel;
    CGFloat _startTime;
}


@property (readonly, nonatomic) NSObject<SBIconZoomAnimationContaining> *animationContainer;
@property (retain, nonatomic) NSSet *criticalIconNodeIdentifiers; // ivar: _criticalIconNodeIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIconListView *dockListView; // ivar: _dockListView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (retain, nonatomic) SBHIconZoomSettings *settings;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly) Class superclass;


-(BOOL)isPastPointOfNoReturn;
-(NSUInteger)_numberOfSignificantAnimations;
-(NSUInteger)dockIconCount;
-(NSUInteger)listIconCount;
-(id)iconViewForIcon:(id)arg0 ;
-(id)initWithAnimationContainer:(id)arg0 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_applyLabelAlphaFraction:(CGFloat)arg0 ;
-(void)_cleanupAnimation;
-(void)_cleanupZoom;
-(void)_clearObservers;
-(void)_iconModelDidRelayout:(id)arg0 ;
-(void)_iconModelDidReload:(id)arg0 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg0 ;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)cleanupZoom;
-(void)dealloc;
-(void)enumerateIconsAndIconViewsWithHandler:(id)arg0 ;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;


@end


#endif