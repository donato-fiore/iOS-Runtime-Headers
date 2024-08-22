// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMECODECONTROLLER_H
#define AVTIMECODECONTROLLER_H

@class AVAssetTrack, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVTimecodeController : NSObject {
    NSInteger _frameCount;
    AVAssetTrack *_videoTrack;
    NSMutableArray *_timecodes;
    CVSMPTETime _maxTimecode;
    NSInteger _maxFrameNumber;
    id *_timeObserver;
}


@property (readonly, nonatomic) ? observationInterval; // ivar: _observationInterval
@property (retain, nonatomic) AVAssetTrack *timecodeTrack; // ivar: _timecodeTrack


-(BOOL)readTimecodes;
-(BOOL)timecodeAvailable;
-(BOOL)validateCMTime:(struct ? )arg0 ;
-(CGFloat)timeIntervalForFrameNumber:(NSInteger)arg0 ;
-(NSInteger)calculateFrameNumberAtCMTime:(struct ? )arg0 ;
-(NSInteger)calculateFrameNumberAtTimeInterval:(CGFloat)arg0 ;
-(NSInteger)calculateFrameNumberAtTimecode:(id)arg0 ;
-(NSInteger)offsetFor:(id)arg0 fromTimecode:(id)arg1 ;
-(id)calculateTimecodeAtFrame:(NSInteger)arg0 ;
-(id)initWithTimecodeTrack:(id)arg0 videoTrack:(id)arg1 ;
-(id)maxFrameCountString;
-(id)maxTimecodeString;
-(id)timecodeForFrameNumber32UsingFormatDescription:(struct opaqueCMFormatDescription *)arg0 timecodeStartFrame:(NSInteger)arg1 ;
-(struct CVSMPTETime )timecodeForFrameNumber64UsingCachedDescription:(NSInteger)arg0 ;
-(struct CVSMPTETime )timecodeForOffset:(NSInteger)arg0 from:(NSInteger)arg1 timecode:(id)arg2 ;
-(void)cacheTimecodeDescriptionForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)calculateMaxFrameAndTimecode;


@end


#endif