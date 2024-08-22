// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMINDERDATETIMETRIGGEROFFSET_H
#define SAREMINDERDATETIMETRIGGEROFFSET_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *offsetTimeUnit;
@property (copy, nonatomic) NSNumber *offsetValue;
@property (readonly) Class superclass;


+(id)dateTimeTriggerOffset;
+(id)dateTimeTriggerOffsetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif