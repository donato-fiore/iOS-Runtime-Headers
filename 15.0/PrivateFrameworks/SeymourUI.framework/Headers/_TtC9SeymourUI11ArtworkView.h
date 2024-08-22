// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI11ARTWORKVIEW_H
#define _TTC9SEYMOURUI11ARTWORKVIEW_H

@class TtC9SeymourUI20NoIntrinsicImageView, UIImage;



@interface _TtC9SeymourUI11ArtworkView : TtC9SeymourUI20NoIntrinsicImageView {
    ? completedIconView;
    ? iconConstraints;
    ? recencyIconView;
    ? artwork;
    ? layoutHandler;
    ? shelfArtworkIconSafeAreaInsets;
    ? layout;
    ? style;
}


@property (nonatomic, retain) UIImage *image;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif