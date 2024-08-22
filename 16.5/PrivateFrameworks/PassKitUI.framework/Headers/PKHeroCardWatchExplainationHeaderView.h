// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHEROCARDWATCHEXPLAINATIONHEADERVIEW_H
#define PKHEROCARDWATCHEXPLAINATIONHEADERVIEW_H

@class UIView, UIImageView, UIImage;


#import "PKWatchHeroImageView.h"

@interface PKHeroCardWatchExplainationHeaderView : UIView {
    UIImageView *_passImageView;
    PKWatchHeroImageView *_watchView;
}


@property (retain, nonatomic) UIImage *cardImage; // ivar: _cardImage
@property (readonly, nonatomic) CGSize recommendedCardImageSize;


-(BOOL)_isSmallPhone;
-(id)_deviceBackgroundColor;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif