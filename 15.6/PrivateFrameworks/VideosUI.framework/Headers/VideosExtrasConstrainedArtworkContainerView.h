// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASCONSTRAINEDARTWORKCONTAINERVIEW_H
#define VIDEOSEXTRASCONSTRAINEDARTWORKCONTAINERVIEW_H

@class UIView, MPUArtworkView, UIImage, NSArray, UIImageView;



@interface VideosExtrasConstrainedArtworkContainerView : UIView

@property (retain, nonatomic) MPUArtworkView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage
@property (nonatomic) CGFloat overlayScale; // ivar: _overlayScale
@property (retain, nonatomic) NSArray *overlaySizeConstraints; // ivar: _overlaySizeConstraints
@property (retain, nonatomic) UIImageView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds; // ivar: _shouldAutoresizeMaskLayerToFillBounds
@property (nonatomic) BOOL shouldBottomAlignArtwork; // ivar: _shouldBottomAlignArtwork


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif