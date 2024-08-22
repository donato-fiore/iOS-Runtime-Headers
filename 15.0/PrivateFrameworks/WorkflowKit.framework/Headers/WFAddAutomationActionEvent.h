// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFADDAUTOMATIONACTIONEVENT_H
#define WFADDAUTOMATIONACTIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAddAutomationActionEvent : WFEvent

@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) unsigned int actionIndex; // ivar: _actionIndex
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier


+(Class)codableEventClass;


@end


#endif