// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFOBJECT_H
#define _MKFOBJECT_H

@class NSString;
@protocol MKFObjectCasting, MKFObject;


#import "HMDManagedObject.h"
#import "MKFObjectDatabaseID.h"

@interface _MKFObject : HMDManagedObject <MKFObjectCasting, MKFObject>



@property (readonly, copy, nonatomic) MKFObjectDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backingModelProtocol;
-(id)castIfAccessory;
-(id)castIfAccessoryNetworkProtectionGroup;
-(id)castIfAccount;
-(id)castIfAccountHandle;
-(id)castIfAction;
-(id)castIfActionSet;
-(id)castIfAirPlayAccessory;
-(id)castIfAnalysisEventBulletinRegistration;
-(id)castIfAppleMediaAccessory;
-(id)castIfAppleMediaAccessoryPowerAction;
-(id)castIfApplicationData;
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
-(id)castIfDurationEvent;
-(id)castIfEvent;
-(id)castIfEventTrigger;
-(id)castIfFloatCharacteristic;
-(id)castIfGuestAccessCode;
-(id)castIfHAPAccessory;
-(id)castIfHAPMetadata;
-(id)castIfHome;
-(id)castIfHomeAccessCode;
-(id)castIfHomeManager;
-(id)castIfHomeManagerHome;
-(id)castIfHomeMediaSetting;
-(id)castIfHomeNetworkRouterManagingDeviceSetting;
-(id)castIfHomeNetworkRouterSetting;
-(id)castIfHomePerson;
-(id)castIfHomePersonManagerSetting;
-(id)castIfHomeSetting;
-(id)castIfHomeSoftwareUpdateSetting;
-(id)castIfHomeThreadNetwork;
-(id)castIfIncomingInvitation;
-(id)castIfIntegerCharacteristic;
-(id)castIfInvitation;
-(id)castIfLocationEvent;
-(id)castIfMediaAccessory;
-(id)castIfMediaPlaybackAction;
-(id)castIfNaturalLightingAction;
-(id)castIfNotificationRegistration;
-(id)castIfNotificationRegistrationCharacteristic;
-(id)castIfNotificationRegistrationMediaProperty;
-(id)castIfOutgoingInvitation;
-(id)castIfPerson;
-(id)castIfPhotosPerson;
-(id)castIfPresenceBulletinCondition;
-(id)castIfPresenceEvent;
-(id)castIfRemovedUserAccessCode;
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
-(id)castIfUserAccessCode;
-(id)castIfZone;


@end


#endif