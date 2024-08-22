// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDOWNLOADPROGRESSVIEW_H
#define HUDOWNLOADPROGRESSVIEW_H

@class UIView, UIImageView, UIImage, UIColor;


#import "_HUDownloadProgressRingView.h"

@interface HUDownloadProgressView : UIView {
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _HUDownloadProgressRingView *_progressView;
}


@property (retain, nonatomic) UIImage *centerImage; // ivar: _centerImage
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) UIColor *outerRingColor; // ivar: _outerRingColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif