// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFCAMERASIGNIFICANTEVENTBULLETINREGISTRATION_H
#define _MKFCAMERASIGNIFICANTEVENTBULLETINREGISTRATION_H

@class MKFBulletinRegistration, NSArray, NSString, NSUUID, NSNumber, NSDate;
@protocol MKFCameraSignificantEventBulletinRegistration, MKFCameraSignificantEventBulletinRegistrationPrivateExtensions, MKFAccessory, MKFHome, MKFUser;


#import "_MKFAccessory.h"
#import "MKFCameraSignificantEventBulletinRegistrationDatabaseID.h"

@interface _MKFCameraSignificantEventBulletinRegistration : MKFBulletinRegistration <MKFCameraSignificantEventBulletinRegistration, MKFCameraSignificantEventBulletinRegistrationPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) MKFCameraSignificantEventBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfCameraSignificantEventBulletinRegistration;


@end


#endif