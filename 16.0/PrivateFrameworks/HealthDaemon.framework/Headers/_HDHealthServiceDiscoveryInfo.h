// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDHEALTHSERVICEDISCOVERYINFO_H
#define _HDHEALTHSERVICEDISCOVERYINFO_H

@class NSMutableSet, CBUUID;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _HDHealthServiceDiscoveryInfo : NSObject {
    NSMutableSet *_peripheralsUUIDs;
    BOOL _alwaysNotify;
    BOOL _requiresActiveScan;
    NSUInteger _discoveryIdentifier;
    id *_discoveryHandler;
    CBUUID *_serviceUUID;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}






@end


#endif