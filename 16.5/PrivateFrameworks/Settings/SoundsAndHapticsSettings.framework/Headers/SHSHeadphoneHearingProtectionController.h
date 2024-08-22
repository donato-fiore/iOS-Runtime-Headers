// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEADPHONEHEARINGPROTECTIONCONTROLLER_H
#define SHSHEADPHONEHEARINGPROTECTIONCONTROLLER_H

@class PSListController, ADASManager, HKHealthStore, NSNumber, NSNumberFormatter, NSArray;



@interface SHSHeadphoneHearingProtectionController : PSListController

@property (nonatomic, getter=isDeviceiPad) BOOL DeviceiPad; // ivar: _DeviceiPad
@property (nonatomic, getter=isDeviceiPod) BOOL DeviceiPod; // ivar: _DeviceiPod
@property (retain, nonatomic) ADASManager *audioSettingsManager; // ivar: _audioSettingsManager
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSNumber *levelLimitThreshold; // ivar: _levelLimitThreshold
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (nonatomic) int weeklyNotificationCount; // ivar: _weeklyNotificationCount
@property (retain, nonatomic) NSArray *weeklyNotificationData; // ivar: _weeklyNotificationData


-(BOOL)headphoneLevelLimitLockedByRestrictions;
-(id)deviceTypeString;
-(id)endDate;
-(id)getHeadphoneLevelLimitEnabled;
-(id)getHeadphoneLevelLimitSetting;
-(id)getHeadphoneNotificationsEnabled;
-(id)headphoneLevelLimitDescriptionSpecifier;
-(id)headphoneLevelLimitGroupSpecifier;
-(id)headphoneLevelLimitSliderSpecifier;
-(id)headphoneLevelLimitSwitchSpecifier;
-(id)headphoneLightningAdaptersSpecifier;
-(id)headphoneNotificationsGroupSpecifier;
-(id)headphoneNotificationsSwitchSpecifier;
-(id)headphoneWeeklyNotificationDescriptionSpecifier;
-(id)init;
-(id)specifiers;
-(id)startDate;
-(id)updateHeadphoneLevelLimitDescriptionText;
-(id)updateHeadphoneLevelLimitText;
-(id)weeklyNotificationCount:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)loadView;
-(void)openAboutHeadphoneNotifications;
-(void)openHealthArticleSafeListening;
-(void)openHealthPrivacySettings;
-(void)queryNotificationCountsFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)setHeadphoneLevelLimitEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setHeadphoneLevelLimitValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setHeadphoneNotificationsEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)updateWeeklyNotificationCounts:(id)arg0 perMonth:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif