// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIEXTERNALPERSONMANAGER_H
#define HMIEXTERNALPERSONMANAGER_H

@class NSString, NSOperationQueue, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging, HMIExternalPersonManagerDataSource;


#import "HMIPersonManager.h"
#import "HMIExternalPersonManagerSettings.h"

@interface HMIExternalPersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<HMIExternalPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) HMIExternalPersonManagerSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)logCategory;
-(id)initWithUUID:(id)arg0 homeUUID:(id)arg1 ;
-(id)logIdentifier;
-(void)_updateSettings:(id)arg0 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg0 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 ;
-(void)handleUpdatedFaceprint:(id)arg0 ;
-(void)handleUpdatedPerson:(id)arg0 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 ;
-(void)handleUpdatedSettings:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif