// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAALARMALARMMODIFICATION_H
#define SAALARMALARMMODIFICATION_H

@class NSArray, NSURL, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *addedFrequency;
@property (copy, nonatomic) NSURL *alarmId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSArray *removedFrequency;
@property (readonly) Class superclass;


+(id)alarmModification;
+(id)alarmModificationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif