// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSUBSCRIPTIONMANAGER_H
#define CSSUBSCRIPTIONMANAGER_H

@class PSSSSubscriptionManager;

#import <Foundation/Foundation.h>


@interface CSSubscriptionManager : NSObject {
    PSSSSubscriptionManager *_internal;
}




+(id)sharedManager;
-(id)init;
-(void)registerSubscriptionWithInfo:(id)arg0 expirationDate:(id)arg1 ;
-(void)unregisterAllSubscriptions;
-(void)unregisterSubscriptionWithInfo:(id)arg0 ;


@end


#endif