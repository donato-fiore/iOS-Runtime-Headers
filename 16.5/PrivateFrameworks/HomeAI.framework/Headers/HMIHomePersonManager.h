// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIHOMEPERSONMANAGER_H
#define HMIHOMEPERSONMANAGER_H

@class HMFTimer, NSString, NSOperationQueue, NSMutableDictionary;
@protocol HMFTimerDelegate, HMFLogging, HMIHomePersonManagerDataSource;


#import "HMIPersonManager.h"
#import "HMIHomePersonManagerSettings.h"

@interface HMIHomePersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMFTimer *analyticsTimer; // ivar: _analyticsTimer
@property (weak, nonatomic) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) HMIHomePersonManagerSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *unknownFacesSavedCounts; // ivar: _unknownFacesSavedCounts
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)logCategory;
-(id)initWithUUID:(id)arg0 homeUUID:(id)arg1 ;
-(id)logIdentifier;
-(void)_updateSettings:(id)arg0 ;
-(void)handleMisclassifiedPersonForFaceCrop:(id)arg0 ;
-(void)handleNewFaceEvents:(id)arg0 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg0 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 ;
-(void)handleUpdatedFaceprint:(id)arg0 ;
-(void)handleUpdatedPerson:(id)arg0 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 ;
-(void)handleUpdatedSettings:(id)arg0 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg0 ;
-(void)storeFaceprint:(id)arg0 completion:(id)arg1 ;
-(void)storeUnassociatedFaceCrop:(id)arg0 completion:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif