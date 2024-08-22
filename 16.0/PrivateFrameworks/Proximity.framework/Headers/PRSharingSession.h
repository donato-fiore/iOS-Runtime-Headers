// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSHARINGSESSION_H
#define PRSHARINGSESSION_H

@class NSMutableDictionary, NSString;
@protocol PRProximityEstimatorDelegate, PRBeaconDelegate, OS_os_log, OS_dispatch_queue, PRSharingSessionDelegate;

#import <Foundation/Foundation.h>

#import "PRProximityEstimator.h"
#import "PRBeacon.h"
#import "PRSharingChoice.h"

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate, PRBeaconDelegate>

 {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    PRProximityEstimator *_btProxEstimator;
    NSMutableDictionary *_trackedBTPeers;
    NSMutableDictionary *_trackedBTPeersDevice;
    PRBeacon *_nearbyDaemonSession;
    BOOL _needToRestart;
    id *_reportWatchdog;
    BOOL _scoresReported;
    PRSharingChoice *_sharingChoiceEstimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PRSharingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addRssiSample:(CGFloat)arg0 channel:(unsigned int)arg1 forPeer:(id)arg2 peerDeviceModel:(id)arg3 withError:(*id)arg4 ;
-(BOOL)trackNewBTPeer:(id)arg0 withDviceModel:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)beacon:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)beacon:(id)arg0 didFailWithError:(id)arg1 ;
-(void)beacon:(id)arg0 didOutputRangeResults:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)estimator:(id)arg0 didEstimateProximity:(NSInteger)arg1 toPeer:(id)arg2 ;
-(void)invokeDelegateBlock:(id)arg0 ;
-(void)logScores:(id)arg0 ;
-(void)onNewSharingChoiceScores:(id)arg0 ;
-(void)startInitiating;
-(void)startWatchDogWithDuration:(NSInteger)arg0 ;
-(void)stopInitiating;
-(void)stopProx;
-(void)watchDogTimedOut;


@end


#endif