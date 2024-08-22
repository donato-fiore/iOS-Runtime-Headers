// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLDEBUGGERCSPVIOLATIONPAUSEREASON_H
#define RWIPROTOCOLDEBUGGERCSPVIOLATIONPAUSEREASON_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDebuggerCSPViolationPauseReason : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *directive;


-(id)initWithDirective:(id)arg0 ;


@end


#endif