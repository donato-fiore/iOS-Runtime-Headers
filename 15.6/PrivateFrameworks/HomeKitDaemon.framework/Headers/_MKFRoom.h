// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFROOM_H
#define _MKFROOM_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRoom, MKFRoomPrivateExtensions, MKFApplicationData, MKFHome;


#import "_MKFApplicationData.h"
#import "MKFRoomDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFRoom : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRoom, MKFRoomPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSSet *accessories_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (readonly, copy, nonatomic) MKFRoomDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (retain, nonatomic) NSSet *zones_;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfRoom;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;


@end


#endif