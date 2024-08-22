// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI25TVSESSIONINSTRUCTIONSVIEW_H
#define _TTC9SEYMOURUI25TVSESSIONINSTRUCTIONSVIEW_H

@class UIView, NSArray;



@interface _TtC9SeymourUI25TVSessionInstructionsView : UIView {
    ? presenter;
    ? imageView;
    ? workoutTitleLabel;
    ? workoutDetailLabel;
    ? gymKitLabel;
    ? gymKitConnectingView;
    ? gymKitConnectedView;
    ? startWorkoutView;
    ? stackView;
    ? topOffest;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)startButtonTapped;


@end


#endif