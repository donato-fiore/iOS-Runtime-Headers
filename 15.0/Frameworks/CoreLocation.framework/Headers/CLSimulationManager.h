// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSIMULATIONMANAGER_H
#define CLSIMULATIONMANAGER_H

@class NSXPCConnection;
@protocol CLSimulationXPCServerInterface;

#import <Foundation/Foundation.h>


@interface CLSimulationManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly) NSObject<CLSimulationXPCServerInterface> *daemonProxy;
@property (nonatomic) unsigned char locationDeliveryBehavior; // ivar: _locationDeliveryBehavior
@property (nonatomic) CGFloat locationDistance; // ivar: _locationDistance
@property (nonatomic) CGFloat locationInterval; // ivar: _locationInterval
@property (nonatomic) unsigned char locationRepeatBehavior; // ivar: _locationRepeatBehavior
@property (nonatomic) CGFloat locationSpeed; // ivar: _locationSpeed


-(id)availableScenarios;
-(id)init;
-(id)localizedNameForScenario:(id)arg0 ;
-(id)scenariosPath;
-(void)appendSimulatedLocation:(id)arg0 ;
-(void)clearSimulatedCells;
-(void)clearSimulatedLocations;
-(void)flush;
-(void)getFencesForBundleID:(id)arg0 withHandler:(id)arg1 ;
-(void)loadScenarioFromURL:(id)arg0 ;
-(void)selectScenario:(id)arg0 ;
-(void)setSimulatedCell:(id)arg0 ;
-(void)setSimulatedCellRegistrationStatus:(BOOL)arg0 ;
-(void)setSimulatedWifiPower:(BOOL)arg0 ;
-(void)setWifiScanResults:(id)arg0 ;
-(void)simulateBeaconWithProximityUUID:(id)arg0 major:(NSInteger)arg1 minor:(NSInteger)arg2 eventType:(unsigned char)arg3 ;
-(void)simulateFenceWithBundleID:(id)arg0 andFenceID:(id)arg1 eventType:(unsigned char)arg2 atLocation:(id)arg3 ;
-(void)simulateSignificantLocationChange:(id)arg0 ;
-(void)simulateVisit:(id)arg0 ;
-(void)startCellSimulation;
-(void)startLocationSimulation;
-(void)startWifiSimulation;
-(void)stopCellSimulation;
-(void)stopLocationSimulation;
-(void)stopWifiSimulation;


@end


#endif