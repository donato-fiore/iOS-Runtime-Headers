// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFPRESENCEEVENT_H
#define _MKFPRESENCEEVENT_H

@class MKFEvent, NSNumber, NSString, NSUUID, NSArray, NSSet, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFPresenceEvent, MKFPresenceEventPrivateExtensions, MKFHome, MKFEventTrigger;


#import "MKFPresenceEventDatabaseID.h"

@interface _MKFPresenceEvent : MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFPresenceEvent, MKFPresenceEventPrivateExtensions>



@property (copy, nonatomic) NSNumber *activation;
@property (copy, nonatomic) NSNumber *activation;
@property (readonly, copy, nonatomic) MKFPresenceEventDatabaseID *databaseID;
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
@property (copy, nonatomic) NSString *presenceType;
@property (copy, nonatomic) NSString *presenceType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFEventTrigger> *trigger;
@property (readonly, retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)synchronizeUsersRelationWith:(id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfPresenceEvent;
-(void)addUsersObject:(id)arg0 ;
-(void)removeUsersObject:(id)arg0 ;


@end


#endif