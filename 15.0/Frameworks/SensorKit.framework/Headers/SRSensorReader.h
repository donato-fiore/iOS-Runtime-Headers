// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSENSORREADER_H
#define SRSENSORREADER_H

@class NSDictionary, NSDate, NSString, NSXPCConnection;
@protocol SRAuthorizationClientDelegate, SRDaemonNotificationDelegate, SRSensorReaderDelegate;

#import <Foundation/Foundation.h>

#import "SRDaemonNotification.h"
#import "SRDatastore.h"
#import "SRAuthorizationClient.h"

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate>

 {
    SRDaemonNotification *_daemonNotification;
    SRDatastore *_datastore;
    NSDictionary *_deviceDetails;
    CGFloat _serviceStartTime;
    CGFloat _earliestEligibleTime;
    uint8_t _authState;
}


@property (retain) NSDate *_lastModifiedAuthorizationTime; // ivar: __lastModifiedAuthorizationTime
@property (retain) SRAuthorizationClient *authorizationClient; // ivar: _authorizationClient
@property (readonly) NSInteger authorizationStatus;
@property (copy) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL bypassHoldingPeriod; // ivar: _bypassHoldingPeriod
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionDidInvalidate; // ivar: _connectionDidInvalidate
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SRSensorReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat earliestEligibleTime;
@property (readonly, nonatomic) Class exportingSampleClass; // ivar: _exportingSampleClass
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *nextDatastoreFiles; // ivar: _nextDatastoreFiles
@property (readonly, nonatomic) Class sampleClass; // ivar: _sampleClass
@property (copy) NSString *sensor; // ivar: _sensor
@property (readonly, nonatomic) CGFloat serviceStartTime;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)createExportDataForServices:(SEL)arg0 withCompletionHandler:(id)arg1 ;
+(id)createExportDataWithCompletionHandler:(SEL)arg0 ;
+(id)new;
+(id)remoteInterface;
+(void)authorizationRequestStatusForBundle:(id)arg0 sensors:(id)arg1 completionHandler:(id)arg2 ;
+(void)initialize;
+(void)requestAuthorizationForBundle:(id)arg0 sensors:(id)arg1 legacyPromptErrorBehavior:(BOOL)arg2 withCompletionHandler:(id)arg3 ;
+(void)requestAuthorizationForBundle:(id)arg0 sensors:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)requestAuthorizationForSensors:(id)arg0 completion:(id)arg1 ;
-(BOOL)fetchingRequest:(id)arg0 didFetchResult:(id)arg1 ;
-(BOOL)isAuthorized;
-(id)createExportDataWithCompletionHandler:(SEL)arg0 ;
-(id)init;
-(id)initWithSensor:(id)arg0 ;
-(id)initWithSensor:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSensor:(id)arg0 xpcConnection:(id)arg1 daemonNotification:(id)arg2 authorizationClient:(id)arg3 bundleId:(id)arg4 ;
-(void)_startRecordingWithSensorConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)authorizedServicesDidChange:(id)arg0 deniedServices:(id)arg1 dataCollectionEnabled:(BOOL)arg2 onboardingCompleted:(BOOL)arg3 lastModifiedTimes:(id)arg4 forBundleIdentifier:(id)arg5 ;
-(void)continueFetchRequest:(id)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 withDatastoreFiles:(id)arg3 callback:(id)arg4 ;
-(void)daemonNotificationDaemonDidStart:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteFetch:(id)arg0 ;
-(void)didFetchDevices:(id)arg0 ;
-(void)fetch:(id)arg0 ;
-(void)fetchDevices;
-(void)fetchDevices:(id)arg0 ;
-(void)fetchDevicesDidFailWithError:(id)arg0 ;
-(void)fetchDevicesWithRetryAttempt:(int)arg0 ;
-(void)fetchReaderMetadata;
-(void)fetchSampleBytesFrom:(CGFloat)arg0 to:(CGFloat)arg1 inSegment:(id)arg2 fetchRequest:(id)arg3 retryAttempt:(NSInteger)arg4 sampleCallback:(id)arg5 ;
-(void)fetchSampleBytesFrom:(CGFloat)arg0 to:(CGFloat)arg1 inSegment:(id)arg2 fetchRequest:(id)arg3 sampleCallback:(id)arg4 ;
-(void)fetchingRequest:(id)arg0 failedWithError:(id)arg1 ;
-(void)setExportingSampleFromDescription:(id)arg0 ;
-(void)setupConnection;
-(void)startRecording;
-(void)startRecordingFailedWithError:(id)arg0 ;
-(void)startRecordingWithCompletionHandler:(id)arg0 ;
-(void)stopRecording;
-(void)stopRecordingFailedWithError:(id)arg0 ;
-(void)stopRecordingWithCompletionHandler:(id)arg0 ;


@end


#endif