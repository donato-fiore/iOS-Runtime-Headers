// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDAPPSTOREEVENT_H
#define AMDAPPSTOREEVENT_H

@class NSManagedObject, NSString;



@interface AMDAppStoreEvent : NSManagedObject

@property (copy, nonatomic) NSString *adamId;
@property (nonatomic) NSInteger eventTimeMillis;
@property (nonatomic) short eventType;
@property (copy, nonatomic) NSString *sourceSwoosh;
@property (copy, nonatomic) NSString *usecase;
@property (copy, nonatomic) NSString *userId;


+(id)deleteAllEvents:(*id)arg0 ;
+(id)deleteEventsForPredicate:(id)arg0 error:(*id)arg1 ;
+(id)deleteEventsForUser:(id)arg0 error:(*id)arg1 ;
+(id)deleteEventsOlderThan:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)fetchEvents:(*id)arg0 ;
+(id)fetchRequest;
+(id)retrieveEventsOfType:(id)arg0 inPeriod:(id)arg1 forUser:(id)arg2 error:(*id)arg3 ;
+(short)getEventType:(id)arg0 ;
+(unsigned int)saveEvent:(id)arg0 forUser:(id)arg1 error:(*id)arg2 ;


@end


#endif