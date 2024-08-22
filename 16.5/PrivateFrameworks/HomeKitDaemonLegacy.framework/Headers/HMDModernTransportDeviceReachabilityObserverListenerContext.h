// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVERLISTENERCONTEXT_H
#define HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVERLISTENERCONTEXT_H

@class NSHashTable, NSNumber;

#import <Foundation/Foundation.h>

#import "HMDDeviceAddress.h"

@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject

@property (retain, nonatomic) HMDDeviceAddress *address; // ivar: _address
@property (readonly, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (retain, nonatomic) NSNumber *reachability; // ivar: _reachability
@property (nonatomic) CGFloat unreachableStartTime; // ivar: _unreachableStartTime


-(id)initWithAddress:(id)arg0 ;


@end


#endif