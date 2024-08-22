// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTDATADELEGATE_H
#define CTDATADELEGATE_H

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CTDataDelegate : NSObject <CoreTelephonyClientDataDelegate>

 {
    NSObject<OS_dispatch_queue> *_initiationQueue;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getCTClient;
-(id)getPreferredDataSubscriptionContext;
-(id)init;
-(void)_initCTClient;
-(void)preferredDataSimChanged:(id)arg0 ;


@end


#endif