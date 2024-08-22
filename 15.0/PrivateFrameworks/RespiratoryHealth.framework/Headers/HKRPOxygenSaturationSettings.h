// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKRPOXYGENSATURATIONSETTINGS_H
#define HKRPOXYGENSATURATIONSETTINGS_H

@class HKObserverSet, NSUserDefaults, NSString;
@protocol HKRPUserDefaultsSyncProviding;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationSettings : NSObject {
    HKObserverSet *_observers;
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> *_userDefaultsSyncProvider;
}


@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailOptionsFooter;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailOptionsTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailSleepTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailTheaterTitle;
@property (nonatomic) BOOL backgroundMeasurementsDuringSleepMode;
@property (nonatomic) BOOL backgroundMeasurementsDuringTheaterMode;
@property (nonatomic) BOOL backgroundMeasurementsEnabled;
@property (readonly, nonatomic) NSString *backgroundMeasurementsFooter;
@property (readonly, nonatomic) NSString *backgroundMeasurementsHeader;
@property (readonly, nonatomic) NSString *backgroundMeasurementsTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsValue;
@property (readonly, nonatomic) NSString *bloodOxygenLocalizedPaneTitle;
@property (readonly, nonatomic) NSString *bloodOxygenMeasurementsTitle;
@property (readonly, nonatomic) NSString *bloodOxygenSectionTitle;
@property (readonly, nonatomic) NSString *learnMoreAboutBloodOxygenURL;
@property (nonatomic) BOOL overrideIsRemoteDisabled;
@property (nonatomic) BOOL oxygenSaturationDisabled;


+(id)standardSettings;
-(id)_settingsToObserve;
-(id)initWithUserDefaults:(id)arg0 userDefaultsSyncProvider:(id)arg1 ;
-(void)_notifySettingsDidChange;
-(void)_startObservingDefaults;
-(void)_stopObservingAllDefaults;
-(void)activateDefaultValuesIfNeeded;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)reset;


@end


#endif