// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIAPLAYER_H
#define SKUIMEDIAPLAYER_H

@class MPAVItem, MPAVController;

#import <Foundation/Foundation.h>

#import "SKUIMediaPlayerItemStatus.h"

@interface SKUIMediaPlayer : NSObject

@property (weak, nonatomic) MPAVItem *currentItem; // ivar: _currentItem
@property (retain, nonatomic) id *periodicTimeObserver; // ivar: _periodicTimeObserver
@property (weak, nonatomic) MPAVController *player; // ivar: _player
@property (retain, nonatomic) SKUIMediaPlayerItemStatus *playerItem; // ivar: _playerItem
@property (nonatomic) BOOL playing; // ivar: _playing
@property (nonatomic) float rate; // ivar: _rate




@end


#endif