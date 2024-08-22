// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDHEALTHKITWORKOUTEVENT_H
#define AMDHEALTHKITWORKOUTEVENT_H

@class NSString;


#import "AMDBaseEvent.h"

@interface AMDHealthKitWorkoutEvent : AMDBaseEvent

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityUUID;
@property (nonatomic) NSInteger eventTime;
@property (nonatomic) short eventType;
@property (nonatomic) BOOL isFirstPartyDonation;
@property (nonatomic) BOOL isIndoor;
@property (nonatomic) BOOL isUpdate;


+(BOOL)validateInput:(id)arg0 ;
+(id)fetchRequest;
-(void)populateRecord:(id)arg0 ;


@end


#endif