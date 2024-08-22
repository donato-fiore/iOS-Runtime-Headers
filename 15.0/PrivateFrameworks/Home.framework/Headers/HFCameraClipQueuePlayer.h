// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERACLIPQUEUEPLAYER_H
#define HFCAMERACLIPQUEUEPLAYER_H

@class AVQueuePlayer, NSArray;


#import "HFCameraClipPlayerItem.h"

@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (readonly, nonatomic) HFCameraClipPlayerItem *currentItem;
@property (readonly, copy, nonatomic) NSArray *items;


-(id)initWithItems:(id)arg0 ;


@end


#endif