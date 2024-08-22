// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANANCHORTRACKPLAYER_H
#define ANANCHORTRACKPLAYER_H



#import "ANTrackPlayer.h"

@interface ANAnchorTrackPlayer : ANTrackPlayer

@property (nonatomic) ? startTime; // ivar: _startTime


-(void)handleInterruptionDelay:(CGFloat)arg0 ;
-(void)playInternalWithCompletionHandler:(id)arg0 ;


@end


#endif