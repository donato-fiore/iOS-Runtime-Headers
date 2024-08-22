// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSTATUSANDNOTIFICATIONSITEMMANAGER_H
#define HUSTATUSANDNOTIFICATIONSITEMMANAGER_H

@class HFItemManager, HFStaticItem, HFUserNotificationServiceSettings, HMHome, HFItem<HFServiceLikeItem>;
@protocol HFUserNotificationServiceSettingsProviding;


#import "HUCameraSmartDetectionSettingsModule.h"
#import "HUChimeOnHomePodListItem.h"
#import "HUChimeOnHomePodSingleItem.h"
#import "HUTriggerConditionEditorItemModule.h"

@interface HUStatusAndNotificationsItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *allowActivityNotificationsItem; // ivar: _allowActivityNotificationsItem
@property (retain, nonatomic) HFStaticItem *allowAnalogChimeNotificationItem; // ivar: _allowAnalogChimeNotificationItem
@property (retain, nonatomic) HFStaticItem *allowCameraReachabilityChangeNotificationsItem; // ivar: _allowCameraReachabilityChangeNotificationsItem
@property (retain, nonatomic) HFStaticItem *allowCameraSnapshotsItem; // ivar: _allowCameraSnapshotsItem
@property (retain, nonatomic) HFStaticItem *allowCameraStatusChangesItem; // ivar: _allowCameraStatusChangesItem
@property (retain, nonatomic) HFStaticItem *allowDoorbellNotificationsItem; // ivar: _allowDoorbellNotificationsItem
@property (retain, nonatomic) HFStaticItem *allowMotionNotificationsItem; // ivar: _allowMotionNotificationsItem
@property (retain, nonatomic) HFStaticItem *allowNotificationsItem; // ivar: _allowNotificationsItem
@property (readonly, nonatomic) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule; // ivar: _cameraSmartDetectionSettingsModule
@property (retain, nonatomic) HUChimeOnHomePodListItem *chimeOnHomePodListItem; // ivar: _chimeOnHomePodListItem
@property (retain, nonatomic) HUChimeOnHomePodSingleItem *chimeOnHomePodSingleItem; // ivar: _chimeOnHomePodSingleItem
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // ivar: _conditionModule
@property (nonatomic) BOOL hasDoorbellCamera; // ivar: _hasDoorbellCamera
@property (retain, nonatomic) HFStaticItem *includeInStatusItem; // ivar: _includeInStatusItem
@property (readonly, nonatomic) HFUserNotificationServiceSettings *notificationSettings;
@property (readonly, nonatomic) NSObject<HFUserNotificationServiceSettingsProviding> *notificationSettingsProvider;
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceItem; // ivar: _serviceItem
@property (nonatomic) BOOL serviceItemBelongsToCamera; // ivar: _serviceItemBelongsToCamera
@property (nonatomic) BOOL showStatusSection; // ivar: _showStatusSection
@property (nonatomic) BOOL showsCameraSmartNotificationSection; // ivar: _showsCameraSmartNotificationSection
@property (nonatomic) BOOL showsCameraSnapshotSection; // ivar: _showsCameraSnapshotSection
@property (nonatomic) BOOL showsCameraStatusChangeSection; // ivar: _showsCameraStatusChangeSection
@property (nonatomic) BOOL showsChimeOnHomePodSection; // ivar: _showsChimeOnHomePodSection
@property (nonatomic) BOOL showsForServiceDetails; // ivar: _showsForServiceDetails
@property (nonatomic) BOOL showsSmartActivitySection; // ivar: _showsSmartActivitySection
@property (nonatomic) BOOL showsTriggerConditionSection; // ivar: _showsTriggerConditionSection


-(BOOL)areNotificationsEnabled;
-(BOOL)cameraProfileSupportsSmartNotifications;
-(BOOL)isNonHKSVCameraDoorbell;
-(BOOL)showsActivityNotificationsSection;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_updateNotificationSettings:(id)arg0 ;
-(id)homeStatusVisibleObject;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithServiceItem:(id)arg0 delegate:(id)arg1 home:(id)arg2 ;
-(id)updateAllowCameraReachabilityStatusChangeNotifications:(BOOL)arg0 ;
-(id)updateAllowCameraStatusChangeNotifications:(BOOL)arg0 ;
-(id)updateAllowChimeAnalogNotifications:(BOOL)arg0 ;
-(id)updateAllowDoorbellNotifications:(BOOL)arg0 ;
-(id)updateAllowMotionNotifications:(BOOL)arg0 ;
-(id)updateAllowNotifications:(BOOL)arg0 ;
-(id)updateAllowSmartActivityNotifications:(BOOL)arg0 ;
-(id)updateAllowSnapshotsInNotifications:(BOOL)arg0 ;
-(id)updateCameraSmartNotificationCondition:(id)arg0 ;
-(id)updateChimeOnHomePod:(BOOL)arg0 ;
-(id)updateNotificationCondition:(id)arg0 ;


@end


#endif