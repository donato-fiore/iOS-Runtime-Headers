// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKCONVERSATIONCONTROLSJOINCALLCOUNTDOWNVIEW_H
#define CNKCONVERSATIONCONTROLSJOINCALLCOUNTDOWNVIEW_H

@class UIView;



@interface CNKConversationControlsJoinCallCountdownView : UIView {
    ? ringLayer;
    ? countdownLayer;
    ? percentageAnimation;
    ? ringWidth;
    ? fillColor;
    ? strokeColor;
}


@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)initializeCountdownWithInitialValue:(CGFloat)arg0 fullValue:(CGFloat)arg1 ;
-(void)startCountdown;


@end


#endif