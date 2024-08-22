// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI10SLIDERVIEW_H
#define _TTC9SEYMOURUI10SLIDERVIEW_H

@class UIView;



@interface _TtC9SeymourUI10SliderView : UIView {
    ? trackLayoutGuide;
    ? value;
    ? onValueChanged;
    ? isEnabled;
    ? $__lazy_storage_$_panGestureRecognizer;
    ? elapsedTrack;
    ? feedbackGenerator;
    ? remainingTrack;
    ? stackView;
    ? styleProvider;
    ? valueRange;
    ? currentState;
    ? currentTrackWidth;
    ? elapsedTrackWidthConstraint;
    ? oldBounds;
    ? trackHeightConstraint;
}


@property (nonatomic) NSInteger semanticContentAttribute;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)panGestureRecognized:(id)arg0 ;


@end


#endif