// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMEDIADESTINATION_H
#define _MKFMEDIADESTINATION_H

@class MKFModel, NSString, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestination, MKFMediaDestinationPrivateExtensions, MKFMediaDestinationController, MKFMediaGroup, MKFHome;


#import "_MKFMediaDestinationController.h"
#import "MKFMediaDestinationDatabaseID.h"
#import "_MKFMediaGroup.h"

@interface _MKFMediaDestination : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestination, MKFMediaDestinationPrivateExtensions>



@property (retain, nonatomic) _MKFMediaDestinationController *currentDestinationOf;
@property (retain, nonatomic) NSObject<MKFMediaDestinationController> *currentDestinationOf;
@property (readonly, copy, nonatomic) MKFMediaDestinationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFMediaDestinationController *destinationController;
@property (retain, nonatomic) NSObject<MKFMediaDestinationController> *destinationController;
@property (retain, nonatomic) _MKFMediaGroup *group;
@property (readonly, retain, nonatomic) NSObject<MKFMediaGroup> *group;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *supportedOptions;
@property (copy, nonatomic) NSNumber *supportedOptions;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfMediaDestination;


@end


#endif