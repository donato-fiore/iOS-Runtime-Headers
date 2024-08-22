// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCTESTMONITOR_H
#define AVCTESTMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCTestMonitor : NSObject {
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
    unsigned int _reportToken;
}




-(id)delegate;
-(id)delegateNotificationQueue;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)forceNetworkCellular:(BOOL)arg0 ;
-(void)registerBlocksForNotifications;
-(void)requestSessionMediaDaemonStatsReport;
-(void)setEmulatedNetworkConfigurationPath:(id)arg0 ;
-(void)setEmulatedRxPLR:(CGFloat)arg0 ;
-(void)setEnableAudioPowerSpectrumReport:(BOOL)arg0 ;
-(void)setEnableLoopbackInterface:(BOOL)arg0 ;
-(void)setEnableOneToOneMode:(BOOL)arg0 ;
-(void)setForcedCapBitrate:(int)arg0 ;
-(void)setForcedTargetBitrate:(int)arg0 ;
-(void)setupNotificationQueue:(id)arg0 ;
-(void)updateAudioInjectConfig:(id)arg0 ;


@end


#endif