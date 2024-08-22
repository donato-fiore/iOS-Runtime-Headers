// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBTLOCALIZER_H
#define PRBTLOCALIZER_H

@class NSTimer, NSString, NSUUID, PRRemoteDevice, PRBTRangingSession, NSNumber;
@protocol PRBTRangingSessionDelegate, OS_os_log, PRBTLocalizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PRBTCoreAnalytics.h"
#import "PRBTProximityMeasurement.h"

@interface PRBTLocalizer : NSObject <PRBTRangingSessionDelegate>

 {
    unique_ptr<BTFinding::PRRSSIFilter, std::default_delete<BTFinding::PRRSSIFilter>> _rssiFilter;
    NSObject<OS_os_log> *_logger;
    int _clientState;
    NSUInteger _localizerState;
    BOOL _didFetchTxPower;
    BOOL _isUT;
    BOOL _shouldLogAnalytics;
    CGFloat _lastMeasurementTime;
}


@property (retain, nonatomic) PRBTCoreAnalytics *analytics; // ivar: _analytics
@property (retain, nonatomic) NSTimer *btTrendTimer; // ivar: _btTrendTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRBTLocalizerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *estimatorQueue; // ivar: _estimatorQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRBTProximityMeasurement *latestProximityMeasurement; // ivar: _latestProximityMeasurement
@property (retain, nonatomic) NSTimer *measurementTimer; // ivar: _measurementTimer
@property (retain, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *proximityQueue; // ivar: _proximityQueue
@property (retain, nonatomic) PRRemoteDevice *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) PRBTRangingSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *txPower; // ivar: _txPower
@property (retain, nonatomic) NSTimer *utRetryTimer; // ivar: _utRetryTimer


+(BOOL)isInternalBuild;
-(BOOL)configure;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 id:(id)arg2 isUT:(BOOL)arg3 productUUID:(id)arg4 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 id:(id)arg2 isUT:(BOOL)arg3 productUUID:(id)arg4 withAnalytics:(BOOL)arg5 ;
-(void)checkForMeasurementTimeout;
-(void)dealloc;
-(void)didConnectDevice:(id)arg0 error:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didFetchTxPower:(id)arg0 fromDevice:(id)arg1 withError:(id)arg2 ;
-(void)didReceiveNewBTRSSI:(id)arg0 ;
-(void)didStartRangingOnDevice:(id)arg0 withError:(id)arg1 ;
-(void)didStopOwnerRangingOnDevice:(id)arg0 withError:(id)arg1 ;
-(void)logEstimatorOutput:(struct RSSIFilterResult )arg0 ;
-(void)notifyDelegateOfFilterOutput:(struct RSSIFilterResult )arg0 ;
-(void)notifyDelegateOfRawMeasurement:(id)arg0 ;
-(void)processRssiMeasurement:(id)arg0 ;
-(void)resetBtTrend;
-(void)sendBTLocalizerChangedState:(NSUInteger)arg0 ;
-(void)updateDelegateWithSelector:(SEL)arg0 object:(id)arg1 ;


@end


#endif