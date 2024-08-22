// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUSICPLAYERCONTROLLERNOWPLAYINGTIMESNAPSHOT_H
#define MPMUSICPLAYERCONTROLLERNOWPLAYINGTIMESNAPSHOT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding>

 {
    CGFloat _elapsedTime;
    CGFloat _duration;
    CGFloat _timestamp;
}


@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, nonatomic, getter=isLive) BOOL live; // ivar: _live
@property (readonly, nonatomic) float rate; // ivar: _rate
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
+(id)liveSnapshotWithRate:(float)arg0 state:(NSInteger)arg1 ;
+(id)snapshotWithElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 rate:(float)arg2 atTimestamp:(CGFloat)arg3 state:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif