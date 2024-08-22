// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKWATCHHEROCARDEXPLAINATIONHEADERVIEW_H
#define PKWATCHHEROCARDEXPLAINATIONHEADERVIEW_H

@class UIView, UIImageView, UIImage;



@interface PKWatchHeroCardExplainationHeaderView : UIView {
    BOOL _isCompactWatch;
    UIImageView *_watchDeviceImageView;
    UIImageView *_watchWallpaperImageView;
}


@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView; // ivar: _cardImageView
@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout


+(BOOL)isCompactWatch;
+(struct CGSize )recommendedCardImageSize;
+(struct CGSize )wallpaperImageSize:(BOOL)arg0 ;
+(struct CGSize )watchDeviceImageSize;
-(id)bridgeHeroImage;
-(id)bridgeWallpaperImage;
-(id)initWithImage:(id)arg0 ;
-(id)watchDeviceImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif