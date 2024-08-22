// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPDOWNLOADPROGRESSVIEW_H
#define MPDOWNLOADPROGRESSVIEW_H

@class UIView, UIImageView, UIImage, UIColor;


#import "_MPDownloadProgressRingView.h"

@interface MPDownloadProgressView : UIView {
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _MPDownloadProgressRingView *_progressView;
}


@property (retain, nonatomic) UIImage *centerImage; // ivar: _centerImage
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) UIColor *outerRingColor; // ivar: _outerRingColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif