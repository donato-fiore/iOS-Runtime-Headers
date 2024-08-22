// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLDEBUGGERBREAKPOINTPAUSEREASON_H
#define RWIPROTOCOLDEBUGGERBREAKPOINTPAUSEREASON_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDebuggerBreakpointPauseReason : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *breakpointId;


-(id)initWithBreakpointId:(id)arg0 ;


@end


#endif