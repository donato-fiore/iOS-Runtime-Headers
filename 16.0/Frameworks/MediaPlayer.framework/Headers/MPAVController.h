// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVCONTROLLER_H
#define MPAVCONTROLLER_H


#import <Foundation/Foundation.h>

#import "MPAVItem.h"

@interface MPAVController : NSObject

@property (retain, nonatomic) MPAVItem *currentItem; // ivar: _currentItem
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic) BOOL shouldDisplayAsPlaying; // ivar: _shouldDisplayAsPlaying
@property (nonatomic) NSInteger state; // ivar: _state


-(id)addPeriodicTimeObserverForInterval:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)pause;
-(void)play;
-(void)removeTimeObserver:(id)arg0 ;


@end


#endif