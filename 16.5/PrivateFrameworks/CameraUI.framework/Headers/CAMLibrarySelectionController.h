// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMLIBRARYSELECTIONCONTROLLER_H
#define CAMLIBRARYSELECTIONCONTROLLER_H

@class CLLocation, NSMutableSet, GEOLocationShifter, NSNumber, PHCameraSmartSharingMetadata, NSString, NSArray;
@protocol CAMLocationControllerListener, CAMPeopleProximityDelegate, CAMLibrarySelectionLocationProvider, CAMPeopleProximityControllerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CAMLibrarySelectionSignalResult.h"
#import "CAMLibrarySelectionSession.h"

@interface CAMLibrarySelectionController : NSObject <CAMLocationControllerListener, CAMPeopleProximityDelegate>



@property (nonatomic) int _resultQueue_authorizationStatus; // ivar: __resultQueue_authorizationStatus
@property (retain, nonatomic) CLLocation *_resultQueue_currentLocation; // ivar: __resultQueue_currentLocation
@property (retain, nonatomic) NSMutableSet *_resultQueue_identitiesInProximity; // ivar: __resultQueue_identitiesInProximity
@property (retain, nonatomic) GEOLocationShifter *_resultQueue_locationShifter; // ivar: __resultQueue_locationShifter
@property (retain, nonatomic) NSNumber *_resultQueue_needsLocationShifting; // ivar: __resultQueue_needsLocationShifting
@property (retain, nonatomic) PHCameraSmartSharingMetadata *_resultQueue_smartSharingMetadata; // ivar: __resultQueue_smartSharingMetadata
@property (retain, nonatomic) CAMLibrarySelectionSignalResult *acquiredSignalResults; // ivar: _acquiredSignalResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identitiesToScan; // ivar: _identitiesToScan
@property (retain, nonatomic) NSObject<CAMLibrarySelectionLocationProvider> *locationProvider; // ivar: _locationProvider
@property (nonatomic) BOOL peopleProximityDetectionSupported; // ivar: _peopleProximityDetectionSupported
@property (copy, nonatomic) id *ppt_changeHandler; // ivar: _ppt_changeHandler
@property (retain, nonatomic) NSObject<CAMPeopleProximityControllerProtocol> *proximityController; // ivar: _proximityController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // ivar: _resultQueue
@property (retain, nonatomic) CAMLibrarySelectionSession *session; // ivar: _session
@property (readonly, nonatomic) NSInteger sharedLibraryInitialMode;
@property (readonly, nonatomic) NSInteger sharedLibraryMode;
@property (retain, nonatomic) Class smartSharingMetadataProvider; // ivar: _smartSharingMetadataProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInteractionsCount;


-(BOOL)_resultQueue_needsLocationShiftingForLocation:(id)arg0 ;
-(id)_diagnosticsForLocation:(id)arg0 currentLocation:(id)arg1 ;
-(id)_retrieveMetadata;
-(id)initWithLocationProvider:(id)arg0 ;
-(id)librarySelectionDiagnostics;
-(id)listeningQueue;
-(id)tapToRadarAlertController;
-(void)_ensureProximityController;
-(void)_newSessionWithDelegate:(id)arg0 ;
-(void)_ppt_callChangeHandler;
-(void)_resultQueue_currentLocationUpdatedAndShiftedIfNeeded:(id)arg0 ;
-(void)_resultQueue_shiftCoordinatesForLocation:(id)arg0 ;
-(void)_stopAcquiringSignalsAndClear:(BOOL)arg0 ;
-(void)authorizationStatusUpdated:(int)arg0 ;
-(void)currentLocationUpdated:(id)arg0 ;
-(void)didDiscoverIdentity:(id)arg0 ;
-(void)didLoseIdentity:(id)arg0 ;
-(void)ppt_installChangeHandler:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)startAcquiringSignals;
-(void)startNewSession;
-(void)stopAcquiringSignals;
-(void)stopAndClearAcquiredSignals;
-(void)userDidPickSharedLibraryMode:(NSInteger)arg0 ;


@end


#endif