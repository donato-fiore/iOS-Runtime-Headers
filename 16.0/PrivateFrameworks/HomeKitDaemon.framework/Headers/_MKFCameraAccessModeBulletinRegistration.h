// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFCAMERAACCESSMODEBULLETINREGISTRATION_H
#define _MKFCAMERAACCESSMODEBULLETINREGISTRATION_H

@class MKFBulletinRegistration, NSArray, NSString, NSUUID, NSDate;
@protocol MKFCameraAccessModeBulletinRegistration, MKFCameraAccessModeBulletinRegistrationPrivateExtensions, MKFAccessory, MKFHome, MKFUser;


#import "_MKFAccessory.h"
#import "MKFCameraAccessModeBulletinRegistrationDatabaseID.h"

@interface _MKFCameraAccessModeBulletinRegistration : MKFBulletinRegistration <MKFCameraAccessModeBulletinRegistration, MKFCameraAccessModeBulletinRegistrationPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) MKFCameraAccessModeBulletinRegistrationDatabaseID *databaseID;
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
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfCameraAccessModeBulletinRegistration;


@end


#endif