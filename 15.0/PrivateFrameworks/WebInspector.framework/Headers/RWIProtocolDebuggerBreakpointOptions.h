// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLDEBUGGERBREAKPOINTOPTIONS_H
#define RWIPROTOCOLDEBUGGERBREAKPOINTOPTIONS_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL autoContinue;
@property (copy, nonatomic) NSString *condition;
@property (nonatomic) int ignoreCount;




@end


#endif