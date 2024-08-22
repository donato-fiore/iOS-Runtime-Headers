// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNEARBYWATCHNOTIFIER_H
#define PPNEARBYWATCHNOTIFIER_H

@class NSString, NSXPCConnection;
@protocol PPDiscoveryManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PPDiscoveryManager.h"

@interface PPNearbyWatchNotifier : NSObject <PPDiscoveryManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discoveryCompletion; // ivar: _discoveryCompletion
@property (retain, nonatomic) PPDiscoveryManager *discoveryManager; // ivar: _discoveryManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *notificationService; // ivar: _notificationService
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource


+(BOOL)isWatchAppRemoved;
+(BOOL)shouldScanForNearbyDevices;
+(id)sharedNotifier;
-(id)discoverForNearbyWatchesWithCompletion:(id)arg0 ;
-(id)discoverForTimeInterval:(CGFloat)arg0 signalLimit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_cleanupDiscoveryDidFindDevice:(BOOL)arg0 error:(id)arg1 ;
-(void)cancelDiscovery;
-(void)didDiscoverDeviceWithAdvertisingID:(id)arg0 signalStrength:(NSInteger)arg1 ;
-(void)didStopDiscovering;
-(void)prepareServiceConnectionIfNeeded;


@end


#endif