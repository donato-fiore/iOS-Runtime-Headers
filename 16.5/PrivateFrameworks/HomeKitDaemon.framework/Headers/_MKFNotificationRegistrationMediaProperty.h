// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFNOTIFICATIONREGISTRATIONMEDIAPROPERTY_H
#define _MKFNOTIFICATIONREGISTRATIONMEDIAPROPERTY_H

@class MKFNotificationRegistration, NSString, NSDate, NSUUID;
@protocol MKFNotificationRegistrationMediaProperty, MKFNotificationRegistrationMediaPropertyPrivateExtensions, MKFAccessory, MKFHome, MKFUser;


#import "_MKFAccessory.h"
#import "MKFNotificationRegistrationMediaPropertyDatabaseID.h"

@interface _MKFNotificationRegistrationMediaProperty : MKFNotificationRegistration <MKFNotificationRegistrationMediaProperty, MKFNotificationRegistrationMediaPropertyPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationMediaPropertyDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSUUID *mediaProfileIdentifier;
@property (copy, nonatomic) NSUUID *mediaProfileIdentifier;
@property (copy, nonatomic) NSString *mediaProperty;
@property (copy, nonatomic) NSString *mediaProperty;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfNotificationRegistrationMediaProperty;


@end


#endif