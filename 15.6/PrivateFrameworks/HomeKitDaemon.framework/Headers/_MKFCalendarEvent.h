// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFCALENDAREVENT_H
#define _MKFCALENDAREVENT_H

@class MKFEvent, NSString, NSNumber, NSData, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCalendarEvent, MKFCalendarEventPrivateExtensions, MKFHome, MKFEventTrigger;


#import "MKFCalendarEventDatabaseID.h"

@interface _MKFCalendarEvent : MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCalendarEvent, MKFCalendarEventPrivateExtensions>



@property (readonly, copy, nonatomic) MKFCalendarEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *endEvent;
@property (retain, nonatomic) NSData *fireDateComponents;
@property (retain, nonatomic) NSData *fireDateComponents;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFEventTrigger> *trigger;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfCalendarEvent;


@end


#endif