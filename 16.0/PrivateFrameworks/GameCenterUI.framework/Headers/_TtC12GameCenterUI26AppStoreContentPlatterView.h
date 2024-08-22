// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI26APPSTORECONTENTPLATTERVIEW_H
#define _TTC12GAMECENTERUI26APPSTORECONTENTPLATTERVIEW_H

@class UIView;



@interface _TtC12GameCenterUI26AppStoreContentPlatterView : UIView {
    ? titleView;
    ? materialBackgroundView;
    ? contentContainer;
    ? titleActionBlock;
    ? loadingIndicator;
    ? errorView;
    ? isLoading;
    ? orientation;
}




-(NSUInteger)_edgesPropagatingSafeAreaInsetsToSubviews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif