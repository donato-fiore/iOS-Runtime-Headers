// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NANOWPLAYINGTITLEVIEW_H
#define NANOWPLAYINGTITLEVIEW_H

@class UIView, UIImageView, UILabel;
@protocol NANowPlayingTitleViewLayoutSpecProvider;



@interface NANowPlayingTitleView : UIView

@property (weak, nonatomic) NSObject<NANowPlayingTitleViewLayoutSpecProvider> *layoutSpecProvider; // ivar: _layoutSpecProvider
@property (retain, nonatomic) UIImageView *publisherImageView; // ivar: _publisherImageView
@property (readonly, nonatomic) CGFloat publisherLogoHeight;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 layoutSpecProvider:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setPublisherImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)setMarqueeRunning:(BOOL)arg0 ;
-(void)setPublisherImage:(id)arg0 fallbackName:(id)arg1 ;
-(void)setTitle:(id)arg0 ;


@end


#endif