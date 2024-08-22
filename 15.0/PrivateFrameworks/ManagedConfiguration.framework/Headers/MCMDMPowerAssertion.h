// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCMDMPOWERASSERTION_H
#define MCMDMPOWERASSERTION_H

@class UMUserSwitchBlockingTask, NSDate;


#import "MCPowerAssertion.h"

@interface MCMDMPowerAssertion : MCPowerAssertion

@property (retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // ivar: _blockingTask
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate


+(id)_currentAssertions;
+(id)_dateFormatter;
+(id)assertionDescriptions;
-(id)description;
-(id)initWithReason:(id)arg0 ;
-(void)dealloc;


@end


#endif