// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDAUTOMATIONEVENT_H
#define WFADDAUTOMATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAddAutomationEvent : WFEvent

@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *triggerType; // ivar: _triggerType


+(Class)codableEventClass;


@end


#endif