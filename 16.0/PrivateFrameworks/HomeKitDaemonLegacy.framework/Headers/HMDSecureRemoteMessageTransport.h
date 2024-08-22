// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSECUREREMOTEMESSAGETRANSPORT_H
#define HMDSECUREREMOTEMESSAGETRANSPORT_H

@class HMFMessageTransport, NSMutableSet, NSMutableDictionary, NSString, HMFFuture, HMFPromise, NSArray;
@protocol HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState, OS_dispatch_queue, HMDSecureRemoteMessageTransportDataSource;


#import "HMDCloudDataSyncStateFilter.h"
#import "HMDRemoteDeviceMonitor.h"
#import "HMDRemoteMessageNotifications.h"

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_secureRemoteSessions;
}


@property (retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // ivar: _cloudDataSyncStateFilter
@property (retain, nonatomic) NSMutableDictionary *currentHomeConfigurations; // ivar: _currentHomeConfigurations
@property (readonly, nonatomic) NSObject<HMDSecureRemoteMessageTransportDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor; // ivar: _deviceMonitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDRemoteMessageNotifications *sessionNotifications; // ivar: _sessionNotifications
@property (readonly, nonatomic) HMFFuture *startFuture; // ivar: _startFuture
@property (readonly, nonatomic) HMFPromise *startPromise; // ivar: _startPromise
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *transports; // ivar: _transports


+(id)defaultTransport;
+(id)logCategory;
+(id)shortDescription;
-(BOOL)_handleReceivedMessage:(id)arg0 transport:(id)arg1 ;
-(BOOL)_haveAllCapabilities:(id)arg0 ;
-(id)_openSecureSessionToDevice:(id)arg0 completionHandler:(id)arg1 ;
-(id)_preferredTransportForMessage:(id)arg0 ;
-(id)_secureRemoteSessionForDevice:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)initWithDataSource:(id)arg0 ;
-(id)prepareAnswerForRequestedCapabilities:(id)arg0 ;
-(id)shortDescription;
-(id)start;
-(void)_handleElectDeviceForIDSSession:(id)arg0 ;
-(void)_handleElectDeviceForUserResponse:(id)arg0 error:(id)arg1 responseQueue:(id)arg2 completion:(id)arg3 ;
-(void)_handleNotificationMessage:(id)arg0 ;
-(void)_handlePingMessage:(id)arg0 ;
-(void)_handleSecureMessage:(id)arg0 fromDevice:(id)arg1 transport:(id)arg2 ;
-(void)_pingDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reset;
-(void)_sendPingToDevice:(id)arg0 timeout:(CGFloat)arg1 restriction:(NSUInteger)arg2 responseHandler:(id)arg3 ;
-(void)_sendSecureMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateDeviceInformationFromMessage:(id)arg0 ;
-(void)configureWithCloudDataSyncStateFilter:(id)arg0 ;
-(void)electDeviceForHH1User:(id)arg0 destination:(id)arg1 deviceCapabilities:(id)arg2 responseTimeout:(CGFloat)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5 ;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)openSecureSessionToDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)pingDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeHome:(id)arg0 ;
-(void)reset;
-(void)secureRemoteSession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)secureRemoteSession:(id)arg0 receivedRequestToSendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateHome:(id)arg0 configurationVersion:(NSInteger)arg1 ;


@end


#endif