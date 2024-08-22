// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREFRESHCONTROLMODERNCONTENTVIEW_H
#define _UIREFRESHCONTROLMODERNCONTENTVIEW_H

@class UIRefreshControlContentView;


#import "UIView.h"
#import "_UIRefreshControlModernReplicatorView.h"
#import "_UIRefreshControlSeedView.h"
#import "UILabel.h"

@interface _UIRefreshControlModernContentView : UIRefreshControlContentView {
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    _UIRefreshControlSeedView *_seed;
    BOOL _hasFinishedRevealing;
}


@property (nonatomic) BOOL areAnimationsValid; // ivar: _areAnimationsValid
@property (nonatomic) CGFloat currentPopStiffness; // ivar: _currentPopStiffness
@property (nonatomic) BOOL horizontallyCenteredFramesNeedUpdate; // ivar: _horizontallyCenteredFramesNeedUpdate
@property (nonatomic) CGFloat impactIntensity; // ivar: _impactIntensity
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(CGFloat)_currentTimeOffset;
-(CGFloat)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(CGFloat)_maximumSnappingHeightScalingForScrollViewHeight;
-(CGFloat)_percentageShowing;
-(CGFloat)maximumSnappingHeight;
-(NSInteger)style;
-(id)_effectiveTintColor;
-(id)_effectiveTintColorWithAlpha:(CGFloat)arg0 ;
-(id)attributedTitle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_bloomedSeedTransform;
-(struct CGAffineTransform )_unbloomedSeedTransform;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_bloom;
-(void)_cleanUpAfterRevealing;
-(void)_goAway;
-(void)_removeAllAnimations;
-(void)_resetToRevealingState;
-(void)_reveal;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setBloomedAppearance;
-(void)_setSpunAppearance;
-(void)_setUnbloomedAppearance;
-(void)_snappingMagic;
-(void)_spin;
-(void)_tick;
-(void)_tickDueToProgrammaticRefresh;
-(void)_unbloom;
-(void)_updateTimeOffsetOfRelevantLayers;
-(void)didTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)willTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;


@end


#endif