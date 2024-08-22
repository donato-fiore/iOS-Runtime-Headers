// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICORETELEPHONYPOSTPONEMENTCACHE_H
#define PSUICORETELEPHONYPOSTPONEMENTCACHE_H

@class CTActivationPolicyState, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonyPostponementCache : NSObject <CoreTelephonyClientSubscriberDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) CTActivationPolicyState *activationPolicyState; // ivar: _activationPolicyState
@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getActivationPolicyState;
-(id)init;
-(id)initPrivate;
-(void)fetchActivationPolicyState;
-(void)willEnterForeground;


@end


#endif