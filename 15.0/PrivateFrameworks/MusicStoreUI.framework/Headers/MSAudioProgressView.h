// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSAUDIOPROGRESSVIEW_H
#define MSAUDIOPROGRESSVIEW_H

@class UIView, UIImageView, SUPlayerStatus;
@protocol OS_dispatch_source;


#import "MSPieImageView.h"

@interface MSAudioProgressView : UIView {
    UIImageView *_bufferingImageView;
    NSObject<OS_dispatch_source> *_bufferingTimer;
    MSPieImageView *_progressView;
    UIImageView *_stopImageView;
}


@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (copy, nonatomic) SUPlayerStatus *playerStatus; // ivar: _playerStatus


-(id)_newBufferingImageView;
-(id)_newProgressView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cancelBufferingTimer;
-(void)_showBufferingImageView;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif