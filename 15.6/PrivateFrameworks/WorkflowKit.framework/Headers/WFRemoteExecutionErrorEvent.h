// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONERROREVENT_H
#define WFREMOTEEXECUTIONERROREVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFRemoteExecutionErrorEvent : WFEvent

@property (copy, nonatomic) NSString *destinationType; // ivar: _destinationType
@property (copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source


+(Class)codableEventClass;


@end


#endif