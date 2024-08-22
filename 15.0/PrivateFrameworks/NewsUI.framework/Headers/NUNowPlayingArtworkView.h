// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOWPLAYINGARTWORKVIEW_H
#define NUNOWPLAYINGARTWORKVIEW_H

@class UIView, UIImageView;



@interface NUNowPlayingArtworkView : UIView

@property (readonly, nonatomic) CGSize artworkSize;
@property (retain, nonatomic) UIImageView *trackImageView; // ivar: _trackImageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )artworkSizeForTitleViewWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setTrackImage:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif