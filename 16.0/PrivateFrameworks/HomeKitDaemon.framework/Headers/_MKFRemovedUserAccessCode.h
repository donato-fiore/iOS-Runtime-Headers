// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFREMOVEDUSERACCESSCODE_H
#define _MKFREMOVEDUSERACCESSCODE_H

@class MKFHomeAccessCode, NSString, NSDate, NSUUID;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRemovedUserAccessCode, MKFRemovedUserAccessCodePrivateExtensions, MKFHome;


#import "MKFRemovedUserAccessCodeDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFRemovedUserAccessCode : MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRemovedUserAccessCode, MKFRemovedUserAccessCodePrivateExtensions>



@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) MKFRemovedUserAccessCodeDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSUUID *userModelID;
@property (copy, nonatomic) NSUUID *userModelID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfRemovedUserAccessCode;


@end


#endif