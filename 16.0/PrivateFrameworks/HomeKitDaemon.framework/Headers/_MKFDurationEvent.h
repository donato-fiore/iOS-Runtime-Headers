// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFDURATIONEVENT_H
#define _MKFDURATIONEVENT_H

@class MKFEvent, NSString, NSNumber, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDurationEvent, MKFDurationEventPrivateExtensions, MKFHome, MKFEventTrigger;


#import "MKFDurationEventDatabaseID.h"

@interface _MKFDurationEvent : MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDurationEvent, MKFDurationEventPrivateExtensions>



@property (readonly, copy, nonatomic) MKFDurationEventDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *endEvent;
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


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfDurationEvent;


@end


#endif