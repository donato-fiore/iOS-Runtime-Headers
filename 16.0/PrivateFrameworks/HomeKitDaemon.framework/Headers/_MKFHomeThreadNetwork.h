// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHOMETHREADNETWORK_H
#define _MKFHOMETHREADNETWORK_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeThreadNetwork, MKFHomeThreadNetworkPrivateExtensions, MKFHome;


#import "MKFHomeThreadNetworkDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFHomeThreadNetwork : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeThreadNetwork, MKFHomeThreadNetworkPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomeThreadNetworkDatabaseID *databaseID;
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
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *threadNetworkID;
@property (copy, nonatomic) NSString *threadNetworkID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeThreadNetwork;


@end


#endif