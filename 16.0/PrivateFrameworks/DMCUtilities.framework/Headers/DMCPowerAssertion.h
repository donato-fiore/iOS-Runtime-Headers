// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCPOWERASSERTION_H
#define DMCPOWERASSERTION_H



#import "DMCProcessAssertion.h"

@interface DMCPowerAssertion : DMCProcessAssertion

@property (readonly, nonatomic, getter=isParked) BOOL parked; // ivar: _parked


-(id)initWithReason:(id)arg0 ;
-(void)dealloc;
-(void)park;
-(void)unpark;


@end


#endif