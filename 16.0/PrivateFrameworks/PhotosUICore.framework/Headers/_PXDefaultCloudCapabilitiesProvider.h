// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXDEFAULTCLOUDCAPABILITIESPROVIDER_H
#define _PXDEFAULTCLOUDCAPABILITIESPROVIDER_H

@class NSString, NSError, NSNumber, NSMutableArray, SKCloudServiceController;
@protocol PXCloudCapabilitiesProvider, PXSettingsKeyObserver, PXChangeObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface _PXDefaultCloudCapabilitiesProvider : PXObservable <PXCloudCapabilitiesProvider, PXSettingsKeyObserver, PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXUpdater *mainQueue_updater; // ivar: _mainQueue_updater
@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (retain, nonatomic) NSNumber *stateQueue_cloudServiceCapability; // ivar: _stateQueue_cloudServiceCapability
@property (retain, nonatomic) NSError *stateQueue_error; // ivar: _stateQueue_error
@property (readonly, nonatomic) NSMutableArray *stateQueue_loadHandlers; // ivar: _stateQueue_loadHandlers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, nonatomic) SKCloudServiceController *workQueue_storeKitController; // ivar: _workQueue_storeKitController


-(NSInteger)_stateQueue_statusForCapability:(id)arg0 ;
-(NSInteger)statusForCapability:(id)arg0 ;
-(id)init;
-(void)_handleCloudServiceCapabilityResult:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_handleSKCloudServiceCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_invalidateCloudServiceCapabilities;
-(void)_setNeedsUpdate;
-(void)_stateQueue_setCloudServiceCapability:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_updateCloudServiceCapabilities;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)requestStatusForCapability:(id)arg0 handler:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)startGatheringCapabilityStatuses;


@end


#endif