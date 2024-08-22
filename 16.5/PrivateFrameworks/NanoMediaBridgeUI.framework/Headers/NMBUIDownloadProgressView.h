// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMBUIDOWNLOADPROGRESSVIEW_H
#define NMBUIDOWNLOADPROGRESSVIEW_H

@class UIView, UIButton, UIImageView, CAShapeLayer;



@interface NMBUIDownloadProgressView : UIView {
    UIButton *_errorIconButton;
    UIImageView *_downloadableIconView;
    CAShapeLayer *_waitingRingLayer;
    CAShapeLayer *_downloadingRingTrackLayer;
    CAShapeLayer *_downloadingRingProgressLayer;
}


@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)_ringPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentFrame;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateDownloadingRingProgressLayerStrokeEnd;
-(void)layoutSubviews;


@end


#endif