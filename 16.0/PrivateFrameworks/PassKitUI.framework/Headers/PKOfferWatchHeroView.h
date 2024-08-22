// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKOFFERWATCHHEROVIEW_H
#define PKOFFERWATCHHEROVIEW_H

@class UIView, UIImageView;


#import "PKWatchHeroImageView.h"

@interface PKOfferWatchHeroView : UIView {
    UIImageView *_passImageView;
}


@property (retain, nonatomic) PKWatchHeroImageView *watchView; // ivar: _watchView


-(BOOL)_isSmallPhone;
-(id)_deviceBackgroundColor;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setCardImage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif