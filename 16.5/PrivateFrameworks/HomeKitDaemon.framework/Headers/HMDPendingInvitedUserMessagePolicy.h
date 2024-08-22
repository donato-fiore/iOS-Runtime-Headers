// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPENDINGINVITEDUSERMESSAGEPOLICY_H
#define HMDPENDINGINVITEDUSERMESSAGEPOLICY_H

@class HMFMessagePolicy;


#import "HMDHomeManager.h"

@interface HMDPendingInvitedUserMessagePolicy : HMFMessagePolicy

@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHomeManager:(id)arg0 ;


@end


#endif