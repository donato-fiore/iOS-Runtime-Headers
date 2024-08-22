// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTVWATCHNEXTCELLVIEW_H
#define PXSTORYTVWATCHNEXTCELLVIEW_H

@class UILabel, UIImageView;


#import "PXGFocusEffectView.h"
#import "PXGradientView.h"
#import "_PXStoryShapeView.h"
#import "PXStoryTVWatchNextCellConfiguration.h"

@interface PXStoryTVWatchNextCellView : PXGFocusEffectView {
    PXGradientView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_countdownImage;
    _PXStoryShapeView *_countdownRing;
}


@property (copy, nonatomic) PXStoryTVWatchNextCellConfiguration *userData;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif