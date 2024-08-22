// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFNOTIFICATIONREGISTRATION_H
#define _MKFNOTIFICATIONREGISTRATION_H

@class MKFModel, NSString, NSDate, NSUUID;
@protocol MKFNotificationRegistration, MKFNotificationRegistrationPrivateExtensions, MKFHome, MKFUser;


#import "MKFNotificationRegistrationDatabaseID.h"
#import "_MKFUser.h"

@interface _MKFNotificationRegistration : MKFModel <MKFNotificationRegistration, MKFNotificationRegistrationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFNotificationRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFUser *user;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfNotificationRegistration;


@end


#endif