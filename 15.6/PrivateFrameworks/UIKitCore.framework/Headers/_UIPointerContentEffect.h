// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTERCONTENTEFFECT_H
#define _UIPOINTERCONTENTEFFECT_H

@class NSMutableArray, NSString;
@protocol _UIViewSubtreeMonitor, _UIContentEffect, _UIContentEffectDescriptor;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIPointerInteractionAnimator.h"
#import "_UIPointerEffectPlatterView.h"
#import "UIPointerRegion.h"
#import "UIPointerStyle.h"
#import "UIWindow.h"

@interface _UIPointerContentEffect : NSObject <_UIViewSubtreeMonitor, _UIContentEffect>

 {
    ? _flags;
    BOOL _pressed;
}


@property (nonatomic) NSUInteger animationCount; // ivar: _animationCount
@property (weak, nonatomic) UIView *boundsObservationView; // ivar: _boundsObservationView
@property (readonly, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_UIContentEffectDescriptor> *descriptor;
@property (retain, nonatomic) UIPointerInteractionAnimator *entranceAnimator; // ivar: _entranceAnimator
@property (retain, nonatomic) UIPointerInteractionAnimator *exitAnimator; // ivar: _exitAnimator
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialEffectPlatterPosition; // ivar: _initialEffectPlatterPosition
@property (weak, nonatomic) UIView *lumaSamplingBackdrop; // ivar: _lumaSamplingBackdrop
@property (retain, nonatomic) _UIPointerEffectPlatterView *platterView; // ivar: _platterView
@property (weak, nonatomic) UIView *pointerPortal; // ivar: _pointerPortal
@property (weak, nonatomic) UIView *positionReferenceView; // ivar: _positionReferenceView
@property (copy, nonatomic) UIPointerRegion *region; // ivar: _region
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) UIPointerStyle *style; // ivar: _style
@property (weak, nonatomic) UIView *sublayerObservationView; // ivar: _sublayerObservationView
@property (weak, nonatomic) UIWindow *subtreeMonitoredWindow; // ivar: _subtreeMonitoredWindow
@property (readonly) Class superclass;


-(BOOL)_monitorsView:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_positionReferenceViewForPreview:(id)arg0 ;
-(id)initWithStyle:(id)arg0 region:(id)arg1 ;
-(id)previewForContinuingToEffectWithPreview:(id)arg0 ;
-(void)_anchorPlatterView:(id)arg0 toPreview:(id)arg1 updateBounds:(BOOL)arg2 ;
-(void)_cleanUpObservation;
-(void)_commitPointerStyleToArbiterWithCompletion:(id)arg0 ;
-(void)_createAndInstallPlatterView;
-(void)_ensureRelativeEffectViewOrderInContainer;
// -(void)_modifyEffectContainerViewHierarchy:(id)arg0 waitForCACommit:(unk)arg1  ;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_tearDownPlatterView;
-(void)_updateFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)_updatePlatterView:(id)arg0 forStyle:(id)arg1 ;
-(void)addCompletion:(id)arg0 ;
-(void)begin;
-(void)dealloc;
-(void)end:(BOOL)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif