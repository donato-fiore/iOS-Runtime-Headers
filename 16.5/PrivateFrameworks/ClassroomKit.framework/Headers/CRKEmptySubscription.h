// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKEMPTYSUBSCRIPTION_H
#define CRKEMPTYSUBSCRIPTION_H

@protocol CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKEmptySubscription : NSObject <CRKCancelable>





+(id)errorSubscriptionWithReason:(id)arg0 ;
-(void)cancel;


@end


#endif