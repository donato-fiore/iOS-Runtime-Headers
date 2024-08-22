// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASCENARIOCLASSIFIER_H
#define SASCENARIOCLASSIFIER_H

@class NSHashTable, CLRegion, CLCircularRegion, NSString, NSUUID, NSMutableSet, NSDate, NSMutableDictionary;
@protocol SAScenarioClassifierServiceProtocol, SAFenceManagerClientProtocol, SATravelTypeClassifierClientProtocol, SAFenceManagerRequestProtocol;

#import <Foundation/Foundation.h>


@interface SAScenarioClassifier : NSObject <SAScenarioClassifierServiceProtocol, SAFenceManagerClientProtocol, SATravelTypeClassifierClientProtocol>



@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (copy, nonatomic) CLRegion *currentUnsafeLocation; // ivar: _currentUnsafeLocation
@property (copy, nonatomic) CLCircularRegion *currentVisit; // ivar: _currentVisit
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SAFenceManagerRequestProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSUUID *deviceUuid; // ivar: _deviceUuid
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CLRegion *lastUnsafeLocation; // ivar: _lastUnsafeLocation
@property (retain, nonatomic) NSMutableSet *safeLocations; // ivar: _safeLocations
@property (readonly, copy, nonatomic) NSDate *scenarioChangeDate; // ivar: _scenarioChangeDate
@property (nonatomic) NSUInteger scenarioClassification; // ivar: _scenarioClassification
@property (retain, nonatomic) NSMutableDictionary *statesBySafeLocation; // ivar: _statesBySafeLocation
@property (readonly) Class superclass;


+(id)convertSAScenarioClassToString:(NSUInteger)arg0 ;
-(BOOL)_hasAllSafeLocationStatesKnown;
-(BOOL)_isInsideAnySafeLocation;
-(BOOL)_setNewScenarioClass:(NSUInteger)arg0 ;
-(id)_findSafeLocationWithUUID:(id)arg0 ;
-(id)initWithDeviceUuid:(id)arg0 ;
-(id)initWithDeviceUuid:(id)arg0 scenarioClass:(NSUInteger)arg1 unsafeLocation:(id)arg2 ;
-(void)_addSafeLocation:(id)arg0 ;
-(void)_addUnsafeLocation:(id)arg0 ;
-(void)_notifyAllClientsOfScenarioChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)_removeSafeLocation:(id)arg0 ;
-(void)_removeUnsafeLocation:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)addGeofence:(id)arg0 ;
-(void)dealloc;
-(void)didChangeTravelTypeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)didDetermineState:(NSUInteger)arg0 forSafeLocation:(id)arg1 forDevice:(id)arg2 ;
-(void)didDetermineState:(NSUInteger)arg0 forUnsafeLocation:(id)arg1 forDevice:(id)arg2 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)removeGeofence:(id)arg0 ;


@end


#endif