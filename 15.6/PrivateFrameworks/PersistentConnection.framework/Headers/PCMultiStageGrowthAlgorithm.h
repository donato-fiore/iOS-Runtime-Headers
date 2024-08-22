// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCMULTISTAGEGROWTHALGORITHM_H
#define PCMULTISTAGEGROWTHALGORITHM_H

@class NSDate, NSString, NSDictionary;
@protocol PCGrowthAlgorithm, OS_os_log;

#import <Foundation/Foundation.h>


@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm>

 {
    CGFloat _previousMaximumKeepAliveInterval;
    CGFloat _lastKeepAliveInterval;
    CGFloat _highWatermark;
    CGFloat _initialGrowthStageHighWatermark;
    CGFloat _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSDate *_leaveMinimumIntervalFallbackStateDate;
    NSString *_algorithmName;
    NSObject<OS_os_log> *_logObject;
    int _lastKeepAliveAlgorithmMode;
    int _currentKeepAliveAlgorithmMode;
}


@property (readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property (readonly, nonatomic) NSUInteger countOfGrowthActions; // ivar: _countOfGrowthActions
@property (readonly, nonatomic) CGFloat currentKeepAliveInterval; // ivar: _currentKeepAliveInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int growthStage; // ivar: _growthStage
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isServerOriginatedKeepAlive; // ivar: _isServerOriginatedKeepAlive
@property (nonatomic) CGFloat lastSuccessfulKeepAliveInterval; // ivar: _lastSuccessfulKeepAliveInterval
@property (nonatomic) CGFloat maximumKeepAliveInterval; // ivar: _maximumKeepAliveInterval
@property (nonatomic) BOOL minimumIntervalFallbackEnabled; // ivar: _minimumIntervalFallbackEnabled
@property (nonatomic) CGFloat minimumIntervalFallbackStateTimeout; // ivar: _minimumIntervalFallbackStateTimeout
@property (nonatomic) CGFloat minimumKeepAliveInterval; // ivar: _minimumKeepAliveInterval
@property (nonatomic) int previousAction; // ivar: _previousAction
@property (nonatomic) CGFloat serverStatsExpectedKeepAliveInterval; // ivar: _serverStatsExpectedKeepAliveInterval
@property (nonatomic) CGFloat serverStatsMaxKeepAliveInterval; // ivar: _serverStatsMaxKeepAliveInterval
@property (nonatomic) CGFloat serverStatsMinKeepAliveInterval; // ivar: _serverStatsMinKeepAliveInterval
@property (nonatomic) _PCTimeRange signalAvoidanceRange; // ivar: _signalAvoidanceRange
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingServerStatsAggressively; // ivar: _usingServerStatsAggressively


+(void)_loadDefaultValue:(*CGFloat)arg0 forKey:(struct __CFString *)arg1 ;
+(void)_loadDefaults;
-(BOOL)useIntervalIfImprovement:(CGFloat)arg0 ;
-(CGFloat)_steadyStateTimeout;
-(id)_stringForAction:(int)arg0 ;
-(id)_stringForMode:(int)arg0 ;
-(id)_stringForStage:(int)arg0 ;
-(id)initWithCacheInfo:(id)arg0 loggingIdentifier:(id)arg1 algorithmName:(id)arg2 ;
-(void)_adjustGrowthAlgorithmMode;
-(void)_fallbackToLastSuccessfulKeepAliveInterval;
-(void)_processBackoffAction:(int)arg0 ;
-(void)_processInitialGrowthAction:(int)arg0 ;
-(void)_processInitialShrinkAction:(int)arg0 ;
-(void)_processMinimumIntervalFallbackStateAction:(int)arg0 ;
-(void)_processRefinedGrowthAction:(int)arg0 ;
-(void)_processRefinedShrinkAction:(int)arg0 ;
-(void)_processSteadyStateAction:(int)arg0 ;
-(void)_resetAlgorithmToInterval:(CGFloat)arg0 ;
-(void)_resetAlgorithmToInterval:(CGFloat)arg0 stage:(int)arg1 ;
-(void)processNextAction:(int)arg0 ;


@end


#endif