// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPICTUREINPICTUREPLAYERLAYERVIEW_H
#define AVPICTUREINPICTUREPLAYERLAYERVIEW_H

@class UIView, AVPlayerLayer;


#import "_AVSimplePlayerLayerView.h"

@interface AVPictureInPicturePlayerLayerView : UIView {
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}


@property (readonly, nonatomic) AVPlayerLayer *playerLayer;


-(void)attachPlayerLayer;
-(void)detachPlayerLayer;


@end


#endif