// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSUBSCRIPTIONBAG_H
#define AMSSUBSCRIPTIONBAG_H


#import <Foundation/Foundation.h>

#import "AMSFairPlayContext.h"

@interface AMSSubscriptionBag : NSObject

@property (readonly, nonatomic) AMSFairPlayContext *fairPlayContext; // ivar: _fairPlayContext


+(id)sharedInstance;
-(BOOL)_generateSubscriptionBagRequestWithAccountIdentifier:(id)arg0 transactionType:(unsigned int)arg1 machineIDData:(id)arg2 returningSubscriptionBagData:(*id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)subscriptionBagSyncDataForAccount:(id)arg0 ;


@end


#endif