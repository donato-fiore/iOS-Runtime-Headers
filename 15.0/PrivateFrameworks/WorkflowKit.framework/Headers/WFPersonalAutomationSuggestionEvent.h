// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPERSONALAUTOMATIONSUGGESTIONEVENT_H
#define WFPERSONALAUTOMATIONSUGGESTIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFPersonalAutomationSuggestionEvent : WFEvent

@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (nonatomic) BOOL interacted; // ivar: _interacted
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *triggerType; // ivar: _triggerType
@property (nonatomic) BOOL visible; // ivar: _visible


+(Class)codableEventClass;


@end


#endif