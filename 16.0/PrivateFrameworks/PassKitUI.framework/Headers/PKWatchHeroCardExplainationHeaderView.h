// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWATCHHEROCARDEXPLAINATIONHEADERVIEW_H
#define PKWATCHHEROCARDEXPLAINATIONHEADERVIEW_H

@class UIView, UIImage;


#import "PKWatchHeroImageView.h"

@interface PKWatchHeroCardExplainationHeaderView : UIView {
    PKWatchHeroImageView *_watchDeviceView;
}


@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) CGSize recommendedCardImageSize; // ivar: _recommendedCardImageSize


-(id)bridgeWallpaperImage;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif