// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPROGRESSINDICATOR_H
#define PGPROGRESSINDICATOR_H

@class UIViewPropertyAnimator, UIColor;


#import "PGMaterialView.h"
#import "PGVibrantFillView.h"

@interface PGProgressIndicator : PGMaterialView {
    PGVibrantFillView *_elapsedTrack;
    PGVibrantFillView *_completeTrack;
    UIViewPropertyAnimator *_pulseAnimator;
    NSInteger _pulseState;
}


@property (retain, nonatomic) UIColor *customElapsedTrackTintColor; // ivar: _customElapsedTrackTintColor
@property (nonatomic) BOOL includesWaitingToPlayIndicator; // ivar: _includesWaitingToPlayIndicator
@property (nonatomic) CGFloat progress; // ivar: _progress


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyPulseState;
-(void)_performLayout;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_transitionToPulseStateIfNeeded:(NSInteger)arg0 ;
-(void)_updateElapsedTrackTintColor;
-(void)_updatePulseAnimatorIfNeeded;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif