// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFCHARACTERISTICBULLETINREGISTRATION_H
#define _MKFCHARACTERISTICBULLETINREGISTRATION_H

@class MKFBulletinRegistration, NSArray, NSString, NSUUID, NSDate;
@protocol MKFCharacteristicBulletinRegistration, MKFCharacteristicBulletinRegistrationPrivateExtensions, MKFCharacteristic, MKFHome, MKFUser;


#import "_MKFCharacteristic.h"
#import "MKFCharacteristicBulletinRegistrationDatabaseID.h"

@interface _MKFCharacteristicBulletinRegistration : MKFBulletinRegistration <MKFCharacteristicBulletinRegistration, MKFCharacteristicBulletinRegistrationPrivateExtensions>



@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) NSObject<MKFCharacteristic> *characteristic;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) MKFCharacteristicBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfCharacteristicBulletinRegistration;


@end


#endif