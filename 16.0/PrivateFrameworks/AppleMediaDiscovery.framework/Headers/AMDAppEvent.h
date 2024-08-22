// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDAPPEVENT_H
#define AMDAPPEVENT_H

@class NSManagedObject, NSString;



@interface AMDAppEvent : NSManagedObject

@property (nonatomic) NSInteger adamId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) float batteryUsage;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) short eventSubType;
@property (copy, nonatomic) NSString *eventVersion;
@property (nonatomic) NSInteger foregroundDuration;
@property (nonatomic) float latitude;
@property (nonatomic) float locationAccuracy;
@property (nonatomic) float longitude;
@property (copy, nonatomic) NSString *miscData;
@property (nonatomic) short networkType;
@property (nonatomic) short platform;
@property (nonatomic) NSInteger storageUsed;
@property (nonatomic) NSInteger time;
@property (nonatomic) NSInteger timeZoneOffset;
@property (nonatomic) short type;
@property (copy, nonatomic) NSString *userId;


+(BOOL)validateInput:(id)arg0 ;
+(id)deleteAllEvents:(*id)arg0 ;
+(id)deleteAllEventsForUser:(id)arg0 error:(*id)arg1 ;
+(id)deleteAppEventsOlderThan:(NSUInteger)arg0 forEventType:(id)arg1 withPlatform:(id)arg2 error:(*id)arg3 ;
+(id)deleteUsingPredicates:(id)arg0 error:(*id)arg1 ;
+(id)fetchEvents:(*id)arg0 ;
+(id)fetchEventsWithPredicate:(id)arg0 error:(*id)arg1 ;
+(id)fetchRequest;
+(id)getEventPlatform:(id)arg0 ;
+(id)getEventSubType:(id)arg0 ;
+(id)getEventType:(id)arg0 ;
+(id)getSegmentsWithLookBack:(id)arg0 andRecencyThreshold:(id)arg1 andFrequencyThreshold:(id)arg2 andDurationThreshold:(id)arg3 withUserId:(id)arg4 error:(*id)arg5 ;
+(unsigned int)saveEvent:(id)arg0 error:(*id)arg1 ;
-(void)populateRecord:(id)arg0 ;


@end


#endif