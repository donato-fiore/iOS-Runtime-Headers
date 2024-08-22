// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKRESTRICTIONS_H
#define CRKRESTRICTIONS_H


#import <Foundation/Foundation.h>


@interface CRKRestrictions : NSObject



+(id)classroomAirPlayAllowed;
+(id)classroomAutomaticallyJoinClassesForced;
+(id)classroomDeviceSettingsModificationAllowed;
+(id)classroomLockDeviceAllowed;
+(id)classroomOpenAppAllowed;
+(id)classroomOpenDeepLinkAllowed;
+(id)classroomOpenURLAllowed;
+(id)classroomRequestPermissionToLeaveClassesForced;
+(id)classroomRoles;
+(id)classroomScreenObservationAllowed;
+(id)classroomUnpromptedAppAndDeviceLockForced;
+(id)classroomUnpromptedScreenObservationForced;
+(id)didChangeNotification;
+(id)remoteScreenObservationAllowed;
+(id)screenShotAllowed;
+(id)unpromptedRemoteScreenObservationForced;


@end


#endif