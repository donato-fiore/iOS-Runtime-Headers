// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFUSERACCESSCODE_H
#define _MKFUSERACCESSCODE_H

@class MKFHomeAccessCode, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserAccessCode, MKFUserAccessCodePrivateExtensions, MKFHome, MKFUser;


#import "MKFUserAccessCodeDatabaseID.h"
#import "_MKFUser.h"

@interface _MKFUserAccessCode : MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserAccessCode, MKFUserAccessCodePrivateExtensions>



@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) MKFUserAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFUser *user;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfUserAccessCode;


@end


#endif