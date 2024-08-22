// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERASMARTDETECTIONSETTINGSMODULE_H
#define HUCAMERASMARTDETECTIONSETTINGSMODULE_H

@class HFItemModule, NSSet, HFStaticItem, HFCameraSmartDetectionCondition, HFConditionCollection, NSString, HFItemProvider, UIViewController;
@protocol HUCameraSettingsModule;



@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule>

 {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFStaticItem *aClipIsRecordedItem; // ivar: _aClipIsRecordedItem
@property (retain, nonatomic) HFStaticItem *anyMotionDetectedItem; // ivar: _anyMotionDetectedItem
@property (readonly, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (retain, nonatomic) HFCameraSmartDetectionCondition *condition; // ivar: _condition
@property (readonly, nonatomic) HFConditionCollection *conditionCollection; // ivar: _conditionCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItemProvider *motionDetectionOffOnItemProvider; // ivar: _motionDetectionOffOnItemProvider
@property (readonly, nonatomic) HFItemProvider *motionDetectionSettingsItemProvider; // ivar: _motionDetectionSettingsItemProvider
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSUInteger settingsContext; // ivar: _settingsContext
@property (retain, nonatomic) HFStaticItem *specificMotionDetectedItem; // ivar: _specificMotionDetectedItem
@property (readonly) Class superclass;


+(BOOL)isSpecificMotionSelectedForConfiguration:(id)arg0 withCurrentConfiguration:(id)arg1 ;
+(id)_updatedCurrentSignificantEventConfiguration:(id)arg0 withSelectedConfiguration:(id)arg1 context:(NSUInteger)arg2 ;
+(id)_updatedNotificationCurrentSignificantEventConfiguration:(id)arg0 withSelectedConfiguration:(id)arg1 cameraProfile:(id)arg2 ;
+(id)_updatedRecordingCurrentSignificantEventConfiguration:(id)arg0 withSelectedConfiguration:(id)arg1 cameraProfile:(id)arg2 ;
+(id)notificationConfiguration:(id)arg0 forRecordingTriggers:(NSUInteger)arg1 ;
+(id)notificationConfigurationForAClipIsRecorded;
+(id)recordingConfiguration:(id)arg0 withCurrentConfiguration:(id)arg1 forProfile:(id)arg2 ;
+(id)selectedNotificationConfigurationForAClipIsRecorded;
+(id)selectedNotificationConfigurationForAnyMotion;
+(id)selectedNotificationConfigurationForSmartMotion;
+(id)selectedRecordingConfigurationForAnyMotion;
+(id)selectedRecordingConfigurationForSmartMotion;
+(id)specificMotionNotificationConfigurationForCameraProfile:(id)arg0 ;
+(id)updateCurrentSignificantEventConfiguration:(id)arg0 withSelectedConfiguration:(id)arg1 cameraProfile:(id)arg2 context:(NSUInteger)arg3 ;
-(BOOL)isItemHeader:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)enableSmartMotion:(BOOL)arg0 forItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 conditionCollection:(id)arg2 settingsContext:(NSUInteger)arg3 ;
-(id)itemProviders;
-(id)updateMotionDetectionSettingForItem:(id)arg0 ;
-(id)updateSignificantEventConfiguration:(id)arg0 ;


@end


#endif