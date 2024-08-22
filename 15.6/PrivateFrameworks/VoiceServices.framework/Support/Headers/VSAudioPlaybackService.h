// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAUDIOPLAYBACKSERVICE_H
#define VSAUDIOPLAYBACKSERVICE_H

@class NSError;
@protocol VSAudioPlaybackServiceProtocol><AFAudioPowerProviding;

#import <Foundation/Foundation.h>

#import "VSAudioRouteInfo.h"

@interface VSAudioPlaybackService : NSObject

@property (readonly, nonatomic) AudioStreamBasicDescription asbd;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<VSAudioPlaybackServiceProtocol><AFAudioPowerProviding> *implementation; // ivar: _implementation
@property (readonly, nonatomic) VSAudioRouteInfo *outputRouteInfo; // ivar: _outputRouteInfo
@property (nonatomic) NSUInteger playbackIntervalId; // ivar: _playbackIntervalId
@property (retain, nonatomic) id *timingObserver; // ivar: _timingObserver


+(CGFloat)durationOfAudioDataLength:(NSUInteger)arg0 withAudioDescription:(struct AudioStreamBasicDescription )arg1 ;
+(NSUInteger)bytesOfDuration:(CGFloat)arg0 withAudioDescription:(struct AudioStreamBasicDescription )arg1 ;
-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(id)audioPowerProvider;
-(id)initWithAudioSessionID:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 useAVSBAR:(BOOL)arg2 ;
-(id)start;
-(void)didEndAccessPower;
-(void)enqueue:(id)arg0 packetCount:(NSInteger)arg1 packetDescriptions:(id)arg2 ;
-(void)flushAndStop;
-(void)pause;
-(void)setBoundaryTimeObserverForTimingInfos:(id)arg0 usingBlock:(id)arg1 ;
-(void)stop;
-(void)willBeginAccessPower;


@end


#endif