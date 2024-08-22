// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFACCOUNTHANDLE_H
#define _MKFACCOUNTHANDLE_H

@class MKFModel, NSString, NSUUID, IDSURI, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccountHandle, MKFAccountHandlePrivateExtensions, MKFAccount;


#import "_MKFAccount.h"
#import "MKFAccountHandleDatabaseID.h"

@interface _MKFAccountHandle : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccountHandle, MKFAccountHandlePrivateExtensions>



@property (retain, nonatomic) _MKFAccount *account;
@property (readonly, retain, nonatomic) NSObject<MKFAccount> *account;
@property (readonly, copy, nonatomic) MKFAccountHandleDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) IDSURI *idsURI;
@property (retain, nonatomic) IDSURI *idsURI;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAccountHandle;


@end


#endif