// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPPLAYER_H
#define RCPPLAYER_H

@protocol RCPEventDeliveryServicePool;

#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"
#import "RCPPlayerPlaybackOptions.h"

@interface RCPPlayer : NSObject

@property (retain, nonatomic) NSObject<RCPEventDeliveryServicePool> *deliveryServicePool; // ivar: _deliveryServicePool
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) RCPPlayerPlaybackOptions *playbackOptions; // ivar: _playbackOptions
@property (nonatomic) BOOL stompSenderForSimulatorPlayback; // ivar: _stompSenderForSimulatorPlayback


+(id)sharedPlayer;
+(void)playEventStream:(id)arg0 withOptions:(id)arg1 ;
+(void)tearDown;
-(BOOL)prewarmForEventStream:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithDeliveryServicePool:(id)arg0 environment:(id)arg1 ;
-(struct __IOHIDEvent *)_cloneAndTransformHIDEvent:(id)arg0 machTimeOffset:(NSInteger)arg1 transform:(struct CGAffineTransform )arg2 ;
-(void)_sendEvent:(id)arg0 machTimeOffset:(NSInteger)arg1 transform:(struct CGAffineTransform )arg2 ;
-(void)_sendEvent:(id)arg0 withService:(id)arg1 machTimeOffset:(NSInteger)arg2 transform:(struct CGAffineTransform )arg3 ;
-(void)playEventStream:(id)arg0 withOptions:(id)arg1 ;
-(void)tearDown;


@end


#endif