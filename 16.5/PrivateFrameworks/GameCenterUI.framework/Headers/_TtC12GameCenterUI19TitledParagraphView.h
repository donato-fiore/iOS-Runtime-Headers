// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI19TITLEDPARAGRAPHVIEW_H
#define _TTC12GAMECENTERUI19TITLEDPARAGRAPHVIEW_H

@class UIView;



@interface _TtC12GameCenterUI19TitledParagraphView : UIView {
    ? titleLabel;
    ? paragraphLabel;
    ? state;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif