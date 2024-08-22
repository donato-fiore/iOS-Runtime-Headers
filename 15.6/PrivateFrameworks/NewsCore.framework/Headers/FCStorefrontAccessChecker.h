// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSTOREFRONTACCESSCHECKER_H
#define FCSTOREFRONTACCESSCHECKER_H



#import "FCAccessChecker.h"
#import "FCPrivateChannelMembershipController.h"

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // ivar: _privateChannelMembershipController


-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg0 ;
-(BOOL)hasAccessToItem:(id)arg0 blockedReason:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPrivateChannelMembershipController:(id)arg0 ;


@end


#endif