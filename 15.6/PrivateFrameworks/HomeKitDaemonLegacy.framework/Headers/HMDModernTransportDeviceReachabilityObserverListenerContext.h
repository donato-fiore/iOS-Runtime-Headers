// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVERLISTENERCONTEXT_H
#define HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVERLISTENERCONTEXT_H

@class NSHashTable, NSNumber;

#import <Foundation/Foundation.h>


@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject

@property (readonly, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (retain, nonatomic) NSNumber *reachability; // ivar: _reachability


-(id)init;


@end


#endif