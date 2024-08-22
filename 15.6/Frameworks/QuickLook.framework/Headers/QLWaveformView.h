// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLWAVEFORMVIEW_H
#define QLWAVEFORMVIEW_H

@class UIView, UIImage, UIImageView, AVAsset, NSString;
@protocol PHVideoScrubberFilmstripView;



@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView>

 {
    CGSize _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
}


@property (copy, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: placeholderImage
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleRect; // ivar: visibleRect


-(void)_expandWaveform;
-(void)_updateWithWaveformImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateImage;


@end


#endif