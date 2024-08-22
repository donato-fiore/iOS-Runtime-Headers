// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPOWERASSERTION_H
#define MCPOWERASSERTION_H



#import "MCProcessAssertion.h"

@interface MCPowerAssertion : MCProcessAssertion

@property (readonly, nonatomic, getter=isParked) BOOL parked; // ivar: _parked


-(id)initWithReason:(id)arg0 ;
-(void)dealloc;
-(void)park;
-(void)unpark;


@end


#endif