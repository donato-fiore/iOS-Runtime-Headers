// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPINTERNETREACHABILITY_H
#define VCPINTERNETREACHABILITY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPInternetReachability : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    *__SCNetworkReachability _reachability;
}


@property (readonly, nonatomic) BOOL hasWifiOrEthernetConnection; // ivar: _hasWifiOrEthernetConnection


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setReachabilityForFlags:(unsigned int)arg0 update:(BOOL)arg1 ;


@end


#endif