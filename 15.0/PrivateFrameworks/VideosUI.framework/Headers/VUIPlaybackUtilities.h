// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPLAYBACKUTILITIES_H
#define VUIPLAYBACKUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUIPlaybackUtilities : NSObject



+(BOOL)playerIsLive:(id)arg0 ;
+(CGFloat)playedThresholdTimeForDuration:(CGFloat)arg0 ;
+(CGFloat)suggestedBookmarkTimeForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(NSInteger)playedStateForDuration:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 hasBeenPlayed:(BOOL)arg2 playCount:(NSUInteger)arg3 ;
+(NSInteger)playedStateForDuration:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 hasBeenPlayed:(BOOL)arg2 playCount:(NSUInteger)arg3 respectPlayCount:(BOOL)arg4 ;


@end


#endif