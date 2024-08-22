// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPICTUREINPICTUREPLAYBACKSTATE_H
#define AVPICTUREINPICTUREPLAYBACKSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVPictureInPicturePlaybackState : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat currentElapsedTime;
@property (readonly, nonatomic) CGFloat initializationTimestamp; // ivar: _initializationTimestamp
@property (readonly, nonatomic) CGFloat initializedElapsedTime; // ivar: _initializedElapsedTime
@property (readonly, nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) CGFloat timelineDuration; // ivar: _timelineDuration
@property (readonly, nonatomic) CGFloat timelineRate; // ivar: _timelineRate


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElapsedTime:(CGFloat)arg0 timelineDuration:(CGFloat)arg1 timelineRate:(CGFloat)arg2 paused:(BOOL)arg3 ;


@end


#endif