// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPGSVTRANSITIONINTERSTITIALVIEW_H
#define PKPGSVTRANSITIONINTERSTITIALVIEW_H

@class UIView, NSMutableArray, PKSpringAnimationFactory;



@interface PKPGSVTransitionInterstitialView : UIView {
    BOOL _animated;
    NSUInteger _animationCounter;
    NSMutableArray *_completions;
    BOOL _presentingItemDirty;
    BOOL _presentedItemDirty;
    UIView *_presentingItemSnapshot;
    UIView *_presentedItemSnapshot;
}


@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic, getter=isPresented) BOOL presented; // ivar: _presented
@property (retain, nonatomic) PKSpringAnimationFactory *springFactory; // ivar: _springFactory


-(id)_animationForKeyPath:(id)arg0 ;
-(id)_highFrameRateAnimationForKeyPath:(id)arg0 ;
-(id)_snapshotForView:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPresented:(BOOL)arg0 ;
-(struct CGRect )frameForTargetFrame:(struct CGRect )arg0 ;
-(void)_decrementAnimationCount;
-(void)_executeCompletionHandlers:(BOOL)arg0 ;
-(void)_incrementAnimationCount;
-(void)_updateFrameForTargetFrame:(struct CGRect )arg0 animated:(BOOL)arg1 track:(BOOL)arg2 ;
-(void)addCompletion:(id)arg0 ;
-(void)addPresentedItem:(id)arg0 ;
-(void)addPresentingItem:(id)arg0 ;
-(void)beginTrackingExternalAnimation;
-(void)dealloc;
-(void)endTrackingExternalAnimation;
-(void)invalidate;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)updateFrameForTargetFrame:(struct CGRect )arg0 animated:(BOOL)arg1 ;


@end


#endif