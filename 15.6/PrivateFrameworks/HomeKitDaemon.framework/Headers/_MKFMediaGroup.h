// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMEDIAGROUP_H
#define _MKFMEDIAGROUP_H

@class MKFModel, NSString, NSArray, NSSet, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaGroup, MKFMediaGroupPrivateExtensions, MKFHome;


#import "MKFMediaGroupDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFMediaGroup : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaGroup, MKFMediaGroupPrivateExtensions>



@property (readonly, copy, nonatomic) MKFMediaGroupDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSArray *destinations;
@property (retain, nonatomic) NSSet *destinations_;
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


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfMediaGroup;


@end


#endif