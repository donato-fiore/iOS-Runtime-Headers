// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI11ARTWORKVIEW_H
#define _TTC12GAMECENTERUI11ARTWORKVIEW_H

@class TtC12GameCenterUI17RoundedCornerView, UIColor;



@interface _TtC12GameCenterUI11ArtworkView : TtC12GameCenterUI17RoundedCornerView {
    ? imageView;
    ? shadowView;
    ? shadow;
    ? isStyleInvalid;
    ? style;
    ? internalBackgroundColor;
    ? imageSize;
    ? isCornerRadiusInvalid;
    ? artworkTintColor;
}


@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif