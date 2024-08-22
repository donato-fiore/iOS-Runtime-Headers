// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMAVSYNCHRONIZEDVIEW_H
#define PMAVSYNCHRONIZEDVIEW_H

@class UIView, AVSynchronizedLayer, AVPlayerItem;



@interface PMAVSynchronizedView : UIView

@property (retain, nonatomic) AVSynchronizedLayer *layer;
@property (retain, nonatomic) AVPlayerItem *playerItem;


-(id)makeBackingLayer;


@end


#endif