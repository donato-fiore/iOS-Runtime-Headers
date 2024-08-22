// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXMYRIADWIFIASSERTION_H
#define SVXMYRIADWIFIASSERTION_H

@class AFWatchdogTimer;
@protocol SVXMyriadWiFiAssertionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SVXMyriadWiFiAssertion : NSObject

@property (retain, nonatomic) AFWatchdogTimer *assertionWaitTimer; // ivar: _assertionWaitTimer
@property (readonly, weak, nonatomic) NSObject<SVXMyriadWiFiAssertionProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL wifiAssertionAcquired; // ivar: _wifiAssertionAcquired
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_releaseAssertion;
-(void)acquireHomeKitAccessoryWiFiAssertionWithTimeout:(CGFloat)arg0 ;
-(void)releaseHomeKitAccessoryWiFiAssertion;


@end


#endif