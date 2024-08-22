// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFCHARACTERISTICVALUEEVENT_H
#define _MKFCHARACTERISTICVALUEEVENT_H

@class MKFCharacteristicEvent, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicValueEvent, MKFCharacteristicValueEventPrivateExtensions, MKFHome, MKFService, MKFEventTrigger;

#import <Foundation/Foundation.h>

#import "MKFCharacteristicValueEventDatabaseID.h"

@interface _MKFCharacteristicValueEvent : MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicValueEvent, MKFCharacteristicValueEventPrivateExtensions>



@property (copy, nonatomic) NSNumber *characteristicID;
@property (readonly, copy, nonatomic) MKFCharacteristicValueEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *endEvent;
@property (retain, nonatomic) NSObject *eventValue;
@property (retain, nonatomic) NSObject *eventValue;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFEventTrigger> *trigger;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)validateEventValue:(*id)arg0 error:(*id)arg1 ;
-(id)castIfCharacteristicValueEvent;


@end


#endif