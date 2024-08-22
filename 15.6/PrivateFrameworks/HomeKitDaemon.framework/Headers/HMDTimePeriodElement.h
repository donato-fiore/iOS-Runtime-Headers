// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTIMEPERIODELEMENT_H
#define HMDTIMEPERIODELEMENT_H

@class HMFObject;
@protocol HMDBulletinNotificationRegistrationRemoteCoding;



@interface HMDTimePeriodElement : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding>





+(BOOL)doesTypeMatch:(id)arg0 against:(id)arg1 ;
+(id)type;
-(id)initWithDictionary:(id)arg0 ;
-(id)serializedRegistrationForRemoteMessage;


@end


#endif