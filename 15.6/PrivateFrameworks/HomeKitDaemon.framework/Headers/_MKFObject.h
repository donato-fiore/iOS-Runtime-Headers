// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFOBJECT_H
#define _MKFOBJECT_H

@class NSString;
@protocol MKFObject;


#import "HMDManagedObject.h"
#import "MKFObjectDatabaseID.h"

@interface _MKFObject : HMDManagedObject <MKFObject>



@property (readonly, copy, nonatomic) MKFObjectDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backingModelProtocol;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)castIfAccessory;
-(id)castIfAccessoryNetworkProtectionGroup;
-(id)castIfAccessorySetting;
-(id)castIfAccessorySettingConstraint;
-(id)castIfAccessorySettingGroup;
-(id)castIfAccount;
-(id)castIfAccountHandle;
-(id)castIfAction;
-(id)castIfActionSet;
-(id)castIfAirPlayAccessory;
-(id)castIfAnnounceUserSettings;
-(id)castIfAppleMediaAccessory;
-(id)castIfAppleMediaAccessoryResident;
-(id)castIfApplicationData;
-(id)castIfAssistantAccessControl;
-(id)castIfBulletinCondition;
-(id)castIfBulletinRegistration;
-(id)castIfBulletinTimeSpecification;
-(id)castIfCalendarEvent;
-(id)castIfCameraAccessModeBulletinRegistration;
-(id)castIfCameraReachabilityBulletinRegistration;
-(id)castIfCameraSignificantEventBulletinRegistration;
-(id)castIfCharacteristic;
-(id)castIfCharacteristicBulletinRegistration;
-(id)castIfCharacteristicEvent;
-(id)castIfCharacteristicRangeEvent;
-(id)castIfCharacteristicValueEvent;
-(id)castIfCharacteristicWriteAction;
-(id)castIfDevice;
-(id)castIfDeviceCapabilities;
-(id)castIfDurationEvent;
-(id)castIfEvent;
-(id)castIfEventTrigger;
-(id)castIfFloatCharacteristic;
-(id)castIfHAPAccessory;
-(id)castIfHAPMetadata;
-(id)castIfHome;
-(id)castIfHomeManager;
-(id)castIfHomeManagerHome;
-(id)castIfHomeMediaSetting;
-(id)castIfHomeNetworkRouterManagingDeviceSetting;
-(id)castIfHomeNetworkRouterSetting;
-(id)castIfHomePersonManagerSetting;
-(id)castIfHomeSetting;
-(id)castIfHomeSoftwareUpdateSetting;
-(id)castIfHomeThreadNetwork;
-(id)castIfIncomingInvitation;
-(id)castIfIntegerCharacteristic;
-(id)castIfInvitation;
-(id)castIfLocationEvent;
-(id)castIfMediaAccessory;
-(id)castIfMediaDestination;
-(id)castIfMediaDestinationController;
-(id)castIfMediaGroup;
-(id)castIfMediaPlaybackAction;
-(id)castIfMediaSystem;
-(id)castIfModel;
-(id)castIfNaturalLightingAction;
-(id)castIfOutgoingInvitation;
-(id)castIfPresenceBulletinCondition;
-(id)castIfPresenceEvent;
-(id)castIfResident;
-(id)castIfRoom;
-(id)castIfService;
-(id)castIfServiceGroup;
-(id)castIfShortcutAction;
-(id)castIfSignificantTimeEvent;
-(id)castIfSoftwareUpdate;
-(id)castIfStringCharacteristic;
-(id)castIfSunriseSunsetTimeSpecification;
-(id)castIfTimeOfDayTimeSpecification;
-(id)castIfTimePeriodBulletinCondition;
-(id)castIfTimerTrigger;
-(id)castIfTrigger;
-(id)castIfUser;
-(id)castIfZone;


@end


#endif