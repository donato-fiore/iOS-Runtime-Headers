// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFCHARACTERISTICRANGEEVENT_H
#define _MKFCHARACTERISTICRANGEEVENT_H

@class MKFCharacteristicEvent, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicRangeEvent, MKFCharacteristicRangeEventPrivateExtensions, MKFHome, MKFService, MKFEventTrigger;

#import <Foundation/Foundation.h>

#import "MKFCharacteristicRangeEventDatabaseID.h"

@interface _MKFCharacteristicRangeEvent : MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicRangeEvent, MKFCharacteristicRangeEventPrivateExtensions>



@property (copy, nonatomic) NSNumber *characteristicID;
@property (readonly, copy, nonatomic) MKFCharacteristicRangeEventDatabaseID *databaseID;
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
@property (retain, nonatomic) NSObject *max;
@property (retain, nonatomic) NSObject *max;
@property (retain, nonatomic) NSObject *min;
@property (retain, nonatomic) NSObject *min;
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
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(BOOL)validateMax:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateMin:(*id)arg0 error:(*id)arg1 ;
-(id)castIfCharacteristicRangeEvent;


@end


#endif