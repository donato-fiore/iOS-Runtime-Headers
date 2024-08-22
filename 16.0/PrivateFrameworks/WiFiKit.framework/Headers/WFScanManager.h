// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSCANMANAGER_H
#define WFSCANMANAGER_H

@class NSMutableSet, NSMutableArray;
@protocol WFScanManagerDelegate, OS_dispatch_queue, WFScanManagerScanProxy;

#import <Foundation/Foundation.h>


@interface WFScanManager : NSObject

@property NSUInteger consecutiveZeroFilteredScanResults; // ivar: _consecutiveZeroFilteredScanResults
@property NSUInteger consecutiveZeroUnFilteredScanResults; // ivar: _consecutiveZeroUnFilteredScanResults
@property (weak, nonatomic) NSObject<WFScanManagerDelegate> *delegate; // ivar: _delegate
@property BOOL doUnFilteredScanning; // ivar: _doUnFilteredScanning
@property (nonatomic) BOOL hotspotHelperScanning; // ivar: _hotspotHelperScanning
@property (retain, nonatomic) NSMutableSet *hotspotPluginNetworks; // ivar: _hotspotPluginNetworks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSMutableSet *networks; // ivar: _networks
@property NSInteger numberOfScansPerformed; // ivar: _numberOfScansPerformed
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanDispatchQueue; // ivar: _scanDispatchQueue
@property (nonatomic) CGFloat scanInterval; // ivar: _scanInterval
@property (retain, nonatomic) NSObject<WFScanManagerScanProxy> *scanProxy; // ivar: _scanProxy
@property (retain, nonatomic) NSMutableArray *scanQueue; // ivar: _scanQueue
@property (copy, nonatomic) id *singleScanBlock; // ivar: _singleScanBlock
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) BOOL supportsHotspotHelper; // ivar: _supportsHotspotHelper
@property (nonatomic) BOOL supportsUnfilteredScanning; // ivar: _supportsUnfilteredScanning


-(BOOL)_canResumeScanning;
-(BOOL)_isScanning;
-(CGFloat)setTwentyPercentSkew:(CGFloat)arg0 ;
-(id)_knownHiddenNetworkNames;
-(id)hotspotHelperForScanRecord:(id)arg0 ;
-(id)init;
-(id)initWithScanProxy:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelQueuedScan;
-(void)_checkForNoNetworksFound;
-(void)_processNextScan;
-(void)_queueScan;
-(void)_removeQueuedScans;
-(void)_resetNoNetworksFoundCounters;
-(void)_scan;
-(void)_scanningDidFinishWithError:(id)arg0 ;
-(void)_scanningWillStart;
-(void)_startHotspotPluginScan;
-(void)_stopNetworkPluginScan;
-(void)_updatePartialScanResults:(id)arg0 ;
-(void)pause;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif