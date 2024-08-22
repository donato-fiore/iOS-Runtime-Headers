// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPNETWORKPLAYABILITYMONITOR_H
#define MPNETWORKPLAYABILITYMONITOR_H

@class NSString;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver>

 {
    NSInteger _effectiveNetworkTypeForCloudPlayback;
    NSInteger _networkType;
    CGFloat _lastAverageBitrate;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveNetworkTypeForPlayback;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastAverageBitrate;
@property (readonly, nonatomic) NSInteger networkType;
@property (readonly) Class superclass;


+(id)sharedNetworkPlayabilityMonitor;
-(NSInteger)_onQueueEffectiveNetworkTypeForAverageBitrate:(CGFloat)arg0 ;
-(id)init;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;


@end


#endif