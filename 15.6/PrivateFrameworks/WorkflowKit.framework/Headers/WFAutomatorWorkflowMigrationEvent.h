// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATORWORKFLOWMIGRATIONEVENT_H
#define WFAUTOMATORWORKFLOWMIGRATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAutomatorWorkflowMigrationEvent : WFEvent

@property (nonatomic) unsigned int automatorActionCount; // ivar: _automatorActionCount
@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif