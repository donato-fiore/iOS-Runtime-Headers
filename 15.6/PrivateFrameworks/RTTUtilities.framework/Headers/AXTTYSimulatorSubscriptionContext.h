// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXTTYSIMULATORSUBSCRIPTIONCONTEXT_H
#define AXTTYSIMULATORSUBSCRIPTIONCONTEXT_H

@class CTXPCServiceSubscriptionContext, NSUUID;



@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext

@property (retain, nonatomic) NSUUID *testUuid; // ivar: _testUuid


-(id)init;
-(id)uuid;


@end


#endif