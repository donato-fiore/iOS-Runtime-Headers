// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLIENTDATACOLLECTIONTASKSERVER_H
#define HDCLIENTDATACOLLECTIONTASKSERVER_H

@class HKDevice, NSError, HKDataCollectorTaskServerConfiguration, NSUUID, HKDataCollectorCollectionConfiguration, NSMutableDictionary, HKSource, NSString;
@protocol HKDataCollectorTaskServerInterface, HDDataCollector, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDDataCollectorState.h"
#import "HDDataAggregator.h"

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HKDataCollectorTaskServerInterface, HDDataCollector>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorState *_dataCollectorState;
    HKDevice *_device;
    NSError *_fatalError;
    HKDataCollectorTaskServerConfiguration *_configuration;
    NSUUID *_registrationUUID;
    HDDataAggregator *_aggregator;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    NSMutableDictionary *_lastDatumByDevice;
    HKSource *_clientSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(Class)sensorDatumClassForAggregator:(id)arg0 ;
-(id)exportedInterface;
-(id)identifierForDataAggregator:(id)arg0 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(id)sourceForDataAggregator:(id)arg0 ;
-(void)beginCollectionForDataAggregator:(id)arg0 lastPersistedSensorDatum:(id)arg1 ;
-(void)connectionConfigured;
-(void)connectionInvalidated;
-(void)dataAggregator:(id)arg0 didPersistDatums:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)dataAggregator:(id)arg0 requestsCollectionThroughDate:(id)arg1 completion:(id)arg2 ;
-(void)dataAggregator:(id)arg0 wantsCollectionWithConfiguration:(id)arg1 ;
-(void)remote_insertDatums:(id)arg0 device:(id)arg1 metadata:(id)arg2 batchUUID:(id)arg3 registrationUUID:(id)arg4 completion:(id)arg5 ;
-(void)remote_registerWithCompletion:(id)arg0 ;
-(void)remote_synchronizeWithCompletion:(id)arg0 ;


@end


#endif