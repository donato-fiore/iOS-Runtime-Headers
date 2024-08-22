// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRSENSORWRITER_H
#define SRSENSORWRITER_H

@class NSArray, NSXPCConnection, NSString, NSDictionary;
@protocol SRAuthorizationStoreReaderAuthorizationDelegate, SRDaemonNotificationDelegate, SRAuthorizationClientDelegate, SRSensorWriterDelegate, SRTCCStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SRDaemonNotification.h"
#import "SRDefaults.h"
#import "SRDatastore.h"
#import "SRAuthorizationStore.h"

@interface SRSensorWriter : NSObject <SRAuthorizationStoreReaderAuthorizationDelegate, SRDaemonNotificationDelegate, SRAuthorizationClientDelegate>

 {
    id<SRSensorWriterDelegate> *_delegate;
    SRDaemonNotification *_daemonNotification;
    SRDefaults *_defaults;
    SRDatastore *_datastore;
    uint8_t _monitoring;
    int _notifyToken;
}


@property (copy, nonatomic) NSArray *_requestedConfigurations; // ivar: __requestedConfigurations
@property NSInteger _writerAuthorizationStatus; // ivar: __writerAuthorizationStatus
@property (retain, nonatomic) SRAuthorizationStore *authStore; // ivar: _authStore
@property BOOL authorized; // ivar: _authorized
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionDidInterrupt; // ivar: _connectionDidInterrupt
@property BOOL connectionDidInvalidate; // ivar: _connectionDidInvalidate
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SRSensorWriterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isMonitoring) BOOL monitoring;
@property (retain) NSDictionary *nextDatastoreFiles; // ivar: _nextDatastoreFiles
@property BOOL requestNewSegmentInFlight; // ivar: _requestNewSegmentInFlight
@property BOOL retryGetMonitoring; // ivar: _retryGetMonitoring
@property (copy) NSString *sensorIdentifier; // ivar: _sensorIdentifier
@property (readonly) Class superclass;
@property (retain) NSObject<SRTCCStore> *tccStore; // ivar: _tccStore
@property (readonly, retain, nonatomic) NSString *writerAuthorizationService; // ivar: _writerAuthorizationService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writerAuthorizationUpdateQueue; // ivar: _writerAuthorizationUpdateQueue


+(id)clientInterface;
+(id)remoteInterface;
+(void)initialize;
-(BOOL)_setSensorConfiguration:(id)arg0 continuousTimestamp:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_setSensorConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)provideSample:(id)arg0 continuousTimestamp:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)provideSample:(id)arg0 error:(*id)arg1 ;
-(BOOL)provideSample:(id)arg0 timestamp:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 continuousTimestamp:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 timestamp:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)provideSampleData:(id)arg0 continuousTimestamp:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)provideSampleData:(id)arg0 error:(*id)arg1 ;
-(BOOL)provideSampleData:(id)arg0 timestamp:(CGFloat)arg1 error:(*id)arg2 ;
-(id)chooseAuthStore;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 xpcConnection:(id)arg1 daemonNotification:(id)arg2 authStore:(id)arg3 tccStore:(id)arg4 ;
-(void)_requestWriterAuthorizationWithCompletion:(id)arg0 ;
-(void)authorizationStore:(id)arg0 didDetermineInitialAuthorizationValues:(id)arg1 ;
-(void)authorizationStore:(id)arg0 didUpdateAuthorizationsForBundleId:(id)arg1 sensors:(id)arg2 ;
-(void)authorizedServicesDidChange:(id)arg0 deniedServices:(id)arg1 dataCollectionEnabled:(BOOL)arg2 onboardingCompleted:(BOOL)arg3 lastModifiedTimes:(id)arg4 forBundleIdentifier:(id)arg5 ;
-(void)checkForMonitoring;
-(void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg0 ;
-(void)daemonNotificationDaemonDidStart:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveUpdateToConfigurationRequests;
-(void)evaluateAuthorizationState;
-(void)evaluateAuthorizationStateWithNewValue:(BOOL)arg0 ;
-(void)flushDatabase;
-(void)provideSample:(id)arg0 ;
-(void)provideSample:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 continuousTimestamp:(NSUInteger)arg2 ;
-(void)provideSampleBytes:(*void)arg0 length:(NSUInteger)arg1 timestamp:(CGFloat)arg2 ;
-(void)provideSampleData:(id)arg0 ;
-(void)provideSampleData:(id)arg0 continuousTimestamp:(NSUInteger)arg1 ;
-(void)provideSampleData:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)registerWithDaemonForWritingIfNeededWithReply:(id)arg0 ;
-(void)requestNewSegment;
-(void)setMetadata:(id)arg0 ;
-(void)setMetadata:(id)arg0 continuousTimestamp:(NSUInteger)arg1 ;
-(void)setupConnection;
-(void)startUpdatingAuthorizations;
-(void)updateWriterAuthorizationStatus;


@end


#endif