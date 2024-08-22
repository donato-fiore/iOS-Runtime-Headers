// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFSIGNIFICANTTIMEEVENT_H
#define _MKFSIGNIFICANTTIMEEVENT_H

@class MKFEvent, NSString, NSNumber, NSUUID, NSData, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSignificantTimeEvent, MKFSignificantTimeEventPrivateExtensions, MKFHome, MKFEventTrigger;


#import "MKFSignificantTimeEventDatabaseID.h"

@interface _MKFSignificantTimeEvent : MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSignificantTimeEvent, MKFSignificantTimeEventPrivateExtensions>



@property (readonly, copy, nonatomic) MKFSignificantTimeEventDatabaseID *databaseID;
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
@property (retain, nonatomic) NSData *offset;
@property (retain, nonatomic) NSData *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFEventTrigger> *trigger;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfSignificantTimeEvent;
-(void)awakeFromFetch;


@end


#endif