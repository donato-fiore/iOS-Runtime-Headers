// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI27TVSESSIONWATCHDISCOVERYVIEW_H
#define _TTC9SEYMOURUI27TVSESSIONWATCHDISCOVERYVIEW_H

@class UIView, NSArray;



@interface _TtC9SeymourUI27TVSessionWatchDiscoveryView : UIView {
    ? presenter;
    ? stackView;
    ? spinnerView;
    ? lookingLabel;
    ? checkLabel;
    ? startStandaloneButton;
    ? imageView;
    ? connectingView;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapStartStandaloneButton;


@end


#endif