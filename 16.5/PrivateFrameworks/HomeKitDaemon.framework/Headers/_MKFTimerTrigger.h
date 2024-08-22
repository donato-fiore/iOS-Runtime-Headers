// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFTIMERTRIGGER_H
#define _MKFTIMERTRIGGER_H

@class MKFTrigger, NSArray, NSNumber, NSString, NSDate, NSTimeZone, NSDateComponents, NSUUID, NSData;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTimerTrigger, MKFTimerTriggerPrivateExtensions, MKFHome, MKFUser;


#import "MKFTimerTriggerDatabaseID.h"

@interface _MKFTimerTrigger : MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTimerTrigger, MKFTimerTriggerPrivateExtensions>



@property (retain, nonatomic) NSArray *actionSets;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy, nonatomic) MKFTimerTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (copy, nonatomic) NSNumber *recurrenceDays;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSData *recurrences;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (retain, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSNumber *significantEventOffsetSeconds;
@property (copy, nonatomic) NSNumber *significantEventOffsetSeconds;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfTimerTrigger;
-(void)awakeFromFetch;


@end


#endif