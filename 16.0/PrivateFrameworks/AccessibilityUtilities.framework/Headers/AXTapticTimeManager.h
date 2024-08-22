// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXTAPTICTIMEMANAGER_H
#define AXTAPTICTIMEMANAGER_H

@class NSMutableArray, NSHashTable, NSMutableDictionary, NSNumber, NSDate, NSLocale;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface AXTapticTimeManager : NSObject {
    NSMutableArray *_enqueuedSounds;
    NSMutableArray *_enqueuedSoundDelays;
    NSHashTable *_observers;
    unsigned int _ssIDHapticFast;
    unsigned int _ssIDHapticSlow;
    unsigned int _ssIDHapticMorse;
    NSMutableDictionary *_soundToPatterns;
    NSMutableDictionary *_hapticsDescriptions;
    BOOL _is24Hour;
    NSNumber *_cachedSpeed;
    NSInteger _currentSsid;
    NSObject<OS_os_activity> *_activity;
    os_activity_scope_state_s _scopeState;
}


@property (nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (retain, nonatomic) NSDate *dateOverride; // ivar: _dateOverride
@property (readonly, nonatomic) BOOL isCurrentlyOutputting; // ivar: _isCurrentlyOutputting
@property (retain, nonatomic) NSLocale *localeOverride; // ivar: _localeOverride
@property (copy, nonatomic) id *testingQueueCallback; // ivar: _testingQueueCallback


+(id)sharedInstance;
-(BOOL)_is24HourTime;
-(BOOL)_preStartCheck;
-(BOOL)_startPowerAssertion;
-(NSInteger)_numberOfTapHoursForClockTimeWithEncoding:(NSInteger)arg0 ;
-(NSInteger)_numberOfTapMinutesForClockTime;
-(NSInteger)_numberOfTapsForHourNumber:(NSInteger)arg0 withEncoding:(NSInteger)arg1 ;
-(id)_atomToLegacyVibePattern:(id)arg0 ;
-(id)_convertSoundToStringName:(unsigned int)arg0 ;
-(id)_dateComponentsForClockTime;
-(id)init;
-(void)_cleanupHapticsDict;
-(void)_clearQueue;
-(void)_dequeueSound;
-(void)_enqueueHours:(NSUInteger)arg0 encoding:(NSInteger)arg1 ;
-(void)_enqueueMinutes:(NSUInteger)arg0 encoding:(NSInteger)arg1 ;
-(void)_handleTestingQueueCallback;
-(void)_informObserversDidOutputSSID:(NSInteger)arg0 ;
-(void)_informObserversDidStart;
-(void)_informObserversDidStop;
-(void)_informObserversWillOutputSSID:(NSInteger)arg0 hapticsDescriptions:(id)arg1 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)_outputWithEnqueueBlock:(id)arg0 ;
-(void)_stopPowerAssertion;
-(void)_updateHapticPatternsIfNecessary:(BOOL)arg0 ;
-(void)_updateIs24HourTime;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)outputHours:(NSInteger)arg0 ;
-(void)outputHoursAndMinutes:(NSInteger)arg0 ;
-(void)outputMinutes:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stopCurrentOutput;


@end


#endif