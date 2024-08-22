// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI13TVARTWORKVIEW_H
#define _TTC9SEYMOURUI13TVARTWORKVIEW_H

@class UIImage;


#import "SMUTVStackedImageView.h"

@interface _TtC9SeymourUI13TVArtworkView : SMUTVStackedImageView {
    ? completedIconView;
    ? flipsContentForRightToLeftDirection;
    ? iconConstraints;
    ? recencyIconView;
    ? artwork;
    ? layoutHandler;
    ? shelfArtworkIconSafeAreaInsets;
    ? layout;
    ? style;
    ? stackedOverlayView;
}


@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif