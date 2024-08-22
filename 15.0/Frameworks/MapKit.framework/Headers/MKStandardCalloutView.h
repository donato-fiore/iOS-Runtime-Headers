// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKSTANDARDCALLOUTVIEW_H
#define MKSTANDARDCALLOUTVIEW_H

@class UIView, UIVisualEffectView, UIMotionEffectGroup;


#import "MKCalloutView.h"
#import "_MKStandardCalloutMaskView.h"
#import "_MKCalloutLayer.h"
#import "MKSmallCalloutView.h"

@interface MKStandardCalloutView : MKCalloutView {
    ? _anchor;
    CGRect _frame;
    ? _flags;
    BOOL _animatingMapToShow;
    BOOL _dismissed;
    _MKStandardCalloutMaskView *_maskView;
    _MKCalloutLayer *_maskLayer;
    _MKCalloutLayer *_contentStrokeLayer;
    UIView *_contentView;
    MKSmallCalloutView *_calloutView;
    UIVisualEffectView *_backdropView;
    UIMotionEffectGroup *_motionEffect;
    NSInteger _style;
    ? _metrics;
}


@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle


+(CGFloat)defaultHeight;
+(Class)layerClass;
-(BOOL)hasPendingVisibility;
-(BOOL)isLeftAnchored;
-(NSInteger)_calculateAnchorPosition:(struct CGPoint *)arg0 visibleRect:(struct CGRect *)arg1 ;
-(NSInteger)anchorPosition;
-(id)initWithAnnotationView:(id)arg0 ;
-(id)subtitle;
-(struct CGPoint )_originForScale:(CGFloat)arg0 ;
-(struct CGPoint )anchorPoint;
-(struct CGPoint )offset;
-(void)_adaptToUserInterfaceStyle;
-(void)_addAccessoryTargetForView:(id)arg0 ;
-(void)_calculateActualAnchorPoint:(struct CGPoint *)arg0 frame:(struct CGRect *)arg1 forDesiredAnchorPoint:(struct CGPoint )arg2 boundaryRect:(struct CGRect )arg3 ;
-(void)_calloutAccessoryControlTapped:(id)arg0 ;
-(void)_frameDidChange;
-(void)_layoutSubviews:(BOOL)arg0 ;
-(void)_markDidMoveCalled;
-(void)_removeAccessoryTargetForView:(id)arg0 ;
-(void)_runBounceAnimationWithCompletionBlock:(id)arg0 ;
-(void)_setNeedsCalloutUpdate;
-(void)_setOriginForScale:(CGFloat)arg0 ;
-(void)_showFromAnchorPoint:(struct CGPoint )arg0 boundaryRect:(struct CGRect )arg1 animate:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)_startObservingAnnotationView:(id)arg0 ;
-(void)_stopObservingAnnotationView:(id)arg0 ;
-(void)_updateCallout;
-(void)_updateCalloutAnimated:(BOOL)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)annotationViewFrameDidChange;
-(void)completeBounceAnimation;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)dismissAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)forceAnchorPosition:(NSInteger)arg0 ;
-(void)motionEffectDidUpdate:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setDetailView:(id)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLeftView:(id)arg0 backgroundColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOffset:(struct CGPoint )arg0 ;
-(void)setRightView:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setSubtitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)showAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif