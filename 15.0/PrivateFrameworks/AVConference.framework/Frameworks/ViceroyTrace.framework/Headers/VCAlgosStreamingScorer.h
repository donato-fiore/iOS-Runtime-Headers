// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCALGOSSTREAMINGSCORER_H
#define VCALGOSSTREAMINGSCORER_H

@class AlgosStreamScore, NSDictionary;

#import <Foundation/Foundation.h>


@interface VCAlgosStreamingScorer : NSObject {
    AlgosStreamScore *_algosScore;
    CGFloat _launchTime;
    os_unfair_lock_s _blockAlgosScoreLock;
    BOOL _didStartStream;
    BOOL _didStopStream;
    BOOL _didEndStream;
    int _pendingScoringEventCount;
    CGFloat _lastStreamTierSwitch;
    CGFloat _totalStopDuration;
}


@property (readonly, nonatomic) NSDictionary *algosScoreDictionary; // ivar: _algosScoreDictionary
@property (nonatomic) int avgReceivingBitrate; // ivar: _avgReceivingBitrate
@property (readonly, nonatomic) CGFloat frameratePredictedMOS; // ivar: _frameratePredictedMOS
@property (nonatomic) int maxTargetBitrate; // ivar: _maxTargetBitrate
@property (readonly, nonatomic) CGFloat resolutionPredictedMOS; // ivar: _resolutionPredictedMOS
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(CGFloat)finalizeScoreStreamingWithTime:(CGFloat)arg0 ;
-(CGFloat)relativeTime:(CGFloat)arg0 ;
-(CGFloat)streamQuality;
-(id)initWithLaunchTime:(CGFloat)arg0 ;
-(void)addCallFailureWithTime:(CGFloat)arg0 detailedErrorCode:(int)arg1 ;
-(void)addLargeGapErasureWithTime:(CGFloat)arg0 largeGapErasureRate:(CGFloat)arg1 ;
-(void)addStreamTierSwitchWithTime:(CGFloat)arg0 ;
-(void)addVideoStallWithStartTime:(CGFloat)arg0 endStallTime:(CGFloat)arg1 ;
-(void)dealloc;
-(void)endWithTime:(CGFloat)arg0 streamType:(int)arg1 ;
-(void)setVideoFramerate:(CGFloat)arg0 ;
-(void)setVideoResolutionWithTime:(CGFloat)arg0 width:(int)arg1 height:(int)arg2 ;
-(void)startWithTime:(CGFloat)arg0 streamType:(int)arg1 ;
-(void)stopWithTime:(CGFloat)arg0 streamType:(int)arg1 ;
-(void)updateRelativeTime:(CGFloat)arg0 ;


@end


#endif