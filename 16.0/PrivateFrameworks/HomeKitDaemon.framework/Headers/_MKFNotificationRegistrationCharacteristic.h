// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFNOTIFICATIONREGISTRATIONCHARACTERISTIC_H
#define _MKFNOTIFICATIONREGISTRATIONCHARACTERISTIC_H

@class MKFNotificationRegistration, NSString, NSDate, NSUUID;
@protocol MKFNotificationRegistrationCharacteristic, MKFNotificationRegistrationCharacteristicPrivateExtensions, MKFCharacteristic, MKFHome, MKFUser;


#import "_MKFCharacteristic.h"
#import "MKFNotificationRegistrationCharacteristicDatabaseID.h"

@interface _MKFNotificationRegistrationCharacteristic : MKFNotificationRegistration <MKFNotificationRegistrationCharacteristic, MKFNotificationRegistrationCharacteristicPrivateExtensions>



@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) NSObject<MKFCharacteristic> *characteristic;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSDate *lastModified;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfNotificationRegistrationCharacteristic;


@end


#endif