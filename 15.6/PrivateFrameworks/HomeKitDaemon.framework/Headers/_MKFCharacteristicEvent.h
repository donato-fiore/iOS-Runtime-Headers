// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFCHARACTERISTICEVENT_H
#define _MKFCHARACTERISTICEVENT_H

@class MKFEvent, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicEvent, MKFCharacteristicEventPrivateExtensions, MKFHome, MKFService, MKFEventTrigger;


#import "MKFCharacteristicEventDatabaseID.h"
#import "_MKFService.h"

@interface _MKFCharacteristicEvent : MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicEvent, MKFCharacteristicEventPrivateExtensions>



@property (copy, nonatomic) NSNumber *characteristicID;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (readonly, copy, nonatomic) MKFCharacteristicEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFService *service;
@property (retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFEventTrigger> *trigger;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfCharacteristicEvent;


@end


#endif