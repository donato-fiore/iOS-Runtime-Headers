// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCSETTINGSMANAGER_H
#define HKMCSETTINGSMANAGER_H

@class NSUserDefaults, HKObserverSet, NSArray, NSNumber, NSDate, NSDateComponents, NSString;

#import <Foundation/Foundation.h>


@interface HKMCSettingsManager : NSObject {
    NSUserDefaults *_menstrualCyclesDefaults;
    HKObserverSet *_observers;
    NSArray *_allSettingsToObserve;
    NSNumber *_unitTest_algorithmVersionMismatchOnWatch;
    NSNumber *_unitTest_watchMenstruationPredictionAlgorithmAttributesSupported;
    NSNumber *_unitTest_watchFertileWindowPredictionAlgorithmAttributesSupported;
    NSNumber *_unitTest_useLocalizedTextForVersionMismatchAndDisabledProjections;
    int _hiddenDisplayTypesNotifyToken;
    int _analysisSettingsNotifyToken;
    int _notificationSettingsNotifyToken;
    int _algorithmVersionMismatchSettingsNotifyToken;
}


@property (retain, nonatomic) NSDate *cycleTrackingOnboardingTileDismissedDate;
@property (retain, nonatomic) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property (nonatomic) BOOL fertileWindowNotificationsEnabled;
@property (nonatomic) NSUInteger fertileWindowProjectionsAlgorithmAttributesPhone;
@property (nonatomic) NSUInteger fertileWindowProjectionsAlgorithmAttributesWatch;
@property (nonatomic) BOOL fertileWindowProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (readonly, nonatomic) BOOL fertileWindowProjectionsEnabledAndSupported;
@property (retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjections;
@property (retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjectionsFromAlgorithmAttributes;
@property (retain, nonatomic) NSDateComponents *menstruationNotificationTimeOfDay;
@property (nonatomic) BOOL menstruationNotificationsEnabled;
@property (nonatomic) NSUInteger menstruationProjectionsAlgorithmAttributesPhone;
@property (nonatomic) NSUInteger menstruationProjectionsAlgorithmAttributesWatch;
@property (nonatomic) BOOL menstruationProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL menstruationProjectionsEnabled;
@property (readonly, nonatomic) BOOL menstruationProjectionsEnabledAndSupported;
@property (nonatomic) NSInteger minimumAnalysisStartDayIndex;
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (readonly, nonatomic) BOOL notificationsEnabledAndSupported;
@property (nonatomic) BOOL sensorBasedProjectionsEnabled;
@property (readonly, nonatomic) BOOL sensorBasedProjectionsEnabledAndMenstruationAndFertileWindowProjectionsEnabledAndSupported;


-(BOOL)_areAlgorithmAttributesOnPhone:(NSUInteger)arg0 aheadOfAlgorithmAttributesOnWatch:(NSUInteger)arg1 ;
-(BOOL)_forceDisableFertileWindowProjectionsFromOngoingCycleFactors:(id)arg0 ;
-(BOOL)_forceDisableMenstruationProjectionsFromOngoingCycleFactors:(id)arg0 ;
-(BOOL)algorithmVersionMismatchOnWatch;
-(BOOL)areAnyFertileWindowPredictionAlgorithmAttributesUnsupported;
-(BOOL)areAnyMenstruationPredictionAlgorithmAttributesUnsupported;
-(BOOL)hiddenForDisplayTypeIdentifier:(id)arg0 ;
-(id)_localizedTextForVersionMismatchFromOnboardedCycleFactors:(BOOL)arg0 ongoingCycleFactors:(id)arg1 useHeartRateInput:(BOOL)arg2 ;
-(id)init;
-(void)_algorithmVersionMismatchSettingsDidUpdate;
-(void)_analysisSettingsDidUpdate;
-(void)_hiddenDisplayTypesDidUpdate;
-(void)_migrateTestResultHiddenDisplayTypesIfNeeded;
-(void)_notificationSettingsDidUpdate;
-(void)_setTestDefaults:(id)arg0 ;
-(void)_startObservingDefaults;
-(void)_startObservingNPSNotifications;
-(void)_stopObservingAllDefaults;
-(void)_stopObservingNPSNotifications;
-(void)_unitTest_setAlgorithmVersionMismatchOnWatchOverride:(id)arg0 ;
-(void)_unitTest_setWatchFertileWindowPredictionAlgorithmAttributesSupportedOverride:(id)arg0 ;
-(void)_unitTest_setWatchMenstruationPredictionAlgorithmAttributesSupportedOverride:(id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)forceDisableProjectionsFromOnboardedCycleFactors:(BOOL)arg0 ongoingCycleFactors:(id)arg1 useHeartRateInput:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetAllSettings;
-(void)setFertilityTrackingDisplayTypesHidden:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 forDisplayTypeIdentifier:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 forDisplayTypeIdentifiers:(id)arg1 ;
-(void)setMenstruationTrackingDisplayTypesHidden:(BOOL)arg0 ;
-(void)setProjectionAttributesOnWatchFromHeartRateInputOnboarded:(BOOL)arg0 ;


@end


#endif