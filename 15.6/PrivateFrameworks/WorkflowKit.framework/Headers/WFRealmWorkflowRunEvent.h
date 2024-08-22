// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREALMWORKFLOWRUNEVENT_H
#define WFREALMWORKFLOWRUNEVENT_H

@class NSDate, NSString;
@protocol WFRecordStorage;


#import "RLMObject.h"
#import "WFRealmWorkflow.h"

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage>



@property (retain) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier; // ivar: _identifier
@property NSInteger outcome; // ivar: _outcome
@property NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (copy) NSString *triggerID; // ivar: _triggerID
@property (retain) WFRealmWorkflow *workflow; // ivar: _workflow


+(id)className;
+(id)defaultPropertyValues;
+(id)primaryKey;
+(id)requiredProperties;
-(id)descriptor;


@end


#endif