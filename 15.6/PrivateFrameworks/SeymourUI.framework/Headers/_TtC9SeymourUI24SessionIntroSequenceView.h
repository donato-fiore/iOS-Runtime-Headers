// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI24SESSIONINTROSEQUENCEVIEW_H
#define _TTC9SEYMOURUI24SESSIONINTROSEQUENCEVIEW_H

@class UIView;



@interface _TtC9SeymourUI24SessionIntroSequenceView : UIView {
    ? presenter;
    ? countdownPosition;
    ? countdownView;
    ? playButtonView;
    ? spinnerView;
    ? playPauseGestureRecognizer;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic) CGRect frame;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTouchDownPlayIcon:(id)arg0 ;
-(void)didTouchUpInsidePlayIcon:(id)arg0 ;
-(void)didTouchUpOutsidePlayIcon:(id)arg0 ;
-(void)handlePlayPauseGesture;


@end


#endif