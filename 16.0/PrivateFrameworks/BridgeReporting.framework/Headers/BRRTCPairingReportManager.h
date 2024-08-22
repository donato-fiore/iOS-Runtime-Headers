// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRRTCPAIRINGREPORTMANAGER_H
#define BRRTCPAIRINGREPORTMANAGER_H

@class NSURL, NSString, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRRTCPairingMetric.h"
#import "BRSetupControllerTracker.h"

@interface BRRTCPairingReportManager : NSObject

@property (copy, nonatomic) id *archivePairingMetric; // ivar: _archivePairingMetric
@property (retain, nonatomic) NSURL *currentPairingMetricBridgePlistPath; // ivar: _currentPairingMetricBridgePlistPath
@property (weak, nonatomic) NSString *currentPairingMetricID; // ivar: _currentPairingMetricID
@property (nonatomic) BOOL metricBusy; // ivar: _metricBusy
@property (retain, nonatomic) NSMutableDictionary *openPairingTimeEvents; // ivar: _openPairingTimeEvents
@property (retain, nonatomic) BRRTCPairingMetric *pairingMetric; // ivar: _pairingMetric
@property (nonatomic) BOOL pairingMetricSetup; // ivar: _pairingMetricSetup
@property (retain, nonatomic) NSMutableArray *pendingEvents; // ivar: _pendingEvents
@property (copy, nonatomic) id *pendingMetricSubmission; // ivar: _pendingMetricSubmission
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) BRSetupControllerTracker *setupControllerTracker; // ivar: _setupControllerTracker


-(BOOL)_eventClearedForRecord:(NSUInteger)arg0 ;
-(id)_trimPrecision:(id)arg0 ;
-(id)combineMetricPlistsForArchive:(id)arg0 ;
-(id)deltaForControllerAction:(id)arg0 ;
-(id)initWithPairingBeginsType:(NSUInteger)arg0 ;
-(id)truncateSetupControllerClassName:(id)arg0 ;
-(void)_addEvent:(NSUInteger)arg0 withValue:(id)arg1 withError:(id)arg2 ;
-(void)_addEventToPendingQueue:(NSUInteger)arg0 withValue:(id)arg1 ;
-(void)_cleanupAfterWrite;
-(void)_writeToPairingPlist:(id)arg0 withValue:(id)arg1 ;
-(void)addMetaKeys;
-(void)addPairingTimeEventStringToPairingReportPlist:(NSUInteger)arg0 withValue:(id)arg1 withError:(id)arg2 ;
-(void)addPairingTimeEventToPairingReportPlist:(NSUInteger)arg0 withValue:(id)arg1 withError:(id)arg2 ;
-(void)addPendingEventToMetric;
-(void)archivePairingMetric:(id)arg0 withCompletion:(id)arg1 ;
-(void)checkInWithClosingPairingTimeEvent:(NSUInteger)arg0 ;
-(void)checkInWithController:(id)arg0 action:(NSUInteger)arg1 ;
-(void)checkInWithOpenPairingTimeEvent:(NSUInteger)arg0 ;
-(void)checkInWithRUIController:(id)arg0 ;
-(void)cleanUpMetricDirectoryWithCompletion:(id)arg0 ;
-(void)clearPendingEventQueue;
-(void)completeMetricForAppTermination;
-(void)completePairingMetricWithSuccess:(BOOL)arg0 ;
-(void)completeRTCPairingMetricForMetricID:(id)arg0 withSuccess:(id)arg1 ;
-(void)createPairingReportPlistWithPairingType:(NSUInteger)arg0 ;
-(void)flagForAutomation;
-(void)initializeEndToEndMetric;
-(void)recordSetupController:(id)arg0 action:(NSUInteger)arg1 ;
-(void)setupPairingMetric:(NSUInteger)arg0 ;
-(void)submitAnyPendingMetrics;
-(void)writeDeltasForSetupControllerActions:(id)arg0 action:(NSUInteger)arg1 ;
-(void)writePushOrHoldToPairingPlist:(id)arg0 action:(NSUInteger)arg1 ;


@end


#endif