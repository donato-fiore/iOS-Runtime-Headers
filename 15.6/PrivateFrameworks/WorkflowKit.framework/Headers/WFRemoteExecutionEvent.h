// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONEVENT_H
#define WFREMOTEEXECUTIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFRemoteExecutionEvent : WFEvent

@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSString *connectionType; // ivar: _connectionType
@property (copy, nonatomic) NSString *destinationType; // ivar: _destinationType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source


+(Class)codableEventClass;


@end


#endif