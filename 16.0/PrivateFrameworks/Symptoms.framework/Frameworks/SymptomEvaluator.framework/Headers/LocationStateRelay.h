// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LOCATIONSTATERELAY_H
#define LOCATIONSTATERELAY_H

@class RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary, NSArray, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LocationStateRelay : NSObject <CLLocationManagerDelegate>

 {
    *void coreLocationDyLibHandle;
    *void coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    *unk clCopyTechnologiesInUseFunc;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (nonatomic) BOOL LOIUseAuthorized; // ivar: _LOIUseAuthorized
@property (retain) NSArray *allLOIs; // ivar: _allLOIs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL gpsInUse; // ivar: _gpsInUse
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)authorizedToUseCoreRoutine;
-(BOOL)loadCoreLocation;
-(BOOL)loadCoreRoutine;
-(NSInteger)preflightFrameworks;
-(NSUInteger)addPendingLOIBlocks:(id)arg0 ;
-(id)init;
-(id)mobileWiFiLocationManager;
-(id)rtLOITypeToString:(NSInteger)arg0 ;
-(void)callPendingLOIBlocksWithCLLocation:(id)arg0 LOI:(id)arg1 andError:(id)arg2 ;
-(void)cleanUpPendingLOIBlocks;
-(void)dealloc;
-(void)determineIfLocationOfInterestIsKnownOfType:(NSInteger)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)fetchCurrentLocationLOIOnQueue:(id)arg0 desiredAccuracy:(CGFloat)arg1 reply:(id)arg2 ;
-(void)getLocationTechnologyStateForInitialState:(BOOL)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)showLocationArrow;
-(void)unloadFrameworks;


@end


#endif