// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRUNACTIONEVENT_H
#define WFRUNACTIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFRunActionEvent : WFEvent

@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (nonatomic) BOOL isInvalidatedSystemAction; // ivar: _isInvalidatedSystemAction
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *runSource; // ivar: _runSource
@property (copy, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


+(Class)codableEventClass;


@end


#endif