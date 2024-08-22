// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDDEBITCARDHEROVIEW_H
#define PKADDDEBITCARDHEROVIEW_H

@class UIView, UIImageView;



@interface PKAddDebitCardHeroView : UIView {
    UIImageView *_passSnapshotView;
    UIImageView *_debitCardView;
}




-(id)initWithPassSnapShot:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif