// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONFIGUREDTRIGGERREALMOBJECT_H
#define WFCONFIGUREDTRIGGERREALMOBJECT_H

@class NSString, NSData;
@protocol WFRecordStorage;


#import "RLMObject.h"

@interface WFConfiguredTriggerRealmObject : RLMObject <WFRecordStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPrompt; // ivar: _shouldPrompt
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *triggerData; // ivar: _triggerData
@property (copy, nonatomic) NSString *triggerID; // ivar: _triggerID
@property (copy, nonatomic) NSString *workflowID; // ivar: _workflowID


+(id)defaultPropertyValues;
+(id)primaryKey;
+(id)requiredProperties;
-(id)descriptor;
-(id)identifier;
-(id)trigger;


@end


#endif