// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBULLETINNOTIFICATIONREGISTRATIONUTILITIES_H
#define HMDBULLETINNOTIFICATIONREGISTRATIONUTILITIES_H

@class HMFObject;



@interface HMDBulletinNotificationRegistrationUtilities : HMFObject



+(id)accessoryRegistrationFromLocalRegistration:(id)arg0 ;
+(id)accessoryRegistrationFromMKFRegistration:(id)arg0 ;
+(id)cameraAccessModeRegistrationFromLocalRegistration:(id)arg0 ;
+(id)cameraAccessModeRegistrationFromMKFRegistration:(id)arg0 ;
+(id)cameraReachabilityRegistrationFromLocalRegistration:(id)arg0 ;
+(id)cameraReachabilityRegistrationFromMKFRegistration:(id)arg0 ;
+(id)cameraSignificantEventRegistrationFromLocalRegistration:(id)arg0 ;
+(id)cameraSignificantEventRegistrationFromMKFRegistration:(id)arg0 ;
+(id)conditionsFromLocalConditions:(id)arg0 ;
+(id)conditionsFromMKFConditions:(id)arg0 ;
+(id)createAndAddLocalConditionsToRegistration:(id)arg0 moc:(id)arg1 conditions:(id)arg2 ;
+(id)createAndAddLocalPresenceConditionToRegistration:(id)arg0 moc:(id)arg1 condition:(id)arg2 ;
+(id)createAndAddLocalTimePeriodConditionToRegistration:(id)arg0 moc:(id)arg1 condition:(id)arg2 ;
+(id)createLocalElementFromSunriseSunset:(id)arg0 moc:(id)arg1 ;
+(id)createLocalElementFromTimeOfDay:(id)arg0 moc:(id)arg1 ;


@end


#endif