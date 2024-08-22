// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMETRICS_H
#define CHMETRICS_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHMetrics : NSObject {
    NSInteger _reporterID;
    NSString *_engineID;
    unsigned int _audioSessionID;
    BOOL _sessionIsShared;
    BOOL _isSPI;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    float _CHMetricsIntensityBin1To2Value;
    float _CHMetricsIntensityBin2To3Value;
    vector<unsigned long, std::allocator<unsigned long>> _hapticTransientIDs;
    vector<unsigned long, std::allocator<unsigned long>> _hapticContinuousSustainedIDs;
    vector<unsigned long, std::allocator<unsigned long>> _hapticContinuousNonsustainedIDs;
    unordered_map<AVHapticPlayerEventType, NSString *, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>, std::allocator<std::pair<const AVHapticPlayerEventType, NSString *>>> _legacyHapticTransientEventTypeMap;
    NSMutableDictionary *_playerData;
    NSMutableDictionary *_patternLibraryData;
    BOOL _retainDataForTesting;
    NSMutableDictionary *_dataForTesting;
}




+(CGFloat)currentTime;
-(BOOL)isEnabled;
-(BOOL)isEventType:(NSUInteger)arg0 inList:(struct vector<unsigned long, std::allocator<unsigned long>> )arg1 ;
-(float)getLoopsForAdvancedPlayer:(id)arg0 endTime:(CGFloat)arg1 ;
-(float)getLoopsForPlayer:(id)arg0 endTime:(CGFloat)arg1 ;
-(id)continousDictionary:(id)arg0 slot:(NSUInteger)arg1 intensity:(float)arg2 ;
-(id)continuousSharpnessSlotKeyFromSlotValue:(NSUInteger)arg0 ;
-(id)getIDForPlayer:(id)arg0 ;
-(id)getMetricsForPlayer:(id)arg0 ;
-(id)initWithEngine:(id)arg0 audioSessionID:(unsigned int)arg1 sessionIsShared:(BOOL)arg2 isSPI:(BOOL)arg3 ;
-(id)intensityBinKeyFromValue:(float)arg0 ;
-(id)legacyTransientDictionary:(id)arg0 eventType:(NSUInteger)arg1 intensity:(float)arg2 ;
-(id)transientDictionary:(id)arg0 index:(NSUInteger)arg1 intensity:(float)arg2 ;
-(id)transientSharpnessIndexKeyFromIndexValue:(NSUInteger)arg0 ;
-(void)addPatternLibraryMetric:(id)arg0 ;
-(void)dealloc;
-(void)dispatchOnLocal:(id)arg0 ;
-(void)handleActionForPlayer:(id)arg0 action:(NSInteger)arg1 time:(CGFloat)arg2 isAdvanced:(BOOL)arg3 ;
-(void)handleEngineStart;
-(void)handleEngineStop;
-(void)handleFinishedForPlayersAtTime:(CGFloat)arg0 ;
-(void)handleInitForPlayer:(id)arg0 events:(id)arg1 isAdvanced:(BOOL)arg2 patternID:(id)arg3 ;
-(void)handleParamCurveEncountered;
-(void)handleServerRecovery;
-(void)handleStartForPlayer:(id)arg0 time:(CGFloat)arg1 isAdvanced:(BOOL)arg2 patternID:(id)arg3 ;
-(void)logMetric:(id)arg0 value:(id)arg1 ;
-(void)logPatternLibraryMetric:(id)arg0 ;
-(void)logPowerLogMetric:(id)arg0 ;
-(void)markAdvancedPlaybackAction:(id)arg0 action:(NSInteger)arg1 time:(float)arg2 ;
-(void)markPlaybackAction:(id)arg0 action:(NSInteger)arg1 time:(float)arg2 ;
-(void)prepareAdvancedPlaybackData:(id)arg0 events:(id)arg1 ;
-(void)prepareData:(id)arg0 events:(id)arg1 ;
-(void)preparePlaybackData:(id)arg0 events:(id)arg1 ;
-(void)removePlaybackData:(id)arg0 ;
-(void)resetAdvancedPlaybackData:(id)arg0 ;
-(void)resetPlaybackData:(id)arg0 ;
-(void)retainData:(id)arg0 forTestingPlayer:(id)arg1 ;
-(void)sendDetailedMetricsForPlayerID:(id)arg0 endTime:(float)arg1 ;
-(void)sendPatternLibraryMetrics;
-(void)setMetricsTestModeEnabled;
-(void)setReporter;
-(void)startReporter;
-(void)stopReporter;


@end


#endif