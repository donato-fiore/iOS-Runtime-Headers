// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKNETWORKQUALITYMONITOR_H
#define _DKNETWORKQUALITYMONITOR_H

@class DKMonitor, _CDContextualKeyPath, NWNetworkOfInterest, NSArray, NWNetworkOfInterestManager, NSMutableDictionary;
@protocol NWNetworkOfInterestManagerDelegate, OS_dispatch_queue;



@interface _DKNetworkQualityMonitor : DKMonitor <NWNetworkOfInterestManagerDelegate>



@property (retain, nonatomic) _CDContextualKeyPath *discretionaryInvitedKeyPath; // ivar: _discretionaryInvitedKeyPath
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (nonatomic) NSInteger interfaceType; // ivar: _interfaceType
@property (retain, nonatomic) NWNetworkOfInterest *noi; // ivar: _noi
@property (retain, nonatomic) NSArray *noiKeyPaths; // ivar: _noiKeyPaths
@property (retain, nonatomic) NWNetworkOfInterestManager *noiManager; // ivar: _noiManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noiManagerQueue; // ivar: _noiManagerQueue
@property (retain, nonatomic) _CDContextualKeyPath *predictedQualityKeyPath; // ivar: _predictedQualityKeyPath
@property (nonatomic) NSInteger previousQuality; // ivar: _previousQuality
@property (retain, nonatomic) _CDContextualKeyPath *qualityKeyPath; // ivar: _qualityKeyPath
@property (retain, nonatomic) NSMutableDictionary *statusDictionary; // ivar: _statusDictionary
@property (retain, nonatomic) _CDContextualKeyPath *statusKeyPath; // ivar: _statusKeyPath


+(id)entitlements;
-(id)initForInterfaceType:(NSInteger)arg0 connectionStatusKeyPath:(id)arg1 qualityKeyPath:(id)arg2 predictedQualityKeyPath:(id)arg3 discretionaryInvitedPath:(id)arg4 ;
-(id)loadState;
-(id)predictionTimelineFromNOIPredictions:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)didStartTrackingNOI:(id)arg0 ;
-(void)didStopTrackingAllNOIs:(id)arg0 ;
-(void)didStopTrackingNOI:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateDiscretionaryTrafficInvited;
-(void)updateInstantQuality;
-(void)updateInterfaceClass;
-(void)updatePowerCostDL;
-(void)updatePowerCostUL;
-(void)updatePredictionAsync;


@end


#endif