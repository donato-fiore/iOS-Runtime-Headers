// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMEDIADESTINATIONCONTROLLER_H
#define _MKFMEDIADESTINATIONCONTROLLER_H

@class MKFModel, NSString, NSArray, NSSet, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestinationController, MKFMediaDestinationControllerPrivateExtensions, MKFMediaDestination, MKFHome, MKFAppleMediaAccessory;


#import "_MKFMediaDestination.h"
#import "MKFMediaDestinationControllerDatabaseID.h"
#import "_MKFAppleMediaAccessory.h"

@interface _MKFMediaDestinationController : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestinationController, MKFMediaDestinationControllerPrivateExtensions>



@property (retain, nonatomic) _MKFMediaDestination *currentDestination;
@property (retain, nonatomic) NSObject<MKFMediaDestination> *currentDestination;
@property (readonly, copy, nonatomic) MKFMediaDestinationControllerDatabaseID *databaseID;
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
@property (readonly) NSObject<MKFHome> *home;
@property (retain, nonatomic) _MKFAppleMediaAccessory *mediaAccessory;
@property (readonly, retain, nonatomic) NSObject<MKFAppleMediaAccessory> *mediaAccessory;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfMediaDestinationController;
-(void)addDestinationsObject:(id)arg0 ;
-(void)removeDestinationsObject:(id)arg0 ;


@end


#endif