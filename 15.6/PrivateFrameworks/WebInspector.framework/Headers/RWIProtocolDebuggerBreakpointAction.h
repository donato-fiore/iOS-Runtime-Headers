// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDEBUGGERBREAKPOINTACTION_H
#define RWIPROTOCOLDEBUGGERBREAKPOINTACTION_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *data;
@property (nonatomic) BOOL emulateUserGesture;
@property (nonatomic) int identifier;
@property (nonatomic) NSInteger type;


-(id)initWithType:(NSInteger)arg0 ;


@end


#endif