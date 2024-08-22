// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLAYBACKREPORTERUTS_H
#define VUIPLAYBACKREPORTERUTS_H

@class WLKPlaybackReporter;


#import "VUIPlaybackReporter.h"
#import "VUIPlaybackUpNextConfig.h"

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter

@property (retain, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig; // ivar: _playbackUpNextConfig
@property (retain, nonatomic) WLKPlaybackReporter *reporter; // ivar: _reporter


+(BOOL)_shouldCacheResumeTimeForMediaType:(id)arg0 ;
+(id)sharedInstance;
+(void)_cachePlaybackResumeTime:(id)arg0 absoluteResumeTime:(id)arg1 featureRelativeResumeTime:(id)arg2 ;
-(BOOL)_isTransitionValidForPlayer:(id)arg0 fromState:(id)arg1 toState:(id)arg2 ;
-(BOOL)enforceSinglePlaybackSession;
-(CGFloat)_completionFudgeFactor;
-(NSInteger)_wlkPlaybackStateForState:(id)arg0 ;
-(id)_createSessionForPlayer:(id)arg0 ;
-(id)_wlkPlaybackRateForState:(id)arg0 player:(id)arg1 ;
-(void)_endSession:(id)arg0 ;
-(void)_reportForPlayer:(id)arg0 playerState:(id)arg1 completionState:(NSUInteger)arg2 completionBlock:(id)arg3 ;
-(void)_reportForSession:(id)arg0 state:(id)arg1 reason:(id)arg2 ;
-(void)_reportLinearForPlayer:(id)arg0 playerState:(id)arg1 completionState:(NSUInteger)arg2 completionBlock:(id)arg3 ;
-(void)_reportSummary:(id)arg0 sessionID:(id)arg1 completion:(id)arg2 ;
-(void)_reportVODForPlayer:(id)arg0 playerState:(id)arg1 completionState:(NSUInteger)arg2 completionBlock:(id)arg3 ;
-(void)reportForPlayer:(id)arg0 completionState:(NSUInteger)arg1 completionBlock:(id)arg2 ;


@end


#endif