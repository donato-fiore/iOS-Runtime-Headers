// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2MOBIKE_H
#define NEIKEV2MOBIKE_H

@class NWInterface, NSString;
@protocol NSObject, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEIKEv2PacketTunnelProvider.h"

@interface NEIKEv2MOBIKE : NSObject <NSObject>

 {
    BOOL _mobikeInProgress;
    BOOL _mobikePending;
    BOOL _mobikeReasserting;
    BOOL _mobikeEarlyDisconnect;
    NEIKEv2PacketTunnelProvider *_tunnelProvider;
    NSObject<OS_dispatch_source> *_mobikeWaitTimer;
    NSObject<OS_dispatch_queue> *_mobikeQueue;
    NWInterface *_mobikeInterface;
    NWInterface *_mobikeTransportInterface;
    NSInteger _mobikePathStatus;
    NSUInteger _mobikeTries;
    NSString *_mobikeServer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif