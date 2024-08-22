// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCNETWORKFEEDBACKCONTROLLER_H
#define VCNETWORKFEEDBACKCONTROLLER_H

@protocol WCMClientDelegate, WRMClientDelegate, VCNetworkFeedbackControllerDelegate;

#import <Foundation/Foundation.h>

#import "VCWCMClient.h"
#import "WRMClient.h"
#import "VCConnectionManager.h"
#import "VCRecommendedNetworkSettings.h"

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate>

 {
    id<VCNetworkFeedbackControllerDelegate> *_weakDelegate;
    VCWCMClient *_WCMClient;
    WRMClient *_WRMClient;
    VCConnectionManager *_connectionManager;
    VCRecommendedNetworkSettings *_recommendedSettings;
    CGFloat _wrmReportingInterval;
    int _wrmPendingBitrateCapDelta;
    BOOL _isWRMNotificationPending;
    ? _savedWRMNotification;
    BOOL _isStarted;
}


@property unsigned int callID; // ivar: _callID
@property unsigned int clientTargetBitrate; // ivar: _clientTargetBitrate
@property unsigned int clientTargetBitrateCap; // ivar: _clientTargetBitrateCap
@property (nonatomic) unsigned int downlinkTargetBitrate; // ivar: _downlinkTargetBitrate
@property (nonatomic) unsigned int downlinkTargetCellBitrateCap; // ivar: _downlinkTargetCellBitrateCap
@property (nonatomic) BOOL isLocalCellular; // ivar: _isLocalCellular
@property (nonatomic) BOOL isVideoPaused; // ivar: _isVideoPaused
@property (readonly) unsigned int recommendedTargetBitrateCap;
@property BOOL shouldSendFeedbackControllerReport; // ivar: _shouldSendFeedbackControllerReport
@property (readonly) *? wrmContext; // ivar: _wrmContext
@property (readonly) *tagWRMMetricsInfo wrmInfo; // ivar: _wrmInfo


-(id)initWithDelegate:(id)arg0 connectionManager:(id)arg1 ;
-(id)strongDelegate;
-(void)cleanupWCMClient;
-(void)cleanupWRMClient;
-(void)cleanupWRMData;
-(void)dealloc;
-(void)initializeWRMInfo;
-(void)reportImmediateWRMMetric:(int)arg0 value:(NSUInteger)arg1 ;
-(void)reportWRMMetrics:(struct ? *)arg0 ;
-(void)requestWRMNotification;
-(void)sendFeedbackControllerReport:(struct ? )arg0 ;
-(void)sendStatusUpdate:(struct ? *)arg0 ;
-(void)setPreWarmState:(BOOL)arg0 ;
-(void)setRSSIThresholdEnabled:(BOOL)arg0 ;
-(void)setWRMCoexMetrics:(id)arg0 ;
-(void)setWRMMetricConfig:(struct ? *)arg0 ;
-(void)setWRMNotification:(struct ? *)arg0 ;
-(void)setupWCMClient;
-(void)setupWRMClientWithMetricsConfig:(struct ? )arg0 ;
-(void)startWithMetricsConfig:(struct ? )arg0 ;
-(void)stop;
-(void)updateMetricsConfig:(struct ? )arg0 ;
-(void)wcmGetCallConfig:(*unsigned int)arg0 targetBitrate:(*unsigned int)arg1 ;
-(void)wcmSetCallConfig:(unsigned int)arg0 interferenceLevel:(unsigned int)arg1 ;


@end


#endif