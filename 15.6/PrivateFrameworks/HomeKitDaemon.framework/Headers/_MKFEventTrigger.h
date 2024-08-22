// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFEVENTTRIGGER_H
#define _MKFEVENTTRIGGER_H

@class MKFTrigger, NSArray, NSNumber, NSString, NSData, NSSet, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions, MKFHome, MKFUser;


#import "MKFEventTriggerDatabaseID.h"

@interface _MKFEventTrigger : MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions>



@property (retain, nonatomic) NSArray *actionSets;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy, nonatomic) MKFEventTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (readonly, retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSSet *events_;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (retain, nonatomic) NSData *recurrences;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfEventTrigger;
-(id)findEventsRelationOfTypeCalendarEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypeDurationEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypeLocationEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypePresenceEventWithModelID:(id)arg0 ;
-(id)findEventsRelationOfTypeSignificantTimeEventWithModelID:(id)arg0 ;
-(id)materializeOrCreateEventsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;


@end


#endif