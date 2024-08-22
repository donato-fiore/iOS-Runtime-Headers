// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOKVOHELPER_H
#define VIDEOKVOHELPER_H

@class AVPlayer;

#import <Foundation/Foundation.h>


@interface VideoKVOHelper : NSObject

@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (copy, nonatomic) id *playerBlock; // ivar: _playerBlock
@property (copy, nonatomic) id *playerItemBlock; // ivar: _playerItemBlock
@property (retain, nonatomic) id *timeObserver; // ivar: _timeObserver


-(id)initWithPlayer:(id)arg0 ;
-(void)addAVPlayerItemObserverWithBlock:(id)arg0 ;
-(void)addAVPlayerRateObserverWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif