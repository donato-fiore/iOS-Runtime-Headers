// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI10DETAILVIEW_H
#define _TTC12GAMECENTERUI10DETAILVIEW_H

@class UIView;



@interface _TtC12GameCenterUI10DetailView : UIView {
    ? titleLabel;
    ? subtitleLabel;
    ? imageView;
    ? separator;
    ? chevronView;
    ? accessoryView;
    ? accessory;
    ? accessoryAction;
    ? disabled;
    ? selectionHandler;
    ? tapGestureRecognizer;
    ? style;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapWithAccessoryView:(id)arg0 ;
-(void)layoutSubviews;
-(void)wasTapped;


@end


#endif