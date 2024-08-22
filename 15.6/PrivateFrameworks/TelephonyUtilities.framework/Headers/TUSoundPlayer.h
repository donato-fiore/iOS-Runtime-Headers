// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUSOUNDPLAYER_H
#define TUSOUNDPLAYER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TURepeatingActor.h"

@interface TUSoundPlayer : NSObject

@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) TURepeatingActor *repeatingActor; // ivar: _repeatingActor
@property (nonatomic) unsigned int soundID; // ivar: _soundID


-(id)init;
-(void)playSound:(unsigned int)arg0 ;
-(void)playSound:(unsigned int)arg0 iterations:(NSUInteger)arg1 pauseDurationBetweenIterations:(CGFloat)arg2 ;
-(void)playSound:(unsigned int)arg0 iterations:(NSUInteger)arg1 pauseDurationBetweenIterations:(CGFloat)arg2 completion:(id)arg3 ;
-(void)playSoundIndefinitely:(unsigned int)arg0 pauseDurationBetweenIterations:(CGFloat)arg1 ;
-(void)stopPlaying;


@end


#endif