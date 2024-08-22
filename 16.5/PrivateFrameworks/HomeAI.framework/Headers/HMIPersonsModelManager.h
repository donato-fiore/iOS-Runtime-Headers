// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPERSONSMODELMANAGER_H
#define HMIPERSONSMODELMANAGER_H

@class HMFObject, NSString, NSDictionary, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging;



@interface HMIPersonsModelManager : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *equivalencyTablesByHome; // ivar: _equivalencyTablesByHome
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *personsModelsByHome; // ivar: _personsModelsByHome
@property (readonly) Class superclass;
@property (readonly) NSDictionary *torsoModelsByHome; // ivar: _torsoModelsByHome
@property (readonly) NSDictionary *torsoToFaceCropByHome; // ivar: _torsoToFaceCropByHome
@property (readonly) NSDictionary *userDefinedPersonLinksByHome; // ivar: _userDefinedPersonLinksByHome
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer


+(BOOL)persistModel:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)persistTorsoToFaceCrop:(id)arg0 forHomeUUID:(id)arg1 error:(*id)arg2 ;
+(BOOL)persistTorsoprinterVersionForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(BOOL)persistUserDefinedPersonLinks:(id)arg0 forHomeUUID:(id)arg1 error:(*id)arg2 ;
+(id)faceObservationFromTorsoprint:(id)arg0 ;
+(id)getModelStoragePathForHome:(id)arg0 error:(*id)arg1 ;
+(id)getModelStoragePathForModel:(id)arg0 error:(*id)arg1 ;
+(id)getRootModelStoragePathWithError:(*id)arg0 ;
+(id)getTorsoModelStoragePathForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)getTorsoSubdirectoryPathForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)getTorsoToFaceCropStoragePathForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)getTorsoprinterVersionStoragePathForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)getUserDefinedPersonLinksStoragePathForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)loadModelAtPath:(id)arg0 error:(*id)arg1 ;
+(id)loadTorsoToFaceCrop:(id)arg0 error:(*id)arg1 ;
+(id)loadTorsoprinterVersion:(id)arg0 error:(*id)arg1 ;
+(id)loadUserDefinedPersonLinksForHomeUUID:(id)arg0 error:(*id)arg1 ;
+(id)logCategory;
+(id)minimumUUIDInEquivalencyCell:(id)arg0 ;
+(id)personsModelWithFaceObservationsByID:(id)arg0 error:(*id)arg1 ;
+(id)sharedInstance;
-(BOOL)_hasTorsoprinterVersionChangedForHome:(id)arg0 ;
-(BOOL)_isTorsoFaceCropMapStale:(id)arg0 ;
-(BOOL)_resetStaleTorsoStateForHome:(id)arg0 torsoToFaceCropMap:(id)arg1 ;
-(BOOL)buildPersonsModelForHomeUUID:(id)arg0 sourceUUID:(id)arg1 externalLibrary:(BOOL)arg2 faceObservationsByPerson:(id)arg3 error:(*id)arg4 ;
-(BOOL)loadModelsWithError:(*id)arg0 ;
-(BOOL)removePersonsModelForHomeUUID:(id)arg0 sourceUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateTorsoModelForHome:(id)arg0 torsoAnnotations:(id)arg1 error:(*id)arg2 ;
-(id)buildEquivalencyMapForPersonsModels:(id)arg0 userDefinedPersonLinks:(id)arg1 error:(*id)arg2 ;
-(id)equivalencyCellForPerson:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)faceCropFromTorsoModelForHomeUUID:(id)arg0 personUUID:(id)arg1 sourceUUID:(id)arg2 ;
-(id)homePersonsModelForHomeWithUUID:(id)arg0 ;
-(id)init;
-(id)linkedPredictionsForPrediction:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)loadPersonsModelFromURL:(id)arg0 externalLibrary:(BOOL)arg1 homeUUID:(id)arg2 error:(*id)arg3 ;
-(id)modelURLsFromPath:(id)arg0 error:(*id)arg1 ;
-(id)personsModelWithFaceObservations:(id)arg0 error:(*id)arg1 ;
-(id)predictHomePersonFromFaceObservation:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)predictPersonFromFaceObservation:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)predictPersonFromTorsoObservation:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)summaryForHomeUUID:(id)arg0 error:(*id)arg1 ;
-(void)_loadTorsoDataForHomeUUID:(id)arg0 intoTorsoModelsByHome:(id)arg1 torsoToFaceCropByHome:(id)arg2 ;
-(void)_reset;
-(void)reset;
-(void)timerDidFire:(id)arg0 ;


@end


#endif