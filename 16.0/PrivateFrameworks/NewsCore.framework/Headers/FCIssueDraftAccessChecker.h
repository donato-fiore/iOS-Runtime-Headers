// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCISSUEDRAFTACCESSCHECKER_H
#define FCISSUEDRAFTACCESSCHECKER_H



#import "FCAccessChecker.h"
#import "FCPrivateChannelMembershipController.h"

@interface FCIssueDraftAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // ivar: _privateChannelMembershipController


-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg0 ;
-(BOOL)hasAccessToItem:(id)arg0 blockedReason:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)shouldShowAllDraftContent;
-(id)init;
-(id)initWithPrivateChannelMembershipController:(id)arg0 ;
-(void)checkAccessToItem:(id)arg0 withQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif