// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFNETADDRESSMONITOR_H
#define __HMFNETADDRESSMONITOR_H

@protocol OS_dispatch_queue;


#import "HMFNetMonitor.h"
#import "HMFNetAddress.h"

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}


@property (nonatomic) unsigned int currentNetworkFlags; // ivar: _currentNetworkFlags
@property (readonly, nonatomic) *__SCNetworkReachability networkReachabilityRef; // ivar: _networkReachabilityRef


-(NSUInteger)reachabilityPath;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithNetAddress:(id)arg0 ;
-(id)initWithNetService:(id)arg0 ;
-(id)logIdentifier;
-(id)netAddress;
-(id)shortDescription;
-(void)dealloc;
-(void)handleNetworkReachabilityChange:(unsigned int)arg0 ;


@end


#endif