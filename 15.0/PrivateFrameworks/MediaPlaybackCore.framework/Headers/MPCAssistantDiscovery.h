// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCASSISTANTDISCOVERY_H
#define MPCASSISTANTDISCOVERY_H


#import <Foundation/Foundation.h>


@interface MPCAssistantDiscovery : NSObject {
    *void _reconSession;
}


@property (nonatomic) BOOL waitForCompleteClusters; // ivar: _waitForCompleteClusters


-(id)init;
-(void)_discoverAirplayDevices:(id)arg0 ;
-(void)dealloc;
-(void)discoverAirplayDevicesMatchingGroupID:(id)arg0 completion:(id)arg1 ;
-(void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)arg0 expectedCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)discoverAirplayDevicesMatchingUIDs:(id)arg0 completion:(id)arg1 ;
-(void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg0 completion:(id)arg1 ;
-(void)stopDiscovery;


@end


#endif