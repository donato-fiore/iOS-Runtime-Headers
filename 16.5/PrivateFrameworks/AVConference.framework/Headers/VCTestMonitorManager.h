// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTESTMONITORMANAGER_H
#define VCTESTMONITORMANAGER_H

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCTestMonitorManager : NSObject {
    NSNumber *_initialMemoryUsage;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}


@property (retain, nonatomic) NSString *emulatedNetworkConfigPath; // ivar: _emulatedNetworkConfigPath
@property (nonatomic) CGFloat emulatedRxPLR; // ivar: _emulatedRxPLR
@property (nonatomic) BOOL enableAudioPowerSpectrumReport; // ivar: _enableAudioPowerSpectrumReport
@property (nonatomic) BOOL enableLoopbackInterface; // ivar: _enableLoopbackInterface
@property (nonatomic) BOOL enableOneToOneMode; // ivar: _enableOneToOneMode
@property BOOL forceNetworkCellular; // ivar: _forceNetworkCellular
@property (nonatomic) int forcedCapBitrate; // ivar: _forcedCapBitrate
@property (nonatomic) int forcedTargetBitrate; // ivar: _forcedTargetBitrate
@property BOOL toneInjectionEnabled; // ivar: _toneInjectionEnabled


+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)reportSessionMediaDaemonStats:(id)arg0 ;


@end


#endif