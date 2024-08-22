// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFZONE_H
#define _MKFZONE_H

@class MKFModel, NSString, NSUUID, NSArray, NSSet, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFZone, MKFZonePrivateExtensions, MKFHome;


#import "MKFZoneDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFZone : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFZone, MKFZonePrivateExtensions>



@property (readonly, copy, nonatomic) MKFZoneDatabaseID *databaseID;
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
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSArray *rooms;
@property (retain, nonatomic) NSSet *rooms_;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfZone;
-(void)addRoomsObject:(id)arg0 ;
-(void)removeRoomsObject:(id)arg0 ;


@end


#endif