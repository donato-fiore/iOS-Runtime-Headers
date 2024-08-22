// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI29GKDASHBOARDSHOWMOREFOOTERVIEW_H
#define _TTC12GAMECENTERUI29GKDASHBOARDSHOWMOREFOOTERVIEW_H

@class UICollectionReusableView, NSString;



@interface _TtC12GameCenterUI29GKDashboardShowMoreFooterView : UICollectionReusableView {
    ? label;
    ? actionHandler;
    ? showMoreText;
}


@property (nonatomic, copy) id *actionHandler;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, copy) NSString *showMoreText;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTap:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif