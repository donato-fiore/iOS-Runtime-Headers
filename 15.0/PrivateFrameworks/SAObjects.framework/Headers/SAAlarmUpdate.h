// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAALARMUPDATE_H
#define SAALARMUPDATE_H

@class NSArray, NSURL, NSString, NSNumber;
@protocol SAAlarmAlarmAction;


#import "SADomainCommand.h"

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>



@property (copy, nonatomic) NSArray *addedFrequency;
@property (copy, nonatomic) NSURL *alarmId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSArray *modifications;
@property (copy, nonatomic) NSArray *removedFrequency;
@property (readonly) Class superclass;


+(id)update;
+(id)updateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif