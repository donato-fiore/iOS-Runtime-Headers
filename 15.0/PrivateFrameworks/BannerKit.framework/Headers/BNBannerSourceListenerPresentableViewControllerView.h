// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLERVIEW_H
#define BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLERVIEW_H

@class UIView;
@protocol BNBannerSourceListenerPresentableViewControllerViewDelegate;



@interface BNBannerSourceListenerPresentableViewControllerView : UIView

@property (weak, nonatomic) NSObject<BNBannerSourceListenerPresentableViewControllerViewDelegate> *delegate; // ivar: _delegate


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif