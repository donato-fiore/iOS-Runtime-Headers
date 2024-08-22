// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCISSUEACCESSCHECKER_H
#define FCISSUEACCESSCHECKER_H

@protocol FCPaidAccessCheckerType;


#import "FCMultiAccessChecker.h"
#import "FCPrivateChannelMembershipController.h"

@interface FCIssueAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) NSObject<FCPaidAccessCheckerType> *paidAccessChecker; // ivar: _paidAccessChecker
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // ivar: _privateChannelMembershipController


-(id)init;
-(id)initWithAccessCheckers:(id)arg0 ;
-(id)initWithPaidAccessChecker:(id)arg0 privateChannelMembershipController:(id)arg1 ;


@end


#endif