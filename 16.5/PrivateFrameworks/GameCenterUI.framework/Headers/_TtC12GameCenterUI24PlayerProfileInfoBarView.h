// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI24PLAYERPROFILEINFOBARVIEW_H
#define _TTC12GAMECENTERUI24PLAYERPROFILEINFOBARVIEW_H

@class UIView, NSArray;
@protocol UIScrollViewDelegate;



@interface _TtC12GameCenterUI24PlayerProfileInfoBarView : UIView <UIScrollViewDelegate>

 {
    ? centerContentInScrollView;
    ? infoItemPairs;
    ? separators;
    ? scrollView;
    ? gradient;
}


@property (nonatomic, readonly) NSArray *accessibilityInfoItemPairs;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif