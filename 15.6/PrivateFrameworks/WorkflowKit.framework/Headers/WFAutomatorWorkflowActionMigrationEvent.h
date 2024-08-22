// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATORWORKFLOWACTIONMIGRATIONEVENT_H
#define WFAUTOMATORWORKFLOWACTIONMIGRATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAutomatorWorkflowActionMigrationEvent : WFEvent

@property (copy, nonatomic) NSString *automatorActionIdentifier; // ivar: _automatorActionIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif